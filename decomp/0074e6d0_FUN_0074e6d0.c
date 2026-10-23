// FUN_0074e6d0 @ 74e6d0 size=371

void __fastcall FUN_0074e6d0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df9cb;
  pvStack_c = ExceptionList;
  puVar6 = (undefined4 *)(param_1 + 0x70);
  iVar5 = 3;
  iVar1 = *(int *)(DAT_00bd1bac + 4);
  iVar7 = (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0x254;
  ExceptionList = &pvStack_c;
  do {
    pvVar3 = operator_new(0xaa);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    local_4 = 0xffffffff;
    *puVar6 = uVar4;
    FUN_00415d40();
    (**(code **)(*(int *)*puVar6 + 0x18))((iVar1 + -0x400 >> 1) + 800,iVar7);
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 0x28;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_HOST_0086f6ac,*(int *)(param_1 + 0x70),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_JOIN_0086f698,*(undefined4 *)(param_1 + 0x74),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)(param_1 + 0x78),uVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x88) = 0xe;
  piVar2 = *(int **)(param_1 + 0x74);
  if (*(char *)((int)piVar2 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar2 + 0x60))();
  *(undefined1 *)((int)piVar2 + 0x86) = 1;
  piVar2 = *(int **)(param_1 + 0x70);
  if (*(char *)((int)piVar2 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar2 + 0x60))();
  *(undefined1 *)((int)piVar2 + 0x86) = 1;
  ExceptionList = pvStack_c;
  return;
}


