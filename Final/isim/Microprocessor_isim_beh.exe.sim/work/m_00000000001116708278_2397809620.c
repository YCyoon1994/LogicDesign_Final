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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Dev/LogicDesign_Final/Final/Program_Counter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t13[8];
    char t25[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
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

LAB7:    xsi_set_current_line(39, ng0);

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t4, 8, t5, 8);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t13) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 3U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 3U);

LAB15:    t12 = ((char*)((ng1)));
    t20 = xsi_vlog_unsigned_case_compare(t13, 2, t12, 2);
    if (t20 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t20 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t20 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t20 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t20 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t20 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB16:    xsi_set_current_line(44, ng0);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 8);
    goto LAB24;

LAB18:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 8, t5, 8, t11, 8);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t25, 0, 0, 8);
    goto LAB24;

LAB20:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 8, t5, 8, t11, 8);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t25, 0, 0, 8);
    goto LAB24;

LAB22:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 8, t5, 8, t11, 8);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t25, 0, 0, 8);
    goto LAB24;

}


extern void work_m_00000000001116708278_2397809620_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001116708278_2397809620", "isim/Microprocessor_isim_beh.exe.sim/work/m_00000000001116708278_2397809620.didat");
	xsi_register_executes(pe);
}
