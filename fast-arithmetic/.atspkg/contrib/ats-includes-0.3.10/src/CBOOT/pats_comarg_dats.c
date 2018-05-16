/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2018-3-22:  1h:15m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */

#include "libc/CATS/string.cats"

#include "libc/CATS/errno.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_tokbuf.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_lexbuf.cats"

#include "pats_location.cats"

#include "pats_location.cats"

#include "pats_location.cats"
/* external codes at top */

//
extern char* patsopt_PATSRELOCROOT_get () ;
//

/* type definitions */
typedef struct {
ats_int_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_0 ;

typedef struct {
ats_ptr_type atslab_0 ;
ats_ptr_type atslab_1 ;
} anairiats_sum_1 ;

typedef struct {
ats_ptr_type atslab_0 ;
} anairiats_sum_2 ;

/* external typedefs */
/* external dynamic constructor declarations */
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_cons_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__list_vt_nil_1) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__None_vt_0) ;
ATSextern_val(ats_sum_type, ATS_2d0_2e2_2e12_2prelude_2basics_sta_2esats__Some_vt_1) ;
ATSextern_val(ats_sum_type, _2tmp_2ATS_2dPostiats_2src_2pats_syntax_2esats__DATSDEF_0) ;
ATSextern_val(ats_sum_type, _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__COMARG_0) ;

/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_neq_char_char) (ats_char_type, ats_char_type) ;
ATSextern_fun(ats_bool_type, atspre_eq_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_int) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_int1_of_size1) (ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_sub_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_bool_type, atspre_gt_size1_size1) (ats_size_type, ats_size_type) ;
ATSextern_fun(ats_void_type, atspre_fprint_string) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_char_type, atspre_string_get_char_at__intsz) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_ptr_type, atspre_string_make_substring) (ats_ptr_type, ats_size_type, ats_size_type) ;
ATSextern_fun(ats_size_type, atspre_string_length) (ats_ptr_type) ;
ATSextern_val(ats_ptr_type, atspre_stropt_none) ;
ATSextern_fun(ats_bool_type, atspre_stropt_is_some) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, atspre_tostringf) (ats_ptr_type, ...) ;
ATSextern_fun(ats_varet_type, _2tmp_2ATS_2dPostiats_2src_2pats_error_2esats__abort) () ;
ATSextern_fun(ats_void_type, _2tmp_2ATS_2dPostiats_2src_2pats_global_2esats__the_IATS_dirlst_ppush) (ats_ptr_type) ;
ATSextern_val(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_PATSRELOCROOT) ;
ATSextern_fun(ats_void_type, _2tmp_2ATS_2dPostiats_2src_2pats_filename_2esats__the_pathlst_ppush) (ats_ptr_type) ;
ATSextern_val(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_location_2esats__location_dummy) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_datsdef) (ats_ref_type, ats_int_type, ats_ref_type) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_string_parser) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__e1xp_string) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__e1xp_none) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_trans1_2esats__e0xp_tr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2tmp_2ATS_2dPostiats_2src_2pats_trans1_env_2esats__the_e1xpenv_addperv) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_void_type, _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__fprint_comarg) (ats_ptr_type, ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_parse) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, getenv) (ats_ptr_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_ptr_type loop_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) ;
static
ats_void_type loop_5 (ats_int_type env0, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;
static
ats_clo_ptr_type loop_5_closure_make (ats_int_type env0) ;
static
ats_void_type loop_5_clofun (ats_clo_ptr_type cloptr, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) ;
static
ats_ptr_type string_extract_9 (ats_ptr_type arg0, ats_size_type arg1) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2108(line=79, offs=13) -- 2142(line=80, offs=29)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__print_comarg (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp0) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__print_comarg:
/* tmp0 = */ _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__fprint_comarg (stdout, arg0) ;
return /* (tmp0) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__print_comarg] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2169(line=83, offs=14) -- 2253(line=87, offs=43)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__fprint_comarg (ats_ptr_type arg0, ats_ptr_type arg1) {
/* local vardec */
// ATSlocal_void (tmp1) ;
ATSlocal (ats_int_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
// ATSlocal_void (tmp4) ;
// ATSlocal_void (tmp5) ;
// ATSlocal_void (tmp6) ;
// ATSlocal_void (tmp7) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__fprint_comarg:
do {
/* branch: __ats_lab_0 */
__ats_lab_0_0:
// 
__ats_lab_0_1:
tmp2 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_0) ;
tmp3 = ats_caselptrlab_mac(anairiats_sum_0, arg1, atslab_1) ;
/* tmp4 = */ atspre_fprint_string (arg0, ATSstrcst("COMARG(")) ;
/* tmp5 = */ atspre_fprint_int (arg0, tmp2) ;
/* tmp6 = */ atspre_fprint_string (arg0, ATSstrcst(", ")) ;
/* tmp7 = */ atspre_fprint_string (arg0, tmp3) ;
/* tmp1 = */ atspre_fprint_string (arg0, ATSstrcst(")")) ;
break ;
} while (0) ;
return /* (tmp1) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__fprint_comarg] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2324(line=97, offs=1) -- 2534(line=108, offs=2)
*/
ATSstaticdec()
ats_ptr_type
loop_3 (ats_ptr_type arg0, ats_int_type arg1, ats_int_type arg2) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp9) ;
ATSlocal (ats_bool_type, tmp10) ;
ATSlocal (ats_bool_type, tmp11) ;
ATSlocal (ats_char_type, tmp12) ;
ATSlocal (ats_int_type, tmp13) ;

