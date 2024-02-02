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
static const char *ng0 = "F:/fpga/fpga_final_project/decoder.v";
static int ng1[] = {0, 0};
static int ng2[] = {64, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};
static const char *ng14 = "F:/fpga/pixels.txt";
static const char *ng15 = "w";
static const char *ng16 = "%b\n";
static int ng17[] = {63, 0};
static int ng18[] = {2, 0};
static int ng19[] = {3, 0};



static void Initial_34_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 4664);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB6:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 4984);
    t16 = (t0 + 4984);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4984);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 4664);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 4664);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 4664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_63_1(char *t0)
{
    char t22[8];
    char t31[8];
    char t41[8];
    char t54[8];
    char t61[8];
    char t88[8];
    char t103[8];
    char t111[8];
    char t153[16];
    char t154[8];
    char t160[8];
    char t168[8];
    char t172[8];
    char t175[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    int t151;
    int t152;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t169;
    char *t170;
    char *t171;
    char *t173;
    char *t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;

LAB0:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8176);
    *((int *)t2) = 1;
    t3 = (t0 + 7144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 5624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t22, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t24 = (t11 ^ t12);
    t25 = (t10 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB45;

LAB42:    if (t28 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t22) = 1;

LAB45:    memset(t31, 0, 8);
    t7 = (t22 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t7) != 0)
        goto LAB48;

LAB49:    t14 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = (!(t37));
    t39 = *((unsigned int *)t14);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB50;

LAB51:    memcpy(t61, t31, 8);

LAB52:    memset(t88, 0, 8);
    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t89) != 0)
        goto LAB66;

LAB67:    t96 = (t88 + 4);
    t97 = *((unsigned int *)t88);
    t98 = *((unsigned int *)t96);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB68;

LAB69:    memcpy(t111, t88, 8);

LAB70:    t143 = (t111 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t111);
    t147 = (t146 & t145);
    t148 = (t147 != 0);
    if (t148 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB93;

LAB92:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB93;

LAB96:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB94;

LAB95:    memset(t31, 0, 8);
    t14 = (t22 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t22);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t14) != 0)
        goto LAB99;

LAB100:    t18 = (t31 + 4);
    t24 = *((unsigned int *)t31);
    t25 = (!(t24));
    t26 = *((unsigned int *)t18);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB101;

LAB102:    memcpy(t61, t31, 8);

LAB103:    memset(t88, 0, 8);
    t101 = (t61 + 4);
    t56 = *((unsigned int *)t101);
    t57 = (~(t56));
    t58 = *((unsigned int *)t61);
    t59 = (t58 & t57);
    t62 = (t59 & 1U);
    if (t62 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t101) != 0)
        goto LAB118;

LAB119:    t104 = (t88 + 4);
    t63 = *((unsigned int *)t88);
    t64 = (!(t63));
    t68 = *((unsigned int *)t104);
    t69 = (t64 || t68);
    if (t69 > 0)
        goto LAB120;

LAB121:    memcpy(t154, t88, 8);

LAB122:    memset(t160, 0, 8);
    t161 = (t154 + 4);
    t107 = *((unsigned int *)t161);
    t108 = (~(t107));
    t109 = *((unsigned int *)t154);
    t112 = (t109 & t108);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t161) != 0)
        goto LAB137;

LAB138:    t163 = (t160 + 4);
    t114 = *((unsigned int *)t160);
    t118 = (!(t114));
    t119 = *((unsigned int *)t163);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB139;

LAB140:    memcpy(t175, t160, 8);

LAB141:    t183 = (t175 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t175);
    t187 = (t186 & t185);
    t188 = (t187 != 0);
    if (t188 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(130, ng0);

LAB158:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB156:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 5464);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);

LAB10:    t16 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t16, 4);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t17 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(100, ng0);

LAB41:
LAB31:    goto LAB8;

LAB11:    xsi_set_current_line(69, ng0);

LAB32:    xsi_set_current_line(70, ng0);
    t18 = (t0 + 3864);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t20, 6, t21, 32);
    t23 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB13:    xsi_set_current_line(72, ng0);

LAB33:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 3864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t4, 6, t5, 32);
    t6 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t6, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(76, ng0);

LAB34:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB17:    xsi_set_current_line(79, ng0);

LAB35:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t4, 6, t5, 32);
    t6 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t6, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB19:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 3864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t4, 6, t5, 32);
    t6 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t6, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB23:    xsi_set_current_line(90, ng0);

LAB38:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(93, ng0);

LAB39:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t5, 6, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t22, 0, 0, 6, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t4, 6, t5, 32);
    t6 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t6, t22, 0, 0, 6, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(97, ng0);

LAB40:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB31;

LAB44:    t6 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t31) = 1;
    goto LAB49;

LAB48:    t13 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB49;

