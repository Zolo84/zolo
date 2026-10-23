// FUN_005efef0 @ 5efef0 size=915

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005efef0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_158;
  int iStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  char *pcStack_138;
  undefined4 uStack_134;
  undefined4 uStack_8;
  
  uStack_134 = *(undefined4 *)((int)param_1 + 0x2e);
  pcStack_138 = (char *)0x5eff05;
  piVar1 = (int *)FUN_004e9370();
  iVar3 = *(int *)((int)param_1 + 0xe);
  iVar8 = *(int *)((int)param_1 + 0x12);
  uStack_134 = 0;
  pcStack_138 = (char *)0x5eff1a;
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))();
  if (piVar1[0xf5] != piVar1[0xf6]) {
    pcStack_138 = (char *)0x1;
    iStack_13c = 0x5eff34;
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))();
  }
  pcStack_138 = s_eurostilecond14_bmp_0082f010;
  iStack_13c = 0x5eff44;
  FUN_004136a0();
  pcStack_138 = (char *)0xff;
  iStack_13c = 0xff;
  uStack_140 = 0xff;
  iStack_144 = 0x5eff62;
  FUN_00584270();
  pcStack_138 = (char *)0x0;
  iStack_13c = 0;
  uStack_140 = 0;
  iStack_144 = 0x5eff73;
  FUN_00584270();
  pcStack_138 = (char *)iVar8;
  if (*(char *)((int)param_1 + 0x4e) != '\0') {
    iStack_13c = iVar3 + 6;
    uStack_140 = 0x5eff8b;
    (**(code **)(**(int **)((int)param_1 + 0x32) + 0x18))();
    iStack_144 = 0x5eff9b;
    (**(code **)(**(int **)((int)param_1 + 0x32) + 0x10))();
    iStack_148 = iVar3 + 6;
    uStack_14c = 0x5effa8;
    iStack_144 = iVar8;
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x18))();
    uStack_14c = 0;
    puStack_150 = (undefined1 *)0x5effb2;
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x10))();
    puStack_150 = (undefined1 *)0x0;
    iStack_154 = uStack_134;
    iVar8 = iVar8 + 4;
    uStack_158 = DAT_00bd1bac;
    iVar2 = (**(code **)(*param_1 + 0x1c))(iVar8);
    iVar3 = iVar2 / 2 + iVar3;
    uVar4 = (**(code **)(*piVar1 + 0xc))(iVar3);
    FUN_004132d0(uVar4,iVar3,iVar8);
    return 0;
  }
  uStack_140 = 0x5efffb;
  iStack_13c = iVar3;
  (**(code **)(**(int **)((int)param_1 + 0x32) + 0x18))();
  uStack_140 = uStack_8;
  iStack_144 = 0x5f000b;
  (**(code **)(**(int **)((int)param_1 + 0x32) + 0x10))();
  uStack_14c = 0x5f0015;
  iStack_148 = iVar3;
  iStack_144 = iVar8;
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x18))();
  uStack_14c = 0;
  puStack_150 = (undefined1 *)0x5f001f;
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x10))();
  iVar2 = iVar8 + 4;
  puStack_150 = &stack0xfffffed4;
  iStack_154 = uStack_134;
  iVar5 = iVar3 + 0x10;
  uStack_158 = DAT_00bd1bac;
  uVar4 = (**(code **)(*piVar1 + 0xc))(iVar5,iVar2);
  FUN_004133fd(uVar4,iVar5,iVar2);
  if (*(int *)((int)piVar1 + 0x1aa) == 0) {
    puStack_150 = (undefined1 *)0xfffffc18;
    iStack_154 = -1000;
    uStack_158 = 0x5f0096;
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x18))();
  }
  else {
    iStack_154 = iVar3 + 0x66;
    uStack_158 = 0x5f007b;
    puStack_150 = (undefined1 *)iVar8;
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x18))();
    uStack_158 = 0;
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x10))();
  }
  iVar2 = (**(code **)(*(int *)((int)piVar1 + 0x1a) + 4))();
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1[0x14] + 0x14))(iVar3 + 0x70,iVar8);
  }
  FUN_004ed0e0();
  uVar4 = __ftol();
  FUN_007a630a(&stack0xfffffed8,&DAT_008390a0,uVar4);
  FUN_004133fd(&stack0xfffffed8,iVar3 + 0x80,iStack_13c,DAT_00bd1bac,uStack_140,0);
  iVar2 = FUN_004129c4(&stack0xfffffed8);
  iVar2 = iVar2 + 0x84 + iVar3;
  iStack_148 = iVar2;
  if (*(float *)((int)piVar1 + 0x20a) == _DAT_007e3380) {
    iVar2 = -1000;
    (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x18))(0xfffffc18,0xfffffc18);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x18))(iVar2,iVar8);
    (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x10))(0);
    iVar5 = FUN_00415bd0();
    iStack_154 = iStack_154 + iVar5;
  }
  if (*(float *)((int)piVar1 + 0x206) == _DAT_007e3380) {
    iVar5 = -1000;
    uVar4 = 0x5f019a;
    (**(code **)(**(int **)((int)param_1 + 0x4a) + 0x18))(0xfffffc18,0xfffffc18);
  }
  else {
    iVar5 = iStack_154;
    (**(code **)(**(int **)((int)param_1 + 0x4a) + 0x18))(iStack_154,iVar8);
    uVar4 = 0;
    (**(code **)(**(int **)((int)param_1 + 0x4a) + 0x10))(0);
    iVar6 = FUN_00415bd0();
    iVar2 = iVar2 + iVar6;
  }
  if (*(float *)((int)piVar1 + 0x1fe) == _DAT_007e3380) {
    (**(code **)(**(int **)((int)param_1 + 0x42) + 0x18))(0xfffffc18,0xfffffc18);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x42) + 0x18))(iVar2,iVar8);
    (**(code **)(**(int **)((int)param_1 + 0x42) + 0x10))(0);
    iVar2 = FUN_00415bd0();
    iVar5 = iVar5 + iVar2;
  }
  if (*(float *)((int)piVar1 + 0x202) == _DAT_007e3380) {
    (**(code **)(**(int **)((int)param_1 + 0x46) + 0x18))(0xfffffc18,0xfffffc18);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x46) + 0x18))(iVar5,iVar8);
    (**(code **)(**(int **)((int)param_1 + 0x46) + 0x10))(0);
    FUN_00415bd0();
  }
  uVar7 = FUN_00527630(0);
  FUN_007a630a(&uStack_158,&DAT_008390a0,uVar7);
  FUN_00413369(&uStack_158,iVar3 + 200,iVar5,DAT_00bd1bac,uVar4,0);
  return 0;
}