__ats_lab_loop_3:
tmp10 = atspre_ilt (arg2, arg1) ;
if (tmp10) {
tmp12 = atspre_string_get_char_at__intsz (arg0, arg2) ;
tmp11 = atspre_neq_char_char (tmp12, '-') ;
if (tmp11) {
tmp9 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp9, atslab_0, arg2) ;
ats_selptrset_mac(anairiats_sum_0, tmp9, atslab_1, arg0) ;
} else {
tmp13 = atspre_iadd (arg2, 1) ;
arg0 = arg0 ;
arg1 = arg1 ;
arg2 = tmp13 ;
goto __ats_lab_loop_3 ; // tail call
} /* end of [if] */
} else {
tmp9 = ATS_MALLOC(sizeof(anairiats_sum_0)) ;
ats_selptrset_mac(anairiats_sum_0, tmp9, atslab_0, arg1) ;
ats_selptrset_mac(anairiats_sum_0, tmp9, atslab_1, arg0) ;
} /* end of [if] */
return (tmp9) ;
} /* end of [loop_3] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2305(line=94, offs=3) -- 2701(line=119, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_parse (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp8) ;
ATSlocal (ats_size_type, tmp14) ;
ATSlocal (ats_int_type, tmp15) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_parse:
tmp14 = atspre_string_length (ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp15 = atspre_int1_of_size1 (tmp14) ;
tmp8 = loop_3 (ats_castfn_mac(ats_ptr_type, arg0), tmp15, 0) ;
return (tmp8) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_parse] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2853(line=131, offs=1) -- 3348(line=155, offs=2)
*/
ATSstaticdec()
ats_void_type
loop_5 (ats_int_type env0, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
/* local vardec */
// ATSlocal_void (tmp17) ;
ATSlocal (ats_bool_type, tmp18) ;
ATSlocal (ats_ptr_type, tmp19) ;
ATSlocal (ats_ptr_type, tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
ATSlocal (ats_ptr_type, tmp22) ;
ATSlocal (ats_ptr_type, tmp23) ;
ATSlocal (ats_ptr_type, tmp24) ;
ATSlocal (ats_ptr_type, tmp25) ;
ATSlocal (ats_int_type, tmp26) ;

__ats_lab_loop_5:
tmp18 = atspre_ilt (arg1, env0) ;
if (tmp18) {
tmp19 = ats_ptrget_mac(ats_ptr_type, arg2) ;
// if (tmp19 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
tmp21 = ats_caselptrind_mac(ats_ptr_type, arg0, [arg1]) ;
tmp20 = _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_parse (tmp21) ;
tmp23 = (ats_sum_ptr_type)0 ;
tmp22 = ATS_MALLOC(sizeof(anairiats_sum_1)) ;
ats_selptrset_mac(anairiats_sum_1, tmp22, atslab_0, tmp20) ;
ats_selptrset_mac(anairiats_sum_1, tmp22, atslab_1, tmp23) ;
ats_ptrget_mac(ats_ptr_type, arg2) = tmp22 ;
tmp24 = ats_ptrget_mac(ats_ptr_type, arg2) ;
// if (tmp24 == (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
tmp25 = &ats_caselptrlab_mac(anairiats_sum_1, tmp24, atslab_1) ;
tmp26 = atspre_iadd (arg1, 1) ;
arg0 = arg0 ;
arg1 = tmp26 ;
arg2 = tmp25 ;
goto __ats_lab_loop_5 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp17) */ ;
} /* end of [loop_5] */

typedef struct {
ats_fun_ptr_type closure_fun ;
ats_int_type closure_env_0 ;
} loop_5_closure_type ;

ats_void_type
loop_5_clofun (ats_clo_ptr_type cloptr, ats_ref_type arg0, ats_int_type arg1, ats_ptr_type arg2) {
loop_5 (((loop_5_closure_type*)cloptr)->closure_env_0, arg0, arg1, arg2) ; return ;
} /* end of function */

ATSinline()
ats_void_type
loop_5_closure_init (loop_5_closure_type *p_clo, ats_int_type env0) {
p_clo->closure_fun = (ats_fun_ptr_type)&loop_5_clofun ;
p_clo->closure_env_0 = env0 ;
return ;
} /* end of function */

ats_clo_ptr_type
loop_5_closure_make (ats_int_type env0) {
loop_5_closure_type *p_clo = ATS_MALLOC(sizeof(loop_5_closure_type)) ;
loop_5_closure_init (p_clo, env0) ;
return (ats_clo_ptr_type)p_clo ;
} /* end of function */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 2780(line=125, offs=6) -- 3508(line=163, offs=4)
*/
ATSglobaldec()
ats_ptr_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarglst_parse (ats_int_type arg0, ats_ref_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_ptr_type, tmp27) ;
// ATSlocal_void (tmp28) ;
// ATSlocal_void (tmp29) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarglst_parse:
/* ats_ptr_type tmp27 ; */
tmp27 = (ats_sum_ptr_type)0 ;
/* tmp28 = */ loop_5 (arg0, arg1, 0, (&tmp27)) ;
/* tmp29 = ats_selsin_mac(tmp28, atslab_1) */ ;
tmp16 = tmp27 ;
return (tmp16) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarglst_parse] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 3586(line=169, offs=3) -- 3781(line=177, offs=2)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_warning (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp30) ;
// ATSlocal_void (tmp31) ;
// ATSlocal_void (tmp32) ;
// ATSlocal_void (tmp33) ;
// ATSlocal_void (tmp34) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_warning:
/* tmp31 = */ atspre_prerr_string (ATSstrcst("warning(ATS)")) ;
/* tmp32 = */ atspre_prerr_string (ATSstrcst(": unrecognized command line argument [")) ;
/* tmp33 = */ atspre_prerr_string (arg0) ;
/* tmp34 = */ atspre_prerr_string (ATSstrcst("] is ignored.")) ;
/* tmp30 = */ atspre_prerr_newline () ;
return /* (tmp30) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__comarg_warning] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 3857(line=182, offs=14) -- 3923(line=183, offs=57)
*/
ATSglobaldec()
ats_bool_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_DATS_flag (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp35) ;
ATSlocal (ats_bool_type, tmp36) ;
ATSlocal (ats_int_type, tmp37) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_DATS_flag:
tmp37 = atslib_strncmp (arg0, ATSstrcst("-DATS"), 5) ;
tmp36 = atspre_eq_int_int (tmp37, 0) ;
if (tmp36) {
tmp35 = ats_true_bool ;
} else {
tmp35 = ats_false_bool ;
} /* end of [if] */
return (tmp35) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_DATS_flag] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 3973(line=187, offs=14) -- 4039(line=188, offs=57)
*/
ATSglobaldec()
ats_bool_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_IATS_flag (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_bool_type, tmp38) ;
ATSlocal (ats_bool_type, tmp39) ;
ATSlocal (ats_int_type, tmp40) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_IATS_flag:
tmp40 = atslib_strncmp (arg0, ATSstrcst("-IATS"), 5) ;
tmp39 = atspre_eq_int_int (tmp40, 0) ;
if (tmp39) {
tmp38 = ats_true_bool ;
} else {
tmp38 = ats_false_bool ;
} /* end of [if] */
return (tmp38) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__is_IATS_flag] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 4098(line=196, offs=1) -- 4462(line=218, offs=4)
*/
ATSstaticdec()
ats_ptr_type
string_extract_9 (ats_ptr_type arg0, ats_size_type arg1) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp41) ;
ATSlocal (ats_size_type, tmp42) ;
ATSlocal (ats_bool_type, tmp43) ;
ATSlocal (ats_ptr_type, tmp44) ;
ATSlocal (ats_size_type, tmp45) ;

