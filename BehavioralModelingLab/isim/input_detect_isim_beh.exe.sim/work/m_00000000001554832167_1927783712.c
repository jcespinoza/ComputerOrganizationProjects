/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/JuanCarlos/Projects/GitHub/ComputerOrganizarionProjects/BehavioralModelingLab/input_detect.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {32U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {64U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {128U, 0U};
static unsigned int ng13[] = {7U, 0U};



static void Always_14_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 3456);
    xsi_process_wait(t4, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(16, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    t2 = (t0 + 1688U);
    t8 = *((char **)t2);
    t2 = (t0 + 1848U);
    t9 = *((char **)t2);
    t2 = (t0 + 2008U);
    t10 = *((char **)t2);
    t2 = (t0 + 2168U);
    t11 = *((char **)t2);
    xsi_vlogtype_concat(t7, 8, 8, 8U, t11, 1, t10, 1, t9, 1, t8, 1, t6, 1, t5, 1, t4, 1, t3, 1);

LAB7:    t2 = ((char*)((ng1)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng12)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t12 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(26, ng0);

LAB35:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB8:    xsi_set_current_line(18, ng0);
    t13 = (t0 + 3456);
    xsi_process_wait(t13, 2000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB10:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB12:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB14:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB16:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB18:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB20:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB22:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 3456);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB26:    goto LAB2;

LAB27:    xsi_set_current_line(18, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 2728);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB26;

LAB28:    xsi_set_current_line(19, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB29:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB30:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB31:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB32:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB33:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB34:    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB26;

LAB36:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB26;

}


extern void work_m_00000000001554832167_1927783712_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000001554832167_1927783712", "isim/input_detect_isim_beh.exe.sim/work/m_00000000001554832167_1927783712.didat");
	xsi_register_executes(pe);
}