LAB50:    t16 = (t0 + 2024U);
    t18 = *((char **)t16);
    t16 = ((char*)((ng6)));
    memset(t41, 0, 8);
    t19 = (t18 + 4);
    t20 = (t16 + 4);
    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t16);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t19);
    t46 = *((unsigned int *)t20);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t19);
    t50 = *((unsigned int *)t20);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB56;

LAB53:    if (t51 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t41) = 1;

LAB56:    memset(t54, 0, 8);
    t23 = (t41 + 4);
    t55 = *((unsigned int *)t23);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t23) != 0)
        goto LAB59;

LAB60:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t31 + 4);
    t66 = (t54 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t21 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t54) = 1;
    goto LAB60;

LAB59:    t60 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB60;

LAB61:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t31 + 4);
    t76 = (t54 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t31);
    t17 = (t79 & t78);
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (t82 & t81);
    t84 = (~(t17));
    t85 = (~(t83));
    t86 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t86 & t84);
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    goto LAB63;

LAB64:    *((unsigned int *)t88) = 1;
    goto LAB67;

LAB66:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB67;

LAB68:    t100 = (t0 + 5944);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t102);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t104) != 0)
        goto LAB73;

LAB74:    t112 = *((unsigned int *)t88);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t88 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB70;

LAB71:    *((unsigned int *)t103) = 1;
    goto LAB74;

LAB73:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB74;

LAB75:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t88 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t88);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB77;

LAB78:    xsi_set_current_line(109, ng0);

LAB81:    xsi_set_current_line(110, ng0);
    t149 = (t0 + 2984U);
    t150 = *((char **)t149);
    t149 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t149, t150, 0, 0, 6, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB80;

LAB82:    xsi_set_current_line(117, ng0);

LAB85:    xsi_set_current_line(118, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 4984);
    t13 = (t0 + 4984);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t18 = (t0 + 4984);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 3704);
    t23 = (t21 + 56U);
    t60 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t22, t31, t16, t20, 2, 1, t60, 6, 2);
    t65 = (t0 + 4984);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t75 = (t0 + 3864);
    t76 = (t75 + 56U);
    t89 = *((char **)t76);
    xsi_vlog_generic_convert_bit_index(t41, t67, 2, t89, 6, 2);
    t95 = (t22 + 4);
    t24 = *((unsigned int *)t95);
    t17 = (!(t24));
    t96 = (t31 + 4);
    t25 = *((unsigned int *)t96);
    t83 = (!(t25));
    t135 = (t17 && t83);
    t100 = (t41 + 4);
    t26 = *((unsigned int *)t100);
    t136 = (!(t26));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(120, ng0);
    *((int *)t22) = xsi_vlogfile_file_open_of_cname_ctype(ng14, ng15);
    t2 = (t22 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t22, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB88:    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t22);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB84;

LAB86:    t27 = *((unsigned int *)t31);
    t28 = *((unsigned int *)t41);
    t152 = (t27 + t28);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, t152, 1, 0LL);
    goto LAB87;

LAB89:    xsi_set_current_line(121, ng0);

LAB91:    xsi_set_current_line(122, ng0);
    t7 = (t0 + 4824);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 4984);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 4984);
    t21 = (t20 + 72U);
    t23 = *((char **)t21);
    t60 = (t0 + 4984);
    t65 = (t60 + 64U);
    t66 = *((char **)t65);
    t67 = (t0 + 4344);
    t75 = (t67 + 56U);
    t76 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t153, 64, t19, t23, t66, 2, 1, t76, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t14), 0, 0, 1, ng16, 2, t0, (char)118, t153, 64);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 4344);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB88;

LAB93:    t13 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB95;

LAB94:    *((unsigned int *)t22) = 1;
    goto LAB95;

LAB97:    *((unsigned int *)t31) = 1;
    goto LAB100;

LAB99:    t16 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB100;

LAB101:    t19 = (t0 + 3704);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = ((char*)((ng17)));
    memset(t41, 0, 8);
    t60 = (t21 + 4);
    if (*((unsigned int *)t60) != 0)
        goto LAB105;

LAB104:    t65 = (t23 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB105;

LAB108:    if (*((unsigned int *)t21) > *((unsigned int *)t23))
        goto LAB106;

LAB107:    memset(t54, 0, 8);
    t67 = (t41 + 4);
    t28 = *((unsigned int *)t67);
    t29 = (~(t28));
    t30 = *((unsigned int *)t41);
    t32 = (t30 & t29);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t67) != 0)
        goto LAB111;

LAB112:    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t54);
    t36 = (t34 | t35);
    *((unsigned int *)t61) = t36;
    t76 = (t31 + 4);
    t89 = (t54 + 4);
    t95 = (t61 + 4);
    t37 = *((unsigned int *)t76);
    t38 = *((unsigned int *)t89);
    t39 = (t37 | t38);
    *((unsigned int *)t95) = t39;
    t40 = *((unsigned int *)t95);
    t42 = (t40 != 0);
    if (t42 == 1)
        goto LAB113;

