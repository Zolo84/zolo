// FUN_006e97f0 @ 6e97f0 size=366

void __thiscall FUN_006e97f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da25b;
  local_c = ExceptionList;
  iVar8 = *(int *)(param_1 + 8);
  ExceptionList = &local_c;
  puVar3 = operator_new(0xe);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = iVar8;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 8) = puVar3;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    *(undefined4 **)(iVar8 + 8) = puVar3;
  }
  FUN_00429950(*param_2);
  uVar9 = *param_2;
  FUN_0064eb30(uVar9);
  FUN_00594350(uVar9);
  pvVar4 = operator_new(0x60);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    uVar9 = *param_2;
    iVar8 = *(int *)(DAT_00bd1bac + 4);
    uVar5 = FUN_00584270(0xd0,0xe8,0xf8);
    uVar5 = uVar5 & 0xffff;
    iVar8 = iVar8 + -0x128;
    uVar11 = 0;
    uVar10 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar8 = FUN_006d9cc0(uVar6,uVar9,uVar10,iVar8,uVar11,uVar5);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x56) = param_3;
  *(undefined4 **)(iVar8 + 0x5a) = param_2;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar8 + 0x12;
  }
  iVar1 = *(int *)(param_1 + 0x26);
  iVar2 = *(int *)(iVar1 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar8;
    piVar7[1] = iVar2;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  *(int **)(iVar1 + 8) = piVar7;
  *(int *)(iVar1 + 0xc) = iVar8 + 1;
  if (iVar8 == 0) {
    *(int **)(iVar1 + 4) = piVar7;
  }
  else {
    *(int **)(iVar2 + 8) = piVar7;
  }
  iVar8 = 5;
  do {
    FUN_004351b0();
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  ExceptionList = local_c;
  return;
}


