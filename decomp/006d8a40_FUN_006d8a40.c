// FUN_006d8a40 @ 6d8a40 size=518

undefined4 __fastcall FUN_006d8a40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9646;
  local_c = ExceptionList;
  puVar8 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2220a) == 0) {
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x2220e) + 0x20);
    uVar5 = *puVar8;
    iVar7 = 0;
    do {
      puVar8 = (undefined4 *)puVar8[2];
      bVar9 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar9);
    uVar1 = *(undefined4 *)(param_1 + 6);
    ExceptionList = &local_c;
    uVar4 = FUN_0042b6c9(*puVar8);
    uVar5 = FUN_0042b6c9(uVar5);
    FUN_006ea3b0(0,uVar1,&DAT_0088ebf8,uVar5,uVar4);
    puVar8 = operator_new(0xc);
    local_4 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar5 = *(undefined4 *)(DAT_00bd1500 + 900);
      FUN_006d9a20(0xae,&DAT_0088f29c);
      *puVar8 = &PTR_FUN_007e9cdc;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar5;
    }
    local_4 = 0xffffffff;
    FUN_00565c50(puVar8);
    iVar7 = *(int *)(param_1 + 0x2220e);
    *(undefined4 *)(param_1 + 0x2220a) = DAT_0089c0c0;
    if (*(int *)(iVar7 + 0x32) != 0) goto LAB_006d8c1f;
    iVar2 = *(int *)(iVar7 + 0x36);
  }
  else {
    ExceptionList = &local_c;
    cVar3 = (**(code **)(*(int *)(DAT_00d13360 + 0x12) + 0x24))(*(int *)(param_1 + 0x2220a));
    if (cVar3 == '\0') {
      iVar7 = *(int *)(param_1 + 0x2220e);
      puVar6 = *(undefined4 **)(iVar7 + 0x20);
      while (puVar6 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)puVar6[2];
        FUN_00796cd8(*puVar6);
        FUN_00796cd8(puVar6);
        puVar6 = puVar8;
      }
      *(undefined4 **)(iVar7 + 0x20) = puVar8;
      *(undefined4 **)(iVar7 + 0x24) = puVar8;
      *(undefined4 **)(iVar7 + 0x28) = puVar8;
      puVar6 = *(undefined4 **)(param_1 + 0x2220e);
      if (puVar6 != puVar8) {
        puVar6[7] = &PTR_LAB_007e3b70;
        FUN_00427ac0();
        puVar6[1] = &PTR_LAB_007e378c;
        FUN_004174b0();
        FUN_00796cd8(puVar6);
      }
      *(undefined4 **)(param_1 + 0x2220e) = puVar8;
      *(undefined4 **)(param_1 + 0x2220a) = puVar8;
      puVar6 = operator_new(0xc);
      local_4 = 1;
      if (puVar6 == puVar8) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_00bd1500 + 900);
        FUN_006d9a20(0xaf,&DAT_0088f29c);
        *puVar6 = &PTR_FUN_007e9cdc;
        *(undefined4 *)(puVar6[1] + 0xe) = uVar5;
      }
      local_4 = 0xffffffff;
      FUN_00565c50(puVar6);
      ExceptionList = local_c;
      return 1;
    }
    iVar7 = *(int *)(param_1 + 0x2220e);
    if (*(int *)(iVar7 + 0x32) != 0) goto LAB_006d8c1f;
    iVar2 = *(int *)(iVar7 + 0x36);
  }
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 1;
  }
LAB_006d8c1f:
  iVar2 = *(int *)(param_1 + 0x2220a);
  uVar5 = *(undefined4 *)(iVar7 + 0x36);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar7 + 0x32);
  *(undefined4 *)(iVar2 + 0x24) = uVar5;
  ExceptionList = local_c;
  return 1;
}


