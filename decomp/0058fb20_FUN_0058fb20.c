// FUN_0058fb20 @ 58fb20 size=612

undefined4 * __thiscall FUN_0058fb20(int param_1,undefined4 param_2,char param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9d1b;
  pvStack_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x30);
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = param_2;
    puVar1[2] = iVar7;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  *(undefined4 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(param_1 + 0x34) = puVar1;
  }
  else {
    *(undefined4 **)(iVar7 + 4) = puVar1;
  }
  puVar1 = operator_new(0xb6);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00432df0(((int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2) * 0x10 + 0x18,
                 *(int *)(*(int *)(param_1 + 0x18) + 0x10) + 8,0x10);
    *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    *puVar1 = &PTR_FUN_007e46e8;
    puVar1[2] = &PTR_LAB_007e46e4;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e46e0;
  }
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)((int)puVar1 + 0x62) + 0x252) = 1;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  *(undefined4 *)((int)puVar1 + 0x92) = uVar2;
  iVar7 = 2;
  if (param_3 != '\0') {
    iVar7 = FUN_004129c4(param_2);
    iVar3 = FUN_00415bd0();
    iVar7 = (iVar3 / 2 - iVar7 / 2) + -5;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
  iVar4 = FUN_00415be0();
  iVar3 = (iVar4 - iVar3) / 2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  FUN_007a630a(&DAT_00bd9bf4,s___000_s_0083bf20,param_2);
  FUN_004133fd(&DAT_00bd9bf4,iVar7 + 9,iVar3,*(undefined4 *)((int)puVar1 + 0x62),0xffff,0);
  FUN_007a630a(&DAT_00bd9bf4,s___067_s_00858150,param_2);
  uVar2 = *(undefined4 *)((int)puVar1 + 0x62);
  uVar9 = 0;
  uVar8 = 0xffff;
  iVar4 = iVar3;
  iVar5 = FUN_00415bd0(iVar3,uVar2,0xffff,0);
  FUN_004133fd(&DAT_00bd9bf4,iVar5 + 9 + iVar7,iVar4,uVar2,uVar8,uVar9);
  uVar2 = *(undefined4 *)((int)puVar1 + 0x62);
  uVar9 = 0;
  uVar8 = 0xffff;
  iVar4 = iVar3;
  iVar5 = FUN_00415bd0(iVar3,uVar2,0xffff,0);
  FUN_004133fd(&DAT_00bd9bf4,iVar7 + 9 + iVar5 * 2,iVar4,uVar2,uVar8,uVar9);
  FUN_007a630a(&DAT_00bd9bf4,s___555_s_00858148,param_2);
  uVar2 = *(undefined4 *)((int)puVar1 + 0x62);
  uVar9 = 0;
  uVar8 = 0xffff;
  iVar4 = FUN_00415bd0(iVar3,uVar2,0xffff,0);
  FUN_004133fd(&DAT_00bd9bf4,iVar7 + (iVar4 + 3) * 3,iVar3,uVar2,uVar8,uVar9);
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  iVar7 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar7 + 8);
  puVar6 = operator_new(0xe);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = puVar1;
    puVar6[1] = iVar3;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar4 = *(int *)(iVar7 + 0xc);
  *(undefined4 **)(iVar7 + 8) = puVar6;
  *(int *)(iVar7 + 0xc) = iVar4 + 1;
  if (iVar4 == 0) {
    *(undefined4 **)(iVar7 + 4) = puVar6;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar6;
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