__ats_lab_string_extract_9:
tmp42 = atspre_string_length (ats_castfn_mac(ats_ptr_type, arg0)) ;
tmp43 = atspre_gt_size1_size1 (tmp42, ats_castfn_mac(ats_size_type, arg1)) ;
if (tmp43) {
tmp45 = atspre_sub_size1_size1 (tmp42, ats_castfn_mac(ats_size_type, arg1)) ;
tmp44 = atspre_string_make_substring (ats_castfn_mac(ats_ptr_type, arg0), ats_castfn_mac(ats_size_type, arg1), tmp45) ;
tmp41 = ats_castfn_mac(ats_ptr_type, ats_castfn_mac(ats_ptr_type, tmp44)) ;
} else {
tmp41 = atspre_stropt_none ;
} /* end of [if] */
return (tmp41) ;
} /* end of [string_extract_9] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 4533(line=224, offs=3) -- 4571(line=224, offs=41)
*/
ATSglobaldec()
ats_ptr_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__DATS_extract (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp46) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__DATS_extract:
tmp46 = string_extract_9 (arg0, 5) ;
return (tmp46) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__DATS_extract] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 4600(line=228, offs=3) -- 4638(line=228, offs=41)
*/
ATSglobaldec()
ats_ptr_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__IATS_extract (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_ptr_type, tmp47) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__IATS_extract:
tmp47 = string_extract_9 (arg0, 5) ;
return (tmp47) ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__IATS_extract] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 4715(line=236, offs=3) -- 5476(line=272, offs=4)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_DATS_def (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp48) ;
ATSlocal (ats_ptr_type, tmp49) ;
ATSlocal (ats_ptr_type, tmp50) ;
ATSlocal (ats_ptr_type, tmp51) ;
ATSlocal (ats_ptr_type, tmp52) ;
ATSlocal (ats_ptr_type, tmp53) ;
ATSlocal (ats_ptr_type, tmp54) ;
// ATSlocal_void (tmp55) ;
// ATSlocal_void (tmp56) ;
// ATSlocal_void (tmp57) ;
// ATSlocal_void (tmp58) ;
// ATSlocal_void (tmp59) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_DATS_def:
tmp49 = _2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__parse_from_string_parser (ats_castfn_mac(ats_ptr_type, arg0), &_2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__p_datsdef) ;
do {
/* branch: __ats_lab_1 */
__ats_lab_1_0:
if (tmp49 == (ats_sum_ptr_type)0) { goto __ats_lab_4_0 ; }
__ats_lab_1_1:
tmp50 = ats_caselptrlab_mac(anairiats_sum_2, tmp49, atslab_0) ;
ATS_FREE(tmp49) ;
// 
tmp51 = ats_caselptrlab_mac(anairiats_sum_1, tmp50, atslab_0) ;
tmp52 = ats_caselptrlab_mac(anairiats_sum_1, tmp50, atslab_1) ;
do {
/* branch: __ats_lab_2 */
__ats_lab_2_0:
if (tmp52 == (ats_sum_ptr_type)0) { goto __ats_lab_3_0 ; }
__ats_lab_2_1:
tmp54 = ats_caselptrlab_mac(anairiats_sum_2, tmp52, atslab_0) ;
tmp53 = _2tmp_2ATS_2dPostiats_2src_2pats_trans1_2esats__e0xp_tr (tmp54) ;
break ;

/* branch: __ats_lab_3 */
__ats_lab_3_0:
// if (tmp52 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_3_1:
tmp53 = _2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__e1xp_none (_2tmp_2ATS_2dPostiats_2src_2pats_location_2esats__location_dummy) ;
break ;
} while (0) ;
/* tmp48 = */ _2tmp_2ATS_2dPostiats_2src_2pats_trans1_env_2esats__the_e1xpenv_addperv (tmp51, tmp53) ;
break ;

/* branch: __ats_lab_4 */
__ats_lab_4_0:
// if (tmp49 != (ats_sum_ptr_type)0) { ats_deadcode_failure_handle () ; }
__ats_lab_4_1:
/* tmp55 = */ atspre_prerr_string (ATSstrcst("patsopt: error(0)")) ;
/* tmp56 = */ atspre_prerr_string (ATSstrcst(": the command-line argument [")) ;
/* tmp57 = */ atspre_prerr_string (ats_castfn_mac(ats_ptr_type, arg0)) ;
/* tmp58 = */ atspre_prerr_string (ATSstrcst("] cannot be properly parsed.")) ;
/* tmp59 = */ atspre_prerr_newline () ;
/* tmp48 = */ _2tmp_2ATS_2dPostiats_2src_2pats_error_2esats__abort () ;
break ;
} while (0) ;
return /* (tmp48) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_DATS_def] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 5598(line=280, offs=3) -- 5842(line=293, offs=4)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_IATS_dir (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp60) ;
// ATSlocal_void (tmp61) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_IATS_dir:
/* tmp61 = */ _2tmp_2ATS_2dPostiats_2src_2pats_filename_2esats__the_pathlst_ppush (arg0) ;
/* tmp60 = */ _2tmp_2ATS_2dPostiats_2src_2pats_global_2esats__the_IATS_dirlst_ppush (arg0) ;
return /* (tmp60) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_IATS_dir] */