LAB114:
LAB115:    goto LAB103;

LAB105:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB107;

LAB106:    *((unsigned int *)t41) = 1;
    goto LAB107;

LAB109:    *((unsigned int *)t54) = 1;
    goto LAB112;

LAB111:    t75 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB112;

LAB113:    t43 = *((unsigned int *)t61);
    t44 = *((unsigned int *)t95);
    *((unsigned int *)t61) = (t43 | t44);
    t96 = (t31 + 4);
    t100 = (t54 + 4);
    t45 = *((unsigned int *)t96);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t17 = (t47 & t46);
    t48 = *((unsigned int *)t100);
    t49 = (~(t48));
    t50 = *((unsigned int *)t54);
    t83 = (t50 & t49);
    t51 = (~(t17));
    t52 = (~(t83));
    t53 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t53 & t51);
    t55 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t55 & t52);
    goto LAB115;

LAB116:    *((unsigned int *)t88) = 1;
    goto LAB119;

LAB118:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB119;

LAB120:    t110 = (t0 + 3864);
    t115 = (t110 + 56U);
    t116 = *((char **)t115);
    t117 = ((char*)((ng1)));
    memset(t103, 0, 8);
    t125 = (t116 + 4);
    if (*((unsigned int *)t125) != 0)
        goto LAB124;

LAB123:    t126 = (t117 + 4);
    if (*((unsigned int *)t126) != 0)
        goto LAB124;

LAB127:    if (*((unsigned int *)t116) < *((unsigned int *)t117))
        goto LAB125;

LAB126:    memset(t111, 0, 8);
    t149 = (t103 + 4);
    t70 = *((unsigned int *)t149);
    t71 = (~(t70));
    t72 = *((unsigned int *)t103);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t149) != 0)
        goto LAB130;

LAB131:    t77 = *((unsigned int *)t88);
    t78 = *((unsigned int *)t111);
    t79 = (t77 | t78);
    *((unsigned int *)t154) = t79;
    t155 = (t88 + 4);
    t156 = (t111 + 4);
    t157 = (t154 + 4);
    t80 = *((unsigned int *)t155);
    t81 = *((unsigned int *)t156);
    t82 = (t80 | t81);
    *((unsigned int *)t157) = t82;
    t84 = *((unsigned int *)t157);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB122;

LAB124:    t143 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB126;

LAB125:    *((unsigned int *)t103) = 1;
    goto LAB126;

LAB128:    *((unsigned int *)t111) = 1;
    goto LAB131;

LAB130:    t150 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB131;

LAB132:    t86 = *((unsigned int *)t154);
    t87 = *((unsigned int *)t157);
    *((unsigned int *)t154) = (t86 | t87);
    t158 = (t88 + 4);
    t159 = (t111 + 4);
    t90 = *((unsigned int *)t158);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t135 = (t92 & t91);
    t93 = *((unsigned int *)t159);
    t94 = (~(t93));
    t97 = *((unsigned int *)t111);
    t136 = (t97 & t94);
    t98 = (~(t135));
    t99 = (~(t136));
    t105 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t105 & t98);
    t106 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t106 & t99);
    goto LAB134;

LAB135:    *((unsigned int *)t160) = 1;
    goto LAB138;

LAB137:    t162 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB138;

LAB139:    t164 = (t0 + 3864);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    t167 = ((char*)((ng17)));
    memset(t168, 0, 8);
    t169 = (t166 + 4);
    if (*((unsigned int *)t169) != 0)
        goto LAB143;

LAB142:    t170 = (t167 + 4);
    if (*((unsigned int *)t170) != 0)
        goto LAB143;

LAB146:    if (*((unsigned int *)t166) > *((unsigned int *)t167))
        goto LAB144;

LAB145:    memset(t172, 0, 8);
    t173 = (t168 + 4);
    t121 = *((unsigned int *)t173);
    t122 = (~(t121));
    t123 = *((unsigned int *)t168);
    t124 = (t123 & t122);
    t127 = (t124 & 1U);
    if (t127 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t173) != 0)
        goto LAB149;

LAB150:    t128 = *((unsigned int *)t160);
    t129 = *((unsigned int *)t172);
    t130 = (t128 | t129);
    *((unsigned int *)t175) = t130;
    t176 = (t160 + 4);
    t177 = (t172 + 4);
    t178 = (t175 + 4);
    t131 = *((unsigned int *)t176);
    t132 = *((unsigned int *)t177);
    t133 = (t131 | t132);
    *((unsigned int *)t178) = t133;
    t134 = *((unsigned int *)t178);
    t137 = (t134 != 0);
    if (t137 == 1)
        goto LAB151;

