// FUN_00627430 @ 627430 size=999

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00627430(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  char *pcVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  char *pcStack_144;
  undefined8 uStack_140;
  int iStack_128;
  int iStack_120;
  int iStack_11c;
  int local_118;
  undefined1 auStack_114 [4];
  int local_110;
  float fStack_10c;
  
  local_110 = *(int *)(param_1 + 0x12);
  iVar6 = *(int *)(param_1 + 0xe);
  uStack_140 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x2e),0x627457);
  local_118 = param_1;
  piVar1 = (int *)FUN_004e9370();
  uStack_140 = 3.37103035819269e-306;
  FUN_004136a0();
  uStack_140 = 5.41108926822131e-312;
  pcStack_144 = (char *)0xff;
  uVar2 = FUN_00584270();
  uStack_140 = (double)(ulonglong)uVar2;
  pcStack_144 = DAT_00bd1bac;
  uVar8 = CONCAT44(local_110 + 3,iVar6);
  uVar3 = (**(code **)(*piVar1 + 0xc))(iVar6,local_110 + 3);
  FUN_00413483(uVar3,uVar8);
  fStack_10c = (float)piVar1[0xa0];
  iStack_120 = piVar1[0x9e];
  iStack_11c = piVar1[0x9f];
  iStack_128 = piVar1[0x9d];
  uStack_140 = (double)CONCAT44(0x6274e9,(int)uStack_140);
  iVar4 = FUN_0044e1b0();
  fVar7 = fStack_10c;
  if (*(int *)(local_118 + 0x2e) == iVar4) {
    iStack_120 = *(int *)(DAT_00d0ca90 + 0x39b8);
    iStack_11c = *(int *)(DAT_00d0ca90 + 0x39bc);
    iStack_128 = *(int *)(DAT_00d0ca90 + 0x39c0);
    fVar7 = *(float *)(DAT_00d0ca90 + 0x39b4);
  }
  if (fVar7 <= _DAT_007ef328) {
    pcStack_144 = &DAT_0085e140;
  }
  else {
    fVar7 = fVar7 * _DAT_007e68d0;
    pcStack_144 = s___0fK_00860430;
  }
  uStack_140 = (double)fVar7;
  FUN_007a630a();
  fVar7 = (float)(local_110 + 0x10);
  pcStack_144 = (char *)0x627582;
  uStack_140._0_4_ = iVar6;
  uStack_140._4_4_ = fVar7;
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc4) + 0x18))();
  pcStack_144 = (char *)0x0;
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc4) + 0x10))();
  local_118 = iVar6 + 0x14;
  FUN_00413483(auStack_114,local_118,iStack_11c + 0x13,DAT_00bd1bac,uVar2,0);
  FUN_007a630a();
  fVar9 = fVar7;
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13ccc) + 0x18))(iVar6 + 0x30,fVar7);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13ccc) + 0x10))(0);
  uStack_140._0_4_ = iVar6 + 0x44;
  FUN_00413483(&iStack_120,(int)uStack_140,iStack_128 + 0x13,DAT_00bd1bac,uVar2,0);
  FUN_007a630a();
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cd8) + 0x18))();
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cd8) + 0x10))(0);
  FUN_00413483(&stack0xfffffed4,iVar6 + 0x74,unaff_ESI + 0x13,DAT_00bd1bac,uVar2,0);
  FUN_007a630a();
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc8) + 0x18))(iVar6,unaff_ESI + 0x20);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc8) + 0x10))(0);
  iVar4 = (int)uStack_140 + 0x23;
  FUN_00413483(&stack0xfffffec8,uStack_140._4_4_,iVar4,DAT_00bd1bac,uVar2,0);
  if (fVar7 <= _DAT_007ef328) {
    pcVar5 = &DAT_0085e140;
  }
  else {
    fVar7 = fVar7 * _DAT_007e68d0;
    pcVar5 = s___0fK_00860430;
  }
  FUN_007a630a(&stack0xfffffec8,pcVar5,(double)fVar7);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13ce0) + 0x18))(fVar9,unaff_ESI + 0x20);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x13ce0) + 0x10))(0);
  FUN_00413483(&pcStack_144,iVar6,iVar4,DAT_00bd1bac,uVar2,0);
  return 0;
}


