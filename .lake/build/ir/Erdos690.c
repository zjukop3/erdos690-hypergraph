// Lean compiler output
// Module: Erdos690
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Nat_testBit(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_numVerts;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_colorOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_colorOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isMono(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__0 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__0_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__0_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__1 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__1_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__2 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__2_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__2_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__3 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__3_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__4 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__4_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__4_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__5 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__5_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__6 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__6_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__6_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__7 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__7_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__8 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__8_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__8_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__9 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__9_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__10 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__10_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__10_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__11 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__11_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__12 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__12_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__12_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__13 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__13_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__14 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__14_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__14_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__15 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__15_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__16 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__16_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__16_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__17 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__17_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__18 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__18_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__18_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__19 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__19_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__20 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__20_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__20_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__21 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__21_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__22 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__22_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__22_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__23 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__23_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__10_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__24 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__24_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__16_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__25 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__25_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__18_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__26 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__26_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__8_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__27 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__27_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__14_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__28 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__28_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__18_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__29 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__29_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__30 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__30_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__30_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__31 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__31_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__32 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__32_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__32_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__33 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__33_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__34 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__34_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__34_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__35 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__35_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__36 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__36_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__36_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__37 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__37_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__38 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__38_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__35_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__38_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__39 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__39_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__33_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__39_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__40 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__40_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__31_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__40_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__41 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__41_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__29_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__41_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__42 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__42_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__28_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__42_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__43 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__43_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__27_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__43_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__44 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__44_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__26_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__44_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__45 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__45_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__25_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__45_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__46 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__46_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__24_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__46_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__47 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__47_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__23_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__47_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__48 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__48_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__21_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__48_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__49 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__49_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__19_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__49_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__50 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__50_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__17_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__50_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__51 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__51_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__15_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__51_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__52 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__52_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__13_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__52_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__53 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__53_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__11_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__53_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__54 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__54_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__9_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__54_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__55 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__55_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__7_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__55_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__56 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__56_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__5_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__56_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__57 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__57_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__3_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__57_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__58 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__58_value;
static const lean_ctor_object lp_erdos690__hypergraph_Erdos690_edges___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__1_value),((lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__58_value)}};
static const lean_object* lp_erdos690__hypergraph_Erdos690_edges___closed__59 = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__59_value;
LEAN_EXPORT const lean_object* lp_erdos690__hypergraph_Erdos690_edges = (const lean_object*)&lp_erdos690__hypergraph_Erdos690_edges___closed__59_value;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isProperFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isProperFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isProper(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isProper___boxed(lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_allColorings___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_erdos690__hypergraph_Erdos690_allColorings___closed__0;
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_allColorings;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_notTwoColorableVal;
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_degree(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_degree___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_allThreeUniformVal;
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isVertexCritical(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isVertexCritical___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0;
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutEdge(lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isEdgeCritical(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isEdgeCritical___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0;
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal;
static lean_object* _init_lp_erdos690__hypergraph_Erdos690_numVerts(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(9u);
return v___x_1_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_colorOf(lean_object* v_c_2_, lean_object* v_v_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = lean_nat_sub(v_v_3_, v___x_4_);
v___x_6_ = l_Nat_testBit(v_c_2_, v___x_5_);
lean_dec(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_colorOf___boxed(lean_object* v_c_7_, lean_object* v_v_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = lp_erdos690__hypergraph_Erdos690_colorOf(v_c_7_, v_v_8_);
lean_dec(v_v_8_);
lean_dec(v_c_7_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isMono(lean_object* v_c_11_, lean_object* v_a_12_, lean_object* v_b_13_, lean_object* v_d_14_){
_start:
{
uint8_t v___y_16_; uint8_t v___y_20_; uint8_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lp_erdos690__hypergraph_Erdos690_colorOf(v_c_11_, v_a_12_);
v___x_22_ = lp_erdos690__hypergraph_Erdos690_colorOf(v_c_11_, v_b_13_);
if (v___x_21_ == 0)
{
if (v___x_22_ == 0)
{
uint8_t v___x_23_; 
v___x_23_ = 1;
v___y_16_ = v___x_23_;
goto v___jp_15_;
}
else
{
v___y_20_ = v___x_21_;
goto v___jp_19_;
}
}
else
{
v___y_20_ = v___x_22_;
goto v___jp_19_;
}
v___jp_15_:
{
uint8_t v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lp_erdos690__hypergraph_Erdos690_colorOf(v_c_11_, v_b_13_);
v___x_18_ = lp_erdos690__hypergraph_Erdos690_colorOf(v_c_11_, v_d_14_);
if (v___x_17_ == 0)
{
if (v___x_18_ == 0)
{
return v___y_16_;
}
else
{
return v___x_17_;
}
}
else
{
return v___x_18_;
}
}
v___jp_19_:
{
if (v___y_20_ == 0)
{
return v___y_20_;
}
else
{
v___y_16_ = v___y_20_;
goto v___jp_15_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isMono___boxed(lean_object* v_c_24_, lean_object* v_a_25_, lean_object* v_b_26_, lean_object* v_d_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = lp_erdos690__hypergraph_Erdos690_isMono(v_c_24_, v_a_25_, v_b_26_, v_d_27_);
lean_dec(v_d_27_);
lean_dec(v_b_26_);
lean_dec(v_a_25_);
lean_dec(v_c_24_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(lean_object* v_c_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
uint8_t v___x_213_; 
v___x_213_ = 1;
return v___x_213_;
}
else
{
lean_object* v_head_214_; lean_object* v_snd_215_; lean_object* v_tail_216_; lean_object* v_fst_217_; lean_object* v_fst_218_; lean_object* v_snd_219_; uint8_t v___x_220_; 
v_head_214_ = lean_ctor_get(v_x_212_, 0);
v_snd_215_ = lean_ctor_get(v_head_214_, 1);
v_tail_216_ = lean_ctor_get(v_x_212_, 1);
v_fst_217_ = lean_ctor_get(v_head_214_, 0);
v_fst_218_ = lean_ctor_get(v_snd_215_, 0);
v_snd_219_ = lean_ctor_get(v_snd_215_, 1);
v___x_220_ = lp_erdos690__hypergraph_Erdos690_isMono(v_c_211_, v_fst_217_, v_fst_218_, v_snd_219_);
if (v___x_220_ == 0)
{
v_x_212_ = v_tail_216_;
goto _start;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = 0;
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0___boxed(lean_object* v_c_223_, lean_object* v_x_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(v_c_223_, v_x_224_);
lean_dec(v_x_224_);
lean_dec(v_c_223_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isProperFor(lean_object* v_c_227_, lean_object* v_es_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(v_c_227_, v_es_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isProperFor___boxed(lean_object* v_c_230_, lean_object* v_es_231_){
_start:
{
uint8_t v_res_232_; lean_object* v_r_233_; 
v_res_232_ = lp_erdos690__hypergraph_Erdos690_isProperFor(v_c_230_, v_es_231_);
lean_dec(v_es_231_);
lean_dec(v_c_230_);
v_r_233_ = lean_box(v_res_232_);
return v_r_233_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isProper(lean_object* v_c_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_236_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(v_c_234_, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isProper___boxed(lean_object* v_c_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = lp_erdos690__hypergraph_Erdos690_isProper(v_c_237_);
lean_dec(v_c_237_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
static lean_object* _init_lp_erdos690__hypergraph_Erdos690_allColorings___closed__0(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(512u);
v___x_241_ = l_List_range(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_lp_erdos690__hypergraph_Erdos690_allColorings(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&lp_erdos690__hypergraph_Erdos690_allColorings___closed__0, &lp_erdos690__hypergraph_Erdos690_allColorings___closed__0_once, _init_lp_erdos690__hypergraph_Erdos690_allColorings___closed__0);
return v___x_242_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0(lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_244_; 
v___x_244_ = 1;
return v___x_244_;
}
else
{
lean_object* v_head_245_; lean_object* v_tail_246_; uint8_t v___x_247_; 
v_head_245_ = lean_ctor_get(v_x_243_, 0);
v_tail_246_ = lean_ctor_get(v_x_243_, 1);
v___x_247_ = lp_erdos690__hypergraph_Erdos690_isProper(v_head_245_);
if (v___x_247_ == 0)
{
v_x_243_ = v_tail_246_;
goto _start;
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0___boxed(lean_object* v_x_250_){
_start:
{
uint8_t v_res_251_; lean_object* v_r_252_; 
v_res_251_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0(v_x_250_);
lean_dec(v_x_250_);
v_r_252_ = lean_box(v_res_251_);
return v_r_252_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0(void){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lp_erdos690__hypergraph_Erdos690_allColorings;
v___x_254_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_notTwoColorableVal_spec__0(v___x_253_);
return v___x_254_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_notTwoColorableVal(void){
_start:
{
uint8_t v___x_255_; 
v___x_255_ = lean_uint8_once(&lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0, &lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0_once, _init_lp_erdos690__hypergraph_Erdos690_notTwoColorableVal___closed__0);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0(lean_object* v_v_256_, lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
return v_x_257_;
}
else
{
lean_object* v_head_259_; lean_object* v_tail_260_; lean_object* v_fst_265_; lean_object* v_snd_266_; uint8_t v___x_267_; 
v_head_259_ = lean_ctor_get(v_x_258_, 0);
v_tail_260_ = lean_ctor_get(v_x_258_, 1);
v_fst_265_ = lean_ctor_get(v_head_259_, 0);
v_snd_266_ = lean_ctor_get(v_head_259_, 1);
v___x_267_ = lean_nat_dec_eq(v_fst_265_, v_v_256_);
if (v___x_267_ == 0)
{
lean_object* v_fst_268_; lean_object* v_snd_269_; uint8_t v___x_270_; 
v_fst_268_ = lean_ctor_get(v_snd_266_, 0);
v_snd_269_ = lean_ctor_get(v_snd_266_, 1);
v___x_270_ = lean_nat_dec_eq(v_fst_268_, v_v_256_);
if (v___x_270_ == 0)
{
uint8_t v___x_271_; 
v___x_271_ = lean_nat_dec_eq(v_snd_269_, v_v_256_);
if (v___x_271_ == 0)
{
v_x_258_ = v_tail_260_;
goto _start;
}
else
{
goto v___jp_261_;
}
}
else
{
goto v___jp_261_;
}
}
else
{
goto v___jp_261_;
}
v___jp_261_:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_nat_add(v_x_257_, v___x_262_);
lean_dec(v_x_257_);
v_x_257_ = v___x_263_;
v_x_258_ = v_tail_260_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0___boxed(lean_object* v_v_273_, lean_object* v_x_274_, lean_object* v_x_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0(v_v_273_, v_x_274_, v_x_275_);
lean_dec(v_x_275_);
lean_dec(v_v_273_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_degree(lean_object* v_v_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_280_ = lp_erdos690__hypergraph_List_foldl___at___00Erdos690_degree_spec__0(v_v_277_, v___x_278_, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_degree___boxed(lean_object* v_v_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = lp_erdos690__hypergraph_Erdos690_degree(v_v_281_);
lean_dec(v_v_281_);
return v_res_282_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0(lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
uint8_t v___x_284_; 
v___x_284_ = 1;
return v___x_284_;
}
else
{
lean_object* v_head_285_; lean_object* v_snd_286_; lean_object* v_tail_287_; lean_object* v_fst_288_; lean_object* v_fst_289_; lean_object* v_snd_290_; uint8_t v___x_291_; 
v_head_285_ = lean_ctor_get(v_x_283_, 0);
v_snd_286_ = lean_ctor_get(v_head_285_, 1);
v_tail_287_ = lean_ctor_get(v_x_283_, 1);
v_fst_288_ = lean_ctor_get(v_head_285_, 0);
v_fst_289_ = lean_ctor_get(v_snd_286_, 0);
v_snd_290_ = lean_ctor_get(v_snd_286_, 1);
v___x_291_ = lean_nat_dec_eq(v_fst_288_, v_fst_289_);
if (v___x_291_ == 0)
{
uint8_t v___x_292_; 
v___x_292_ = lean_nat_dec_eq(v_fst_288_, v_snd_290_);
if (v___x_292_ == 0)
{
uint8_t v___x_293_; 
v___x_293_ = lean_nat_dec_eq(v_fst_289_, v_snd_290_);
if (v___x_293_ == 0)
{
v_x_283_ = v_tail_287_;
goto _start;
}
else
{
return v___x_292_;
}
}
else
{
return v___x_291_;
}
}
else
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0___boxed(lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0(v_x_296_);
lean_dec(v_x_296_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0(void){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_300_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allThreeUniformVal_spec__0(v___x_299_);
return v___x_300_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allThreeUniformVal(void){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = lean_uint8_once(&lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0, &lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0_once, _init_lp_erdos690__hypergraph_Erdos690_allThreeUniformVal___closed__0);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0(lean_object* v_v_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
if (lean_obj_tag(v_a_303_) == 0)
{
lean_object* v___x_305_; 
v___x_305_ = l_List_reverse___redArg(v_a_304_);
return v___x_305_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_325_; 
v_head_306_ = lean_ctor_get(v_a_303_, 0);
v_tail_307_ = lean_ctor_get(v_a_303_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_a_303_);
if (v_isSharedCheck_325_ == 0)
{
v___x_309_ = v_a_303_;
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_a_303_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_fst_311_; lean_object* v_snd_312_; uint8_t v___x_313_; 
v_fst_311_ = lean_ctor_get(v_head_306_, 0);
v_snd_312_ = lean_ctor_get(v_head_306_, 1);
v___x_313_ = lean_nat_dec_eq(v_fst_311_, v_v_302_);
if (v___x_313_ == 0)
{
lean_object* v_fst_314_; lean_object* v_snd_315_; uint8_t v___x_316_; 
v_fst_314_ = lean_ctor_get(v_snd_312_, 0);
v_snd_315_ = lean_ctor_get(v_snd_312_, 1);
v___x_316_ = lean_nat_dec_eq(v_fst_314_, v_v_302_);
if (v___x_316_ == 0)
{
uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_eq(v_snd_315_, v_v_302_);
if (v___x_317_ == 0)
{
lean_object* v___x_319_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_a_304_);
v___x_319_ = v___x_309_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_head_306_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_a_304_);
v___x_319_ = v_reuseFailAlloc_321_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
v_a_303_ = v_tail_307_;
v_a_304_ = v___x_319_;
goto _start;
}
}
else
{
lean_del_object(v___x_309_);
lean_dec(v_head_306_);
v_a_303_ = v_tail_307_;
goto _start;
}
}
else
{
lean_del_object(v___x_309_);
lean_dec(v_head_306_);
v_a_303_ = v_tail_307_;
goto _start;
}
}
else
{
lean_del_object(v___x_309_);
lean_dec(v_head_306_);
v_a_303_ = v_tail_307_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0___boxed(lean_object* v_v_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0(v_v_326_, v_a_327_, v_a_328_);
lean_dec(v_v_326_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex(lean_object* v_v_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_332_ = lean_box(0);
v___x_333_ = lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutVertex_spec__0(v_v_330_, v___x_331_, v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex___boxed(lean_object* v_v_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex(v_v_334_);
lean_dec(v_v_334_);
return v_res_335_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0(lean_object* v_v_336_, lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
uint8_t v___x_338_; 
v___x_338_ = 0;
return v___x_338_;
}
else
{
lean_object* v_head_339_; lean_object* v_tail_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v_head_339_ = lean_ctor_get(v_x_337_, 0);
v_tail_340_ = lean_ctor_get(v_x_337_, 1);
v___x_341_ = lp_erdos690__hypergraph_Erdos690_edgesWithoutVertex(v_v_336_);
v___x_342_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(v_head_339_, v___x_341_);
lean_dec(v___x_341_);
if (v___x_342_ == 0)
{
v_x_337_ = v_tail_340_;
goto _start;
}
else
{
return v___x_342_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0___boxed(lean_object* v_v_344_, lean_object* v_x_345_){
_start:
{
uint8_t v_res_346_; lean_object* v_r_347_; 
v_res_346_ = lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0(v_v_344_, v_x_345_);
lean_dec(v_x_345_);
lean_dec(v_v_344_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isVertexCritical(lean_object* v_v_348_){
_start:
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = lp_erdos690__hypergraph_Erdos690_allColorings;
v___x_350_ = lp_erdos690__hypergraph_List_any___at___00Erdos690_isVertexCritical_spec__0(v_v_348_, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isVertexCritical___boxed(lean_object* v_v_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = lp_erdos690__hypergraph_Erdos690_isVertexCritical(v_v_351_);
lean_dec(v_v_351_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0(lean_object* v_x_354_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
uint8_t v___x_355_; 
v___x_355_ = 1;
return v___x_355_;
}
else
{
lean_object* v_head_356_; lean_object* v_tail_357_; uint8_t v___y_359_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_head_356_ = lean_ctor_get(v_x_354_, 0);
v_tail_357_ = lean_ctor_get(v_x_354_, 1);
v___x_361_ = lean_unsigned_to_nat(0u);
v___x_362_ = lean_nat_dec_eq(v_head_356_, v___x_361_);
if (v___x_362_ == 0)
{
uint8_t v___x_363_; 
v___x_363_ = lp_erdos690__hypergraph_Erdos690_isVertexCritical(v_head_356_);
v___y_359_ = v___x_363_;
goto v___jp_358_;
}
else
{
v___y_359_ = v___x_362_;
goto v___jp_358_;
}
v___jp_358_:
{
if (v___y_359_ == 0)
{
return v___y_359_;
}
else
{
v_x_354_ = v_tail_357_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0___boxed(lean_object* v_x_364_){
_start:
{
uint8_t v_res_365_; lean_object* v_r_366_; 
v_res_365_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0(v_x_364_);
lean_dec(v_x_364_);
v_r_366_ = lean_box(v_res_365_);
return v_r_366_;
}
}
static lean_object* _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(10u);
v___x_368_ = l_List_range(v___x_367_);
return v___x_368_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1(void){
_start:
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = lean_obj_once(&lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0, &lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0_once, _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__0);
v___x_370_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allVertexCriticalVal_spec__0(v___x_369_);
return v___x_370_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal(void){
_start:
{
uint8_t v___x_371_; 
v___x_371_ = lean_uint8_once(&lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1, &lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1_once, _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal___closed__1);
return v___x_371_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0(lean_object* v___x_372_, lean_object* v_a_373_, lean_object* v_b_374_){
_start:
{
uint8_t v___x_375_; 
lean_inc_ref(v___x_372_);
v___x_375_ = l_instDecidableEqProd___redArg(v___x_372_, v___x_372_, v_a_373_, v_b_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0___boxed(lean_object* v___x_376_, lean_object* v_a_377_, lean_object* v_b_378_){
_start:
{
uint8_t v_res_379_; lean_object* v_r_380_; 
v_res_379_ = lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0(v___x_376_, v_a_377_, v_b_378_);
v_r_380_ = lean_box(v_res_379_);
return v_r_380_;
}
}
static lean_object* _init_lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0(void){
_start:
{
lean_object* v___x_381_; lean_object* v___f_382_; 
v___x_381_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_382_ = lean_alloc_closure((void*)(lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_382_, 0, v___x_381_);
return v___f_382_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0(lean_object* v_e_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
if (lean_obj_tag(v_a_384_) == 0)
{
lean_object* v___x_386_; 
lean_dec_ref(v_e_383_);
v___x_386_ = l_List_reverse___redArg(v_a_385_);
return v___x_386_;
}
else
{
lean_object* v_head_387_; lean_object* v_tail_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_400_; 
v_head_387_ = lean_ctor_get(v_a_384_, 0);
v_tail_388_ = lean_ctor_get(v_a_384_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_a_384_);
if (v_isSharedCheck_400_ == 0)
{
v___x_390_ = v_a_384_;
v_isShared_391_ = v_isSharedCheck_400_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_tail_388_);
lean_inc(v_head_387_);
lean_dec(v_a_384_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_400_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___f_393_; uint8_t v___x_394_; 
v___x_392_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_393_ = lean_obj_once(&lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0, &lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0_once, _init_lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0___closed__0);
lean_inc_ref(v_e_383_);
lean_inc(v_head_387_);
v___x_394_ = l_instDecidableEqProd___redArg(v___x_392_, v___f_393_, v_head_387_, v_e_383_);
if (v___x_394_ == 0)
{
lean_object* v___x_396_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v_a_385_);
v___x_396_ = v___x_390_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_head_387_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_a_385_);
v___x_396_ = v_reuseFailAlloc_398_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_a_384_ = v_tail_388_;
v_a_385_ = v___x_396_;
goto _start;
}
}
else
{
lean_del_object(v___x_390_);
lean_dec(v_head_387_);
v_a_384_ = v_tail_388_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_edgesWithoutEdge(lean_object* v_e_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_403_ = lean_box(0);
v___x_404_ = lp_erdos690__hypergraph_List_filterTR_loop___at___00Erdos690_edgesWithoutEdge_spec__0(v_e_401_, v___x_402_, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0(lean_object* v_e_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
uint8_t v___x_407_; 
lean_dec_ref(v_e_405_);
v___x_407_ = 0;
return v___x_407_;
}
else
{
lean_object* v_head_408_; lean_object* v_tail_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v_head_408_ = lean_ctor_get(v_x_406_, 0);
v_tail_409_ = lean_ctor_get(v_x_406_, 1);
lean_inc_ref(v_e_405_);
v___x_410_ = lp_erdos690__hypergraph_Erdos690_edgesWithoutEdge(v_e_405_);
v___x_411_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_isProperFor_spec__0(v_head_408_, v___x_410_);
lean_dec(v___x_410_);
if (v___x_411_ == 0)
{
v_x_406_ = v_tail_409_;
goto _start;
}
else
{
lean_dec_ref(v_e_405_);
return v___x_411_;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0___boxed(lean_object* v_e_413_, lean_object* v_x_414_){
_start:
{
uint8_t v_res_415_; lean_object* v_r_416_; 
v_res_415_ = lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0(v_e_413_, v_x_414_);
lean_dec(v_x_414_);
v_r_416_ = lean_box(v_res_415_);
return v_r_416_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_Erdos690_isEdgeCritical(lean_object* v_e_417_){
_start:
{
lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_418_ = lp_erdos690__hypergraph_Erdos690_allColorings;
v___x_419_ = lp_erdos690__hypergraph_List_any___at___00Erdos690_isEdgeCritical_spec__0(v_e_417_, v___x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_Erdos690_isEdgeCritical___boxed(lean_object* v_e_420_){
_start:
{
uint8_t v_res_421_; lean_object* v_r_422_; 
v_res_421_ = lp_erdos690__hypergraph_Erdos690_isEdgeCritical(v_e_420_);
v_r_422_ = lean_box(v_res_421_);
return v_r_422_;
}
}
LEAN_EXPORT uint8_t lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0(lean_object* v_x_423_){
_start:
{
if (lean_obj_tag(v_x_423_) == 0)
{
uint8_t v___x_424_; 
v___x_424_ = 1;
return v___x_424_;
}
else
{
lean_object* v_head_425_; lean_object* v_tail_426_; uint8_t v___x_427_; 
v_head_425_ = lean_ctor_get(v_x_423_, 0);
lean_inc(v_head_425_);
v_tail_426_ = lean_ctor_get(v_x_423_, 1);
lean_inc(v_tail_426_);
lean_dec_ref_known(v_x_423_, 2);
v___x_427_ = lp_erdos690__hypergraph_Erdos690_isEdgeCritical(v_head_425_);
if (v___x_427_ == 0)
{
lean_dec(v_tail_426_);
return v___x_427_;
}
else
{
v_x_423_ = v_tail_426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0(v_x_429_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0(void){
_start:
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = ((lean_object*)(lp_erdos690__hypergraph_Erdos690_edges));
v___x_433_ = lp_erdos690__hypergraph_List_all___at___00Erdos690_allEdgeCriticalVal_spec__0(v___x_432_);
return v___x_433_;
}
}
static uint8_t _init_lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal(void){
_start:
{
uint8_t v___x_434_; 
v___x_434_ = lean_uint8_once(&lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0, &lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0_once, _init_lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal___closed__0);
return v___x_434_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_erdos690__hypergraph_Erdos690(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_erdos690__hypergraph_Erdos690_numVerts = _init_lp_erdos690__hypergraph_Erdos690_numVerts();
lean_mark_persistent(lp_erdos690__hypergraph_Erdos690_numVerts);
lp_erdos690__hypergraph_Erdos690_allColorings = _init_lp_erdos690__hypergraph_Erdos690_allColorings();
lean_mark_persistent(lp_erdos690__hypergraph_Erdos690_allColorings);
lp_erdos690__hypergraph_Erdos690_notTwoColorableVal = _init_lp_erdos690__hypergraph_Erdos690_notTwoColorableVal();
lp_erdos690__hypergraph_Erdos690_allThreeUniformVal = _init_lp_erdos690__hypergraph_Erdos690_allThreeUniformVal();
lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal = _init_lp_erdos690__hypergraph_Erdos690_allVertexCriticalVal();
lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal = _init_lp_erdos690__hypergraph_Erdos690_allEdgeCriticalVal();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
