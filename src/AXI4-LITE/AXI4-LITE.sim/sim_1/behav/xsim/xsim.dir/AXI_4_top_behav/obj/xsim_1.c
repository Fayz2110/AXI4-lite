/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_462(char*, char *);
extern void execute_463(char*, char *);
extern void execute_496(char*, char *);
extern void execute_497(char*, char *);
extern void execute_498(char*, char *);
extern void execute_499(char*, char *);
extern void execute_500(char*, char *);
extern void execute_501(char*, char *);
extern void execute_502(char*, char *);
extern void execute_503(char*, char *);
extern void execute_504(char*, char *);
extern void execute_505(char*, char *);
extern void execute_506(char*, char *);
extern void execute_507(char*, char *);
extern void execute_508(char*, char *);
extern void execute_509(char*, char *);
extern void execute_510(char*, char *);
extern void execute_511(char*, char *);
extern void execute_512(char*, char *);
extern void execute_513(char*, char *);
extern void execute_514(char*, char *);
extern void execute_515(char*, char *);
extern void execute_516(char*, char *);
extern void execute_517(char*, char *);
extern void execute_518(char*, char *);
extern void execute_519(char*, char *);
extern void execute_520(char*, char *);
extern void execute_521(char*, char *);
extern void execute_522(char*, char *);
extern void execute_523(char*, char *);
extern void execute_524(char*, char *);
extern void execute_525(char*, char *);
extern void execute_526(char*, char *);
extern void execute_3(char*, char *);
extern void execute_4(char*, char *);
extern void execute_468(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_470(char*, char *);
extern void execute_473(char*, char *);
extern void execute_474(char*, char *);
extern void execute_475(char*, char *);
extern void execute_476(char*, char *);
extern void execute_477(char*, char *);
extern void execute_478(char*, char *);
extern void execute_479(char*, char *);
extern void execute_480(char*, char *);
extern void execute_481(char*, char *);
extern void execute_482(char*, char *);
extern void execute_483(char*, char *);
extern void execute_484(char*, char *);
extern void execute_487(char*, char *);
extern void execute_489(char*, char *);
extern void execute_490(char*, char *);
extern void execute_493(char*, char *);
extern void execute_494(char*, char *);
extern void execute_495(char*, char *);
extern void execute_42(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_45(char*, char *);
extern void execute_46(char*, char *);
extern void execute_47(char*, char *);
extern void execute_48(char*, char *);
extern void execute_65(char*, char *);
extern void execute_66(char*, char *);
extern void execute_53(char*, char *);
extern void execute_54(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_60(char*, char *);
extern void execute_63(char*, char *);
extern void execute_64(char*, char *);
extern void execute_68(char*, char *);
extern void execute_69(char*, char *);
extern void execute_71(char*, char *);
extern void execute_72(char*, char *);
extern void execute_92(char*, char *);
extern void execute_93(char*, char *);
extern void execute_94(char*, char *);
extern void execute_95(char*, char *);
extern void execute_96(char*, char *);
extern void execute_97(char*, char *);
extern void execute_98(char*, char *);
extern void execute_99(char*, char *);
extern void execute_100(char*, char *);
extern void execute_101(char*, char *);
extern void execute_287(char*, char *);
extern void execute_288(char*, char *);
extern void execute_289(char*, char *);
extern void execute_290(char*, char *);
extern void execute_291(char*, char *);
extern void execute_302(char*, char *);
extern void execute_303(char*, char *);
extern void execute_305(char*, char *);
extern void execute_306(char*, char *);
extern void execute_319(char*, char *);
extern void execute_320(char*, char *);
extern void execute_459(char*, char *);
extern void execute_460(char*, char *);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void execute_78(char*, char *);
extern void execute_79(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_82(char*, char *);
extern void execute_83(char*, char *);
extern void execute_84(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void execute_87(char*, char *);
extern void execute_88(char*, char *);
extern void execute_90(char*, char *);
extern void execute_104(char*, char *);
extern void execute_108(char*, char *);
extern void execute_112(char*, char *);
extern void execute_116(char*, char *);
extern void execute_120(char*, char *);
extern void execute_124(char*, char *);
extern void execute_128(char*, char *);
extern void execute_132(char*, char *);
extern void execute_136(char*, char *);
extern void execute_140(char*, char *);
extern void execute_144(char*, char *);
extern void execute_148(char*, char *);
extern void execute_152(char*, char *);
extern void execute_156(char*, char *);
extern void execute_160(char*, char *);
extern void execute_164(char*, char *);
extern void execute_168(char*, char *);
extern void execute_172(char*, char *);
extern void execute_176(char*, char *);
extern void execute_180(char*, char *);
extern void execute_184(char*, char *);
extern void execute_188(char*, char *);
extern void execute_192(char*, char *);
extern void execute_196(char*, char *);
extern void execute_200(char*, char *);
extern void execute_204(char*, char *);
extern void execute_208(char*, char *);
extern void execute_212(char*, char *);
extern void execute_216(char*, char *);
extern void execute_220(char*, char *);
extern void execute_224(char*, char *);
extern void execute_228(char*, char *);
extern void execute_232(char*, char *);
extern void execute_236(char*, char *);
extern void execute_240(char*, char *);
extern void execute_244(char*, char *);
extern void execute_248(char*, char *);
extern void execute_252(char*, char *);
extern void execute_256(char*, char *);
extern void execute_260(char*, char *);
extern void execute_264(char*, char *);
extern void execute_268(char*, char *);
extern void execute_272(char*, char *);
extern void execute_276(char*, char *);
extern void execute_280(char*, char *);
extern void execute_284(char*, char *);
extern void execute_293(char*, char *);
extern void execute_294(char*, char *);
extern void execute_297(char*, char *);
extern void execute_299(char*, char *);
extern void execute_309(char*, char *);
extern void execute_311(char*, char *);
extern void execute_313(char*, char *);
extern void execute_315(char*, char *);
extern void execute_317(char*, char *);
extern void execute_322(char*, char *);
extern void execute_323(char*, char *);
extern void execute_325(char*, char *);
extern void execute_326(char*, char *);
extern void execute_329(char*, char *);
extern void execute_332(char*, char *);
extern void execute_334(char*, char *);
extern void execute_337(char*, char *);
extern void execute_339(char*, char *);
extern void execute_342(char*, char *);
extern void execute_344(char*, char *);
extern void execute_347(char*, char *);
extern void execute_349(char*, char *);
extern void execute_352(char*, char *);
extern void execute_354(char*, char *);
extern void execute_357(char*, char *);
extern void execute_359(char*, char *);
extern void execute_362(char*, char *);
extern void execute_364(char*, char *);
extern void execute_367(char*, char *);
extern void execute_369(char*, char *);
extern void execute_372(char*, char *);
extern void execute_374(char*, char *);
extern void execute_377(char*, char *);
extern void execute_379(char*, char *);
extern void execute_382(char*, char *);
extern void execute_384(char*, char *);
extern void execute_387(char*, char *);
extern void execute_389(char*, char *);
extern void execute_392(char*, char *);
extern void execute_395(char*, char *);
extern void execute_397(char*, char *);
extern void execute_399(char*, char *);
extern void execute_401(char*, char *);
extern void execute_403(char*, char *);
extern void execute_405(char*, char *);
extern void execute_407(char*, char *);
extern void execute_409(char*, char *);
extern void execute_411(char*, char *);
extern void execute_413(char*, char *);
extern void execute_415(char*, char *);
extern void execute_417(char*, char *);
extern void execute_419(char*, char *);
extern void execute_421(char*, char *);
extern void execute_423(char*, char *);
extern void execute_425(char*, char *);
extern void execute_427(char*, char *);
extern void execute_429(char*, char *);
extern void execute_431(char*, char *);
extern void execute_433(char*, char *);
extern void execute_435(char*, char *);
extern void execute_437(char*, char *);
extern void execute_439(char*, char *);
extern void execute_441(char*, char *);
extern void execute_443(char*, char *);
extern void execute_445(char*, char *);
extern void execute_447(char*, char *);
extern void execute_449(char*, char *);
extern void execute_451(char*, char *);
extern void execute_453(char*, char *);
extern void execute_455(char*, char *);
extern void execute_457(char*, char *);
extern void execute_465(char*, char *);
extern void execute_466(char*, char *);
extern void execute_467(char*, char *);
extern void execute_527(char*, char *);
extern void execute_528(char*, char *);
extern void execute_529(char*, char *);
extern void execute_530(char*, char *);
extern void execute_531(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_65(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_66(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_67(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_68(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_69(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_70(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_71(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_72(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_73(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_74(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_75(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_76(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_77(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_78(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_79(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_80(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_81(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_82(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_83(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_84(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_85(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_86(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_87(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_88(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_89(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_90(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_91(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_92(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_100(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[270] = {(funcp)execute_462, (funcp)execute_463, (funcp)execute_496, (funcp)execute_497, (funcp)execute_498, (funcp)execute_499, (funcp)execute_500, (funcp)execute_501, (funcp)execute_502, (funcp)execute_503, (funcp)execute_504, (funcp)execute_505, (funcp)execute_506, (funcp)execute_507, (funcp)execute_508, (funcp)execute_509, (funcp)execute_510, (funcp)execute_511, (funcp)execute_512, (funcp)execute_513, (funcp)execute_514, (funcp)execute_515, (funcp)execute_516, (funcp)execute_517, (funcp)execute_518, (funcp)execute_519, (funcp)execute_520, (funcp)execute_521, (funcp)execute_522, (funcp)execute_523, (funcp)execute_524, (funcp)execute_525, (funcp)execute_526, (funcp)execute_3, (funcp)execute_4, (funcp)execute_468, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_470, (funcp)execute_473, (funcp)execute_474, (funcp)execute_475, (funcp)execute_476, (funcp)execute_477, (funcp)execute_478, (funcp)execute_479, (funcp)execute_480, (funcp)execute_481, (funcp)execute_482, (funcp)execute_483, (funcp)execute_484, (funcp)execute_487, (funcp)execute_489, (funcp)execute_490, (funcp)execute_493, (funcp)execute_494, (funcp)execute_495, (funcp)execute_42, (funcp)execute_43, (funcp)execute_44, (funcp)execute_45, (funcp)execute_46, (funcp)execute_47, (funcp)execute_48, (funcp)execute_65, (funcp)execute_66, (funcp)execute_53, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_60, (funcp)execute_63, (funcp)execute_64, (funcp)execute_68, (funcp)execute_69, (funcp)execute_71, (funcp)execute_72, (funcp)execute_92, (funcp)execute_93, (funcp)execute_94, (funcp)execute_95, (funcp)execute_96, (funcp)execute_97, (funcp)execute_98, (funcp)execute_99, (funcp)execute_100, (funcp)execute_101, (funcp)execute_287, (funcp)execute_288, (funcp)execute_289, (funcp)execute_290, (funcp)execute_291, (funcp)execute_302, (funcp)execute_303, (funcp)execute_305, (funcp)execute_306, (funcp)execute_319, (funcp)execute_320, (funcp)execute_459, (funcp)execute_460, (funcp)execute_76, (funcp)execute_77, (funcp)execute_78, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_88, (funcp)execute_90, (funcp)execute_104, (funcp)execute_108, (funcp)execute_112, (funcp)execute_116, (funcp)execute_120, (funcp)execute_124, (funcp)execute_128, (funcp)execute_132, (funcp)execute_136, (funcp)execute_140, (funcp)execute_144, (funcp)execute_148, (funcp)execute_152, (funcp)execute_156, (funcp)execute_160, (funcp)execute_164, (funcp)execute_168, (funcp)execute_172, (funcp)execute_176, (funcp)execute_180, (funcp)execute_184, (funcp)execute_188, (funcp)execute_192, (funcp)execute_196, (funcp)execute_200, (funcp)execute_204, (funcp)execute_208, (funcp)execute_212, (funcp)execute_216, (funcp)execute_220, (funcp)execute_224, (funcp)execute_228, (funcp)execute_232, (funcp)execute_236, (funcp)execute_240, (funcp)execute_244, (funcp)execute_248, (funcp)execute_252, (funcp)execute_256, (funcp)execute_260, (funcp)execute_264, (funcp)execute_268, (funcp)execute_272, (funcp)execute_276, (funcp)execute_280, (funcp)execute_284, (funcp)execute_293, (funcp)execute_294, (funcp)execute_297, (funcp)execute_299, (funcp)execute_309, (funcp)execute_311, (funcp)execute_313, (funcp)execute_315, (funcp)execute_317, (funcp)execute_322, (funcp)execute_323, (funcp)execute_325, (funcp)execute_326, (funcp)execute_329, (funcp)execute_332, (funcp)execute_334, (funcp)execute_337, (funcp)execute_339, (funcp)execute_342, (funcp)execute_344, (funcp)execute_347, (funcp)execute_349, (funcp)execute_352, (funcp)execute_354, (funcp)execute_357, (funcp)execute_359, (funcp)execute_362, (funcp)execute_364, (funcp)execute_367, (funcp)execute_369, (funcp)execute_372, (funcp)execute_374, (funcp)execute_377, (funcp)execute_379, (funcp)execute_382, (funcp)execute_384, (funcp)execute_387, (funcp)execute_389, (funcp)execute_392, (funcp)execute_395, (funcp)execute_397, (funcp)execute_399, (funcp)execute_401, (funcp)execute_403, (funcp)execute_405, (funcp)execute_407, (funcp)execute_409, (funcp)execute_411, (funcp)execute_413, (funcp)execute_415, (funcp)execute_417, (funcp)execute_419, (funcp)execute_421, (funcp)execute_423, (funcp)execute_425, (funcp)execute_427, (funcp)execute_429, (funcp)execute_431, (funcp)execute_433, (funcp)execute_435, (funcp)execute_437, (funcp)execute_439, (funcp)execute_441, (funcp)execute_443, (funcp)execute_445, (funcp)execute_447, (funcp)execute_449, (funcp)execute_451, (funcp)execute_453, (funcp)execute_455, (funcp)execute_457, (funcp)execute_465, (funcp)execute_466, (funcp)execute_467, (funcp)execute_527, (funcp)execute_528, (funcp)execute_529, (funcp)execute_530, (funcp)execute_531, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_65, (funcp)transaction_66, (funcp)transaction_67, (funcp)transaction_68, (funcp)transaction_69, (funcp)transaction_70, (funcp)transaction_71, (funcp)transaction_72, (funcp)transaction_73, (funcp)transaction_74, (funcp)transaction_75, (funcp)transaction_76, (funcp)transaction_77, (funcp)transaction_78, (funcp)transaction_79, (funcp)transaction_80, (funcp)transaction_81, (funcp)transaction_82, (funcp)transaction_83, (funcp)transaction_84, (funcp)transaction_85, (funcp)transaction_86, (funcp)transaction_87, (funcp)transaction_88, (funcp)transaction_89, (funcp)transaction_90, (funcp)transaction_91, (funcp)transaction_92, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_100};
const int NumRelocateId= 270;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/AXI_4_top_behav/xsim.reloc",  (void **)funcTab, 270);
	iki_vhdl_file_variable_register(dp + 62456);
	iki_vhdl_file_variable_register(dp + 62512);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/AXI_4_top_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/AXI_4_top_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 85952, dp + 78968, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 85416, dp + 79192, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 85664, dp + 79360, 0, 1, 0, 1, 2, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 85704, dp + 79416, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86008, dp + 79472, 0, 31, 0, 31, 32, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86048, dp + 79584, 0, 1, 0, 1, 2, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86088, dp + 79640, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 85608, dp + 79752, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86408, dp + 79920, 0, 14, 0, 14, 15, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86256, dp + 79976, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86448, dp + 80032, 0, 31, 0, 31, 32, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86312, dp + 80144, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86200, dp + 80200, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 86368, dp + 80256, 0, 3, 0, 3, 4, 1);
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/AXI_4_top_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/AXI_4_top_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/AXI_4_top_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