/*
// /tmp/ATS-Postiats/src/pats_comarg.dats: 6023(line=309, offs=22) -- 6872(line=376, offs=4)
*/
ATSglobaldec()
ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_PATSRELOCROOT () {
/* local vardec */
// ATSlocal_void (tmp62) ;
ATSlocal (ats_ptr_type, tmp63) ;
ATSlocal (ats_bool_type, tmp64) ;
ATSlocal (ats_ptr_type, tmp65) ;
ATSlocal (ats_ptr_type, tmp66) ;
ATSlocal (ats_bool_type, tmp67) ;
ATSlocal (ats_ptr_type, tmp68) ;
ATSlocal (ats_ptr_type, tmp69) ;
ATSlocal (ats_ptr_type, tmp70) ;

__ats_lab__2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_PATSRELOCROOT:
tmp63 = patsopt_PATSRELOCROOT_get () ;
tmp64 = atspre_stropt_is_some (tmp63) ;
if (tmp64) {
tmp65 = ats_castfn_mac(ats_ptr_type, tmp63) ;
} else {
tmp66 = getenv (ATSstrcst("USER")) ;
tmp67 = atspre_stropt_is_some (tmp66) ;
if (tmp67) {
tmp68 = ats_castfn_mac(ats_ptr_type, tmp66) ;
} else {
tmp68 = ATSstrcst("$USER") ;
} /* end of [if] */
tmp69 = atspre_tostringf (ATSstrcst("/tmp/.PATSRELOCROOT-%s"), tmp68) ;
tmp65 = ats_castfn_mac(ats_ptr_type, tmp69) ;
} /* end of [if] */
tmp70 = _2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__e1xp_string (_2tmp_2ATS_2dPostiats_2src_2pats_location_2esats__location_dummy, tmp65) ;
/* tmp62 = */ _2tmp_2ATS_2dPostiats_2src_2pats_trans1_env_2esats__the_e1xpenv_addperv (_2tmp_2ATS_2dPostiats_2src_2pats_symbol_2esats__symbol_PATSRELOCROOT, tmp70) ;
return /* (tmp62) */ ;
} /* end of [_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__process_PATSRELOCROOT] */

/* static load function */

// extern ats_void_type ATS_2d0_2e2_2e12_2prelude_2SATS_2unsafe_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e12_2libc_2SATS_2string_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_error_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_global_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_location_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_filename_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_trans1_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_trans1_env_2esats__staload (void) ;
extern ats_void_type _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__staload (void) ;

ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__staload () {
static int _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__staload_flag = 0 ;
if (_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__staload_flag) return ;
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__staload_flag = 1 ;

// ATS_2d0_2e2_2e12_2prelude_2SATS_2unsafe_2esats__staload () ;
ATS_2d0_2e2_2e12_2libc_2SATS_2string_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_error_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_global_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_location_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_filename_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_symbol_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_syntax_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_parsing_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_staexp1_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_trans1_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_trans1_env_2esats__staload () ;
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type _2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__dynload_flag ;

ats_void_type
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__dynload () {
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__dynload_flag = 1 ;
_2tmp_2ATS_2dPostiats_2src_2pats_comarg_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [pats_comarg_dats.c] */