// FUN_006f0600 @ 6f0600 size=352

void __fastcall FUN_006f0600(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007da7d1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8164;
  param_1[2] = &PTR_LAB_007f8160;
  local_4 = 1;
  if (param_1[0xe9] != 0) {
    puVar1 = operator_new(0xc);
    local_4._0_1_ = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_004c0150(0x4d,&DAT_0088f29c);
      *puVar1 = &PTR_FUN_007e3e3c;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*(int *)param_1[0xe9] + 4))(puVar1);
    param_1[0xe9] = 0;
  }
  piVar3 = (int *)((int)param_1 + 0x2a);
  iVar2 = 4;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined4 **)((int)param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16))(1);
  }
  piVar3 = (int *)((int)param_1 + 0x3e);
  iVar2 = 7;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)((int)param_1 + 0x5a);
  if (iVar2 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar2);
  }
  iVar2 = *(int *)((int)param_1 + 0x5e);
  if (iVar2 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar2);
  }
  iVar2 = param_1[0x5c];
  if (iVar2 != 0) {
    FUN_006fa1a0();
    FUN_00796cd8(iVar2);
  }
  iVar2 = param_1[0x5d];
  if (iVar2 != 0) {
    FUN_006fa740();
    FUN_00796cd8(iVar2);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006f95d0();
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