LAB152:
LAB153:    goto LAB141;

LAB143:    t171 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB145;

LAB144:    *((unsigned int *)t168) = 1;
    goto LAB145;

LAB147:    *((unsigned int *)t172) = 1;
    goto LAB150;

LAB149:    t174 = (t172 + 4);
    *((unsigned int *)t172) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB150;

LAB151:    t138 = *((unsigned int *)t175);
    t139 = *((unsigned int *)t178);
    *((unsigned int *)t175) = (t138 | t139);
    t179 = (t160 + 4);
    t180 = (t172 + 4);
    t140 = *((unsigned int *)t179);
    t141 = (~(t140));
    t142 = *((unsigned int *)t160);
    t151 = (t142 & t141);
    t144 = *((unsigned int *)t180);
    t145 = (~(t144));
    t146 = *((unsigned int *)t172);
    t152 = (t146 & t145);
    t147 = (~(t151));
    t148 = (~(t152));
    t181 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t181 & t147);
    t182 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t182 & t148);
    goto LAB153;

LAB154:    xsi_set_current_line(128, ng0);

LAB157:    xsi_set_current_line(129, ng0);
    t189 = ((char*)((ng4)));
    t190 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t190, t189, 0, 0, 1, 0LL);
    goto LAB156;

}

static void Always_147_2(char *t0)
{
    char t11[8];
    char t30[8];
    char t31[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 7360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 8192);
    *((int *)t2) = 1;
    t3 = (t0 + 7392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(148, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 5784);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(152, ng0);

LAB20:    xsi_set_current_line(153, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 5624);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(165, ng0);

LAB28:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 5144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    t10 = ((char*)((ng18)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_divide(t30, 32, t11, 32, t10, 32);
    memset(t31, 0, 8);
    t29 = (t5 + 4);
    t32 = (t30 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t30);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t29);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t29);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t31) = 1;

LAB32:    t34 = (t31 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t31);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(177, ng0);

LAB45:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB35:    goto LAB19;

LAB11:    xsi_set_current_line(186, ng0);

LAB46:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 5144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    memset(t30, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB47:    t29 = (t11 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB49;

LAB50:    t33 = (t30 + 4);
    t12 = *((unsigned int *)t33);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(193, ng0);

LAB56:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 5464);
    t4 = (t0 + 5464);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 5304);
    t10 = (t9 + 56U);
    t29 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t29, 3, 2);
    t32 = (t11 + 4);
    t12 = *((unsigned int *)t32);
    t8 = (!(t12));
    if (t8 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB60;

LAB59:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB61;

LAB62:    t29 = (t11 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(204, ng0);

LAB68:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB66:
LAB54:    goto LAB19;

LAB13:    xsi_set_current_line(214, ng0);

LAB69:    xsi_set_current_line(217, ng0);
    t3 = (t0 + 5144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    memset(t30, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB71;

LAB70:    t29 = (t11 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB72;

LAB73:    t33 = (t30 + 4);
    t12 = *((unsigned int *)t33);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(223, ng0);

LAB79:    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB77:    goto LAB19;

LAB15:    xsi_set_current_line(233, ng0);

LAB80:    xsi_set_current_line(234, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB19;

LAB23:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(158, ng0);
    t10 = ((char*)((ng6)));
    t29 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 3, 0LL);
    goto LAB27;

LAB31:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(167, ng0);

LAB36:    xsi_set_current_line(168, ng0);
    t35 = (t0 + 2024U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB40;

LAB37:    if (t49 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t37) = 1;

LAB40:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB43:    goto LAB35;

LAB39:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(169, ng0);

LAB44:    xsi_set_current_line(170, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 8, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB43;

LAB48:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB52:    xsi_set_current_line(188, ng0);

LAB55:    xsi_set_current_line(189, ng0);
    t34 = (t0 + 5144);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t36, 8, t38, 32);
    t39 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t39, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB54;

LAB57:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB58;

LAB60:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(199, ng0);

LAB67:    xsi_set_current_line(200, ng0);
    t32 = (t0 + 5304);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t34, 3, t35, 32);
    t36 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t36, t30, 0, 0, 3, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB66;

LAB71:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t30) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(218, ng0);

LAB78:    xsi_set_current_line(219, ng0);
    t34 = (t0 + 5144);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t36, 8, t38, 32);
    t39 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t39, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB77;

}

static void Cont_245_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 5624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_246_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 8224);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000385540591_0983302150_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_63_1,(void *)Always_147_2,(void *)Cont_245_3,(void *)Cont_246_4};
	xsi_register_didat("work_m_00000000000385540591_0983302150", "isim/UART_Testbench_isim_beh.exe.sim/work/m_00000000000385540591_0983302150.didat");
	xsi_register_executes(pe);
}
