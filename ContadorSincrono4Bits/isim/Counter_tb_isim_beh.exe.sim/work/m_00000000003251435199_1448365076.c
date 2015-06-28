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
static const char *ng0 = "C:/Users/JuanCarlos/Projects/GitHub/ComputerOrganizarionProjects/ContadorSincrono4Bits/Contador.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_9_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t24[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t27;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t5) != 0)
        goto LAB11;

LAB12:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB13;

LAB14:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t15);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t15) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t14) > 0)
        goto LAB19;

LAB20:    memcpy(t13, t24, 8);

LAB21:    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 4, t4, 4, t13, 4);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB13:    t19 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t25 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_unary_minus(t24, 4, t25, 4);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t13, 4, t19, 4, t24, 4);
    goto LAB21;

LAB19:    memcpy(t13, t19, 8);
    goto LAB21;

}


extern void work_m_00000000003251435199_1448365076_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000003251435199_1448365076", "isim/Counter_tb_isim_beh.exe.sim/work/m_00000000003251435199_1448365076.didat");
	xsi_register_executes(pe);
}
