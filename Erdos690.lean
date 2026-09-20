/-
  Erdős Problem 690 / JSP-000690
  Is there a three-uniform, three-chromatic-critical hypergraph with minimum degree at least seven?

  Answer: YES.

  Construction by Ruiliang Li (arXiv:2512.24850, 2025):
  A 3-uniform hypergraph H on 9 vertices {1,...,9} with 22 edges,
  minimum degree 7, chromatic number 3, and critically 3-chromatic
  (deleting any edge or vertex makes it 2-colourable).

  This file formalizes the verification in pure Lean 4 (no external dependencies).
-/

namespace Erdos690

/-- The 9 vertices are {1, 2, ..., 9}. We represent colorings as 9-bit naturals. -/
def numVerts : Nat := 9

/-- Color of vertex v (1-indexed) under coloring c. true = blue, false = red. -/
def colorOf (c : Nat) (v : Nat) : Bool :=
  c.testBit (v - 1)

/-- An edge is monochromatic under coloring c if all 3 vertices have the same color. -/
def isMono (c : Nat) (a b d : Nat) : Bool :=
  colorOf c a == colorOf c b && colorOf c b == colorOf c d

/-- The 22 edges of the hypergraph H. -/
def edges : List (Nat × Nat × Nat) :=
  [(1,2,3), (1,2,9), (1,3,8), (1,4,6), (1,4,8), (1,4,9), (1,5,7), (1,5,8), (1,5,9), (1,6,7),
   (2,3,6), (2,3,7), (2,4,9), (2,5,9), (2,6,7), (3,4,8), (3,5,8), (3,6,7), (4,6,8), (4,6,9),
   (5,7,8), (5,7,9)]

/-- A coloring c is proper for a set of edges if no edge is monochromatic. -/
def isProperFor (c : Nat) (es : List (Nat × Nat × Nat)) : Bool :=
  es.all (fun e => !isMono c e.1 e.2.1 e.2.2)

/-- c is a proper 2-coloring of H iff no edge of H is monochromatic under c. -/
def isProper (c : Nat) : Bool := isProperFor c edges

/-- All 2^9 = 512 possible colorings. -/
def allColorings : List Nat := List.range 512

/-- H is not 2-colourable: no coloring in [0, 512) is proper. -/
def notTwoColorableVal : Bool :=
  allColorings.all (fun c => !isProper c)

/-- Degree of vertex v in H (number of edges containing v). -/
def degree (v : Nat) : Nat :=
  edges.foldl (fun acc e => if e.1 == v ∨ e.2.1 == v ∨ e.2.2 == v then acc + 1 else acc) 0

/-- Check that H is 3-uniform (all edges have exactly 3 distinct vertices). -/
def allThreeUniformVal : Bool :=
  edges.all (fun e => e.1 ≠ e.2.1 && e.1 ≠ e.2.2 && e.2.1 ≠ e.2.2)

/-- Edges not containing vertex v. -/
def edgesWithoutVertex (v : Nat) : List (Nat × Nat × Nat) :=
  edges.filter (fun e => e.1 ≠ v && e.2.1 ≠ v && e.2.2 ≠ v)

/-- H-v is 2-colourable: some coloring makes all edges not containing v non-monochromatic. -/
def isVertexCritical (v : Nat) : Bool :=
  allColorings.any (fun c => isProperFor c (edgesWithoutVertex v))

/-- All vertices have H-v 2-colourable. -/
def allVertexCriticalVal : Bool :=
  (List.range 10).all (fun v => v == 0 || isVertexCritical v)

/-- Edges minus one specific edge. -/
def edgesWithoutEdge (e : Nat × Nat × Nat) : List (Nat × Nat × Nat) :=
  edges.filter (fun f => f ≠ e)

/-- H-e is 2-colourable: some coloring makes all edges except e non-monochromatic. -/
def isEdgeCritical (e : Nat × Nat × Nat) : Bool :=
  allColorings.any (fun c => isProperFor c (edgesWithoutEdge e))

/-- All edges have H-e 2-colourable. -/
def allEdgeCriticalVal : Bool :=
  edges.all (fun e => isEdgeCritical e)

-- === Verification theorems (all by decide) ===

set_option maxRecDepth 1000000

theorem threeUniform : allThreeUniformVal = true := by decide

theorem notTwoColorable : notTwoColorableVal = true := by decide

theorem edgeCritical : allEdgeCriticalVal = true := by decide

theorem vertexCritical : allVertexCriticalVal = true := by decide

-- Degree checks
theorem deg1 : degree 1 = 10 := by decide
theorem deg2 : degree 2 = 7 := by decide
theorem deg3 : degree 3 = 7 := by decide
theorem deg4 : degree 4 = 7 := by decide
theorem deg5 : degree 5 = 7 := by decide
theorem deg6 : degree 6 = 7 := by decide
theorem deg7 : degree 7 = 7 := by decide
theorem deg8 : degree 8 = 7 := by decide
theorem deg9 : degree 9 = 7 := by decide

/-- Minimum degree of H is at least 7. -/
theorem minDegreeAtLeast7 : ∀ v : Nat, 1 ≤ v → v ≤ 9 → degree v ≥ 7 := by
  intro v hv1 hv9
  have h : v = 1 ∨ v = 2 ∨ v = 3 ∨ v = 4 ∨ v = 5 ∨ v = 6 ∨ v = 7 ∨ v = 8 ∨ v = 9 := by omega
  rcases h with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  · rw [deg1]; omega
  · rw [deg2]; omega
  · rw [deg3]; omega
  · rw [deg4]; omega
  · rw [deg5]; omega
  · rw [deg6]; omega
  · rw [deg7]; omega
  · rw [deg8]; omega
  · rw [deg9]; omega

/-- The main theorem: there exists a 3-uniform, critically 3-chromatic hypergraph
    with minimum degree at least 7. -/
theorem erdos_690 :
    allThreeUniformVal = true ∧           -- H is 3-uniform
    notTwoColorableVal = true ∧           -- H is not 2-colourable (χ ≥ 3)
    allEdgeCriticalVal = true ∧           -- H-e is 2-colourable for every edge e
    allVertexCriticalVal = true ∧         -- H-v is 2-colourable for every vertex v
    (∀ v : Nat, 1 ≤ v → v ≤ 9 → degree v ≥ 7)  -- minimum degree ≥ 7
    := by
  refine ⟨threeUniform, notTwoColorable, edgeCritical, vertexCritical, minDegreeAtLeast7⟩

end Erdos690
