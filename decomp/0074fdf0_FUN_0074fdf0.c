// FUN_0074fdf0 @ 74fdf0 size=584

uint __fastcall FUN_0074fdf0(int param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  uint local_38;
  int iStack_34;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfab8;
  pvStack_c = ExceptionList;
  local_38 = 0;
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if (*(int *)(param_1 + 0x88) == 0) {
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
    ExceptionList = pvStack_c;
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x5a);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_007f0c98;
  }
  FUN_00437a20(puVar1,0xffffffff,1);
  if (*(int *)(param_1 + 0x88) != 0) {
    DVar2 = WaitForSingleObject(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6),0xffffffff);
    if (DVar2 != 0) {
      GetLastError();
      FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
    }
    puVar1 = &DAT_007f0c98;
    if (*(undefined4 **)(param_1 + 0x2a) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 0x2a);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x1a);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    iVar4 = FUN_00745490(puVar3,*(undefined4 *)(param_1 + 0x66),puVar1);
    if (iVar4 == 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    local_38 = 0;
    iStack_34 = 0;
    while( true ) {
      iVar5 = FUN_00745aa0(auStack_2c);
      iVar4 = iStack_24;
      if (*(int *)(iVar5 + 4) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 4;
      }
      for (iVar5 = iStack_28; iVar5 != iVar4; iVar5 = iVar5 + 0x10) {
        FUN_00674910(1);
      }
      FUN_00796cd8(iStack_28);
      iStack_28 = 0;
      iStack_24 = 0;
      uStack_20 = 0;
      if (uVar6 <= local_38) break;
      iVar4 = FUN_00745aa0(auStack_1c);
      uStack_4 = 0;
      puVar1 = *(undefined4 **)(iStack_34 + 4 + *(int *)(iVar4 + 4));
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = &DAT_007f0c98;
      }
      FUN_00437a20(puVar1,0xffffffff,1);
      iVar5 = iStack_14;
      uStack_4 = 0xffffffff;
      for (iVar4 = iStack_18; iVar4 != iVar5; iVar4 = iVar4 + 0x10) {
        FUN_00674910(1);
      }
      FUN_00796cd8(iStack_18);
      iStack_18 = 0;
      iStack_14 = 0;
      uStack_10 = 0;
      local_38 = local_38 + 1;
      iStack_34 = iStack_34 + 0x10;
    }
    BVar7 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
    if (BVar7 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  ExceptionList = pvStack_c;
  return local_38;
}


