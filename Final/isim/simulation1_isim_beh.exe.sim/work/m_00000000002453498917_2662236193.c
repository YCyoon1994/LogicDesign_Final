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
static const char *ng0 = "D:/Dev/LogicDesign_Final/Final/BCD7Segment.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {126U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {48U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {109U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {121U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {51U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {91U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {95U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {114U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {123U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {119U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {31U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {78U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {61U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {79U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {71U, 0U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t4, 0, 8);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t15) == 0)
        goto LAB6;

LAB8:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;

LAB9:    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    *((unsigned int *)t4) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB10:    t30 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t4 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(50, ng0);

LAB52:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);

LAB53:    t6 = ((char*)((ng1)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t6, 4);
    if (t49 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng3)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng5)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng7)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng9)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng11)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng13)));
    t49 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t49 == 1)
        goto LAB66;

LAB67:
LAB69:
LAB68:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB70:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB10;

LAB12:    xsi_set_current_line(29, ng0);

LAB15:    xsi_set_current_line(30, ng0);
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 15U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 15U);

LAB16:    t48 = ((char*)((ng1)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t48, 4);
    if (t49 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng19)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng21)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng23)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng25)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng27)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng29)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng31)));
    t49 = xsi_vlog_unsigned_case_compare(t38, 4, t2, 4);
    if (t49 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB51:    goto LAB14;

LAB17:    xsi_set_current_line(31, ng0);
    t50 = ((char*)((ng2)));
    t51 = (t0 + 1448);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 7);
    goto LAB51;

LAB19:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB21:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB23:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB25:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB27:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB31:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB33:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB35:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB37:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB39:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB41:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB43:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB45:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB47:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB51;

LAB54:    xsi_set_current_line(52, ng0);
    t8 = ((char*)((ng1)));
    t15 = (t0 + 1448);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 7);
    goto LAB70;

LAB56:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

LAB58:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

LAB60:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

LAB62:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

LAB64:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

LAB66:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB70;

}


extern void work_m_00000000002453498917_2662236193_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000002453498917_2662236193", "isim/simulation1_isim_beh.exe.sim/work/m_00000000002453498917_2662236193.didat");
	xsi_register_executes(pe);
}
