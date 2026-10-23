// FUN_0043f860 @ 43f860 size=431

int * __thiscall FUN_0043f860(int param_1,byte param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baf7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0xb6);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00433570(s_gfx_interface_btn_radio_bmp_0083bf4c,param_3,0xffffffff);
    *(undefined4 *)((int)piVar1 + 0xb2) = 0;
    *piVar1 = (int)&PTR_FUN_007e46e8;
    piVar1[2] = (int)&PTR_LAB_007e46e4;
    *(undefined ***)((int)piVar1 + 0x7e) = &PTR_LAB_007e46e0;
  }
  *(undefined4 *)((int)piVar1 + 0xaa) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)((int)piVar1 + 0xae) = *(undefined4 *)(param_1 + 0x22);
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x1e),*(undefined4 *)(param_1 + 0x22));
  if ((param_2 & 1) != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    uVar8 = 0;
    uVar7 = 0xffff;
    uVar6 = DAT_00bd1bac;
    iVar2 = FUN_00415be0(DAT_00bd1bac,0xffff,0);
    iVar2 = (iVar2 / 2 - iVar3 / 2) + *(int *)(param_1 + 0x22);
    iVar3 = FUN_00415bd0(iVar2);
    FUN_004133fd(local_4,iVar3 + *(int *)(param_1 + 0x1e),iVar2,uVar6,uVar7,uVar8);
    iVar3 = *(int *)(param_1 + 0x2a);
    if (iVar3 < 1) {
      iVar3 = FUN_00415be0();
    }
    *(int *)(param_1 + 0x22) = *(int *)(param_1 + 0x22) + iVar3;
  }
  if ((param_2 & 2) != 0) {
    uVar8 = 0;
    uVar7 = 0xffff;
    uVar6 = DAT_00bd1bac;
    iVar3 = FUN_00415be0(DAT_00bd1bac,0xffff,0);
    iVar3 = iVar3 + *(int *)(param_1 + 0x22);
    iVar2 = FUN_004129c4(local_4);
    iVar4 = FUN_00415bd0(iVar3);
    FUN_004133fd(local_4,(iVar4 / 2 - iVar2 / 2) + *(int *)(param_1 + 0x1e),iVar3,uVar6,uVar7,uVar8)
    ;
    iVar3 = *(int *)(param_1 + 0x2a);
    if (iVar3 < 1) {
      iVar3 = FUN_00415bd0();
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + iVar3;
  }
  iVar3 = *(int *)(param_1 + 8);
  puVar5 = operator_new(0xe);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = piVar1;
    puVar5[1] = iVar3;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 8) = puVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar5;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar5;
  }
  ExceptionList = unaff_EBX;
  return piVar1;
}


