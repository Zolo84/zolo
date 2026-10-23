// FUN_005e78d0 @ 5e78d0 size=1186

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005e78d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  char *pcStack_170;
  undefined *puStack_16c;
  undefined4 uStack_168;
  int *piStack_164;
  undefined4 uStack_160;
  int *piStack_15c;
  char *pcStack_158;
  undefined8 uStack_154;
  char acStack_14c [16];
  char *pcStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  float fStack_130;
  
  FUN_0061eac0();
  iVar6 = FUN_00428ee0();
  if ((iVar6 != 0) && (iVar6 + -8 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x150) + 0x18))();
    (**(code **)(**(int **)(param_1 + 0x150) + 0x10))();
    if (*(int **)(iVar6 + 0x56) == (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14c) + 0x18))();
      fStack_130 = 8.676082e-39;
      (**(code **)(**(int **)(param_1 + 0x14c) + 0x10))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x154 + **(int **)(iVar6 + 0x56) * 4) + 0x14))();
    }
    iStack_134 = 0x5e796c;
    fStack_130 = (float)(iVar6 + -8);
    FUN_005e80e0();
    puVar4 = *(undefined4 **)(param_1 + 600);
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar4[3];
      fStack_130 = (float)param_2;
      iStack_134 = 0x5e798a;
      (**(code **)(*(int *)*puVar4 + 0x10))();
      puVar4 = puVar1;
    }
    fStack_130 = 8.676152e-39;
    fVar9 = (float10)FUN_004bebe0();
    fStack_130 = (float)fVar9;
    iStack_134 = 0x5e79ab;
    FUN_005194d0();
    iVar2 = *(int *)(param_1 + 0xce);
    fStack_130 = 4.37205e-43;
    iStack_134 = 0x5e79b9;
    iVar7 = FUN_00415bd0();
    iStack_134 = 0x80 - iVar7 / 2;
    uStack_138 = 0x5e79cb;
    (**(code **)(iVar2 + 0x18))();
    uStack_138 = 0;
    pcStack_13c = (char *)0x5e79d4;
    (**(code **)(*(int *)(param_1 + 0xce) + 0x10))();
    pcStack_13c = s_eurostilecond14_bmp_0082f010;
    acStack_14c[0xc] = -0x1c;
    acStack_14c[0xd] = 'y';
    acStack_14c[0xe] = '^';
    acStack_14c[0xf] = '\0';
    FUN_004136a0();
    pcStack_13c = s_eurostilecond14bold_bmp_0083bcc0;
    acStack_14c[0xc] = -10;
    acStack_14c[0xd] = 'y';
    acStack_14c[0xe] = '^';
    acStack_14c[0xf] = '\0';
    FUN_004136a0();
    pcStack_13c = (char *)0x71;
    acStack_14c[0xc] = '\x10';
    acStack_14c[0xd] = '\0';
    acStack_14c[0xe] = '\0';
    acStack_14c[0xf] = '\0';
    acStack_14c[8] = '\x05';
    acStack_14c[9] = 'z';
    acStack_14c[10] = '^';
    acStack_14c[0xb] = '\0';
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x38))();
    acStack_14c[8] = '\0';
    acStack_14c[9] = '\0';
    acStack_14c[10] = '\0';
    acStack_14c[0xb] = '\0';
    acStack_14c[4] = '\x12';
    acStack_14c[5] = 'z';
    acStack_14c[6] = '^';
    acStack_14c[7] = '\0';
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x10))();
    acStack_14c[4] = -100;
    acStack_14c[5] = -1;
    acStack_14c[6] = -1;
    acStack_14c[7] = -1;
    acStack_14c[0] = -100;
    acStack_14c[1] = -1;
    acStack_14c[2] = -1;
    acStack_14c[3] = -1;
    uStack_154 = (double)CONCAT44(0x5e7a21,(undefined4)uStack_154);
    (**(code **)(**(int **)(param_1 + 0x244) + 0x18))();
    if (*(int *)(iVar6 + 0x6c) == 2) {
      piStack_15c = &iStack_134;
      uStack_154 = (double)(*(float *)(iVar6 + 0xac) * _DAT_007e4088);
      pcStack_158 = s___1fkm_0085c890;
      uStack_160 = 0x5e7a4e;
      FUN_007a630a();
      pcVar5 = DAT_00bd1bac;
      uStack_154._4_4_ = 0;
      uStack_154._0_4_ = 0x80;
      pcStack_158 = (char *)0x80;
      piStack_15c = (int *)0x80;
      uStack_160 = 0x5e7a73;
      uVar8 = FUN_00584270();
      uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar8);
      pcStack_158 = pcVar5;
      piStack_15c = (int *)0xc0;
      piStack_164 = &iStack_134;
      uStack_160 = 0x80;
      uStack_168 = 0x5e7a8b;
      FUN_004132d0();
      piStack_15c = &iStack_134;
      uStack_154 = (double)(*(float *)(*(int *)(iVar6 + 0x78) + 100) * _DAT_007e4088);
      pcStack_158 = s___0f____00858100;
      uStack_160 = 0x5e7aaf;
      FUN_007a630a();
      pcVar5 = DAT_00bd1bac;
      uStack_154._4_4_ = 0;
      uStack_154._0_4_ = 0xff;
      pcStack_158 = (char *)0xff;
      piStack_15c = (int *)0xff;
      uStack_160 = 0x5e7ad4;
      uVar8 = FUN_00584270();
      uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar8);
      pcStack_158 = pcVar5;
      piStack_15c = (int *)0xc0;
      piStack_164 = &iStack_134;
      uStack_160 = 0x44;
      uStack_168 = 0x5e7ae9;
      FUN_004133fd();
      piStack_15c = &iStack_134;
      uStack_154 = (double)(*(float *)(*(int *)(iVar6 + 0x7c) + 100) * _DAT_007e4088);
      pcStack_158 = s___0f____00858100;
      uStack_160 = 0x5e7b0d;
      FUN_007a630a();
      pcVar5 = DAT_00bd1bac;
      uStack_154._4_4_ = 0;
      uStack_154._0_4_ = 0xff;
      pcStack_158 = (char *)0xff;
      piStack_15c = (int *)0xff;
      uStack_160 = 0x5e7b32;
      uVar8 = FUN_00584270();
      uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar8);
      pcStack_158 = pcVar5;
      piStack_15c = (int *)0xc0;
      piStack_164 = &iStack_134;
      uStack_160 = 0xbe;
      uStack_168 = 0x5e7b4a;
      FUN_00413369();
    }
    else if ((*(int *)(iVar6 + 0x6c) == 1) && (*(int *)(iVar6 + 0x56) != 0)) {
      uStack_154 = 5.4323092251873e-312;
      pcStack_158 = (char *)0x5e7b6a;
      (**(code **)(**(int **)(param_1 + 0x244) + 0x14))();
      uStack_154 = 3.23785921002061e-319;
      piStack_164 = (int *)**(undefined4 **)(iVar6 + 0x56);
      pcStack_158 = DAT_00bd1bac;
      piStack_15c = (int *)0x104;
      uStack_160 = 0x80;
      uStack_168 = 0x5e7b8d;
      piStack_164 = (int *)FUN_004c1670();
      uStack_168 = 0x5e7b98;
      FUN_004132d0();
    }
    uStack_154 = 2.88591427577206e-312;
    pcStack_158 = (char *)0x5e7baa;
    (**(code **)(**(int **)(param_1 + 0x170) + 0x18))();
    pcStack_158 = (char *)0x0;
    piStack_15c = (int *)0x5e7bb7;
    (**(code **)(**(int **)(param_1 + 0x170) + 0x10))();
    piStack_15c = (int *)0xd8;
    uStack_160 = 0x14;
    piStack_164 = (int *)0x5e7bc9;
    (**(code **)(**(int **)(param_1 + 0x248) + 0x18))();
    piStack_164 = (int *)0x0;
    uStack_168 = 0x5e7bd6;
    (**(code **)(**(int **)(param_1 + 0x248) + 0x10))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
      uStack_168 = *(undefined4 *)(*(int *)(iVar6 + 0x78) + 8);
      puStack_16c = *(undefined **)(*(int *)(iVar6 + 0x78) + 4);
      pcStack_170 = s__d__d_0085b024;
      FUN_007a630a(acStack_14c);
    }
    else {
      uStack_168 = 0x5e7c0f;
      (**(code **)(**(int **)(iVar6 + 0x78) + 0xc))();
      uStack_168 = 0x5e7c16;
      uStack_168 = FUN_00527b40();
      pcStack_170 = acStack_14c;
      puStack_16c = &DAT_008390a0;
      FUN_007a630a();
    }
    uStack_168 = 0;
    puStack_16c = (undefined *)0xffff;
    pcStack_170 = DAT_00bd1bac;
    FUN_004133fd(acStack_14c,0x40,0xf0);
    uStack_168 = 0x150;
    puStack_16c = (undefined *)0x10;
    pcStack_170 = (char *)0x5e7c5c;
    (**(code **)(**(int **)(param_1 + 0x178) + 0x34))();
    pcStack_170 = (char *)0x0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x178) + 0x12) + 0x10))();
    (**(code **)(**(int **)(param_1 + 0x174) + 0x18))(200,0x88);
    (**(code **)(**(int **)(param_1 + 0x174) + 0x10))(0);
    (**(code **)(**(int **)(param_1 + 0x24c) + 0x18))(200,0xd8);
    (**(code **)(**(int **)(param_1 + 0x24c) + 0x10))(0);
    piVar3 = *(int **)(iVar6 + 0x7c);
    if (*(int *)(iVar6 + 0x6c) == 1) {
      FUN_007a630a(&pcStack_170,s__d__d_0085b024,piVar3[1],piVar3[2]);
    }
    else {
      (**(code **)(*piVar3 + 0xc))();
      uVar8 = FUN_00527b40();
      FUN_007a630a(&pcStack_170,&DAT_008390a0,uVar8);
    }
    FUN_00413369(&pcStack_170,0xc0,0xf0,DAT_00bd1bac,0xffff,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x34))(0xa0,0x150);
    FUN_00435410(0x88);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x17c) + 0x12) + 0x10))(0);
    return 0;
  }
  return 0;
}


