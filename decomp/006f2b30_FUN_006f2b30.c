// FUN_006f2b30 @ 6f2b30 size=378

void __fastcall FUN_006f2b30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007da9b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f81ec;
  param_1[2] = &PTR_LAB_007f81e8;
  local_4 = 0;
  FUN_00582310();
  if (param_1[0x82] != 0) {
    puVar1 = operator_new(0xc);
    local_4._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_004c0150(0x4d,&DAT_0088f29c);
      *puVar1 = &PTR_FUN_007e3e3c;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*(int *)param_1[0x82] + 4))(puVar1);
    param_1[0x82] = 0;
  }
  piVar3 = (int *)((int)param_1 + 0xaa);
  iVar2 = 4;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined4 **)((int)param_1 + 0x96) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x96))(1);
  }
  piVar3 = (int *)((int)param_1 + 0xbe);
  iVar2 = 7;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)((int)param_1 + 0xda);
  if (iVar2 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar2);
  }
  iVar2 = *(int *)((int)param_1 + 0xde);
  if (iVar2 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar2);
  }
  iVar2 = param_1[0x7e];
  if (iVar2 != 0) {
    FUN_006fa1a0();
    FUN_00796cd8(iVar2);
  }
  iVar2 = param_1[0x7f];
  if (iVar2 != 0) {
    FUN_006fa740();
    FUN_00796cd8(iVar2);
  }
  if (*(undefined4 **)((int)param_1 + 0x1e2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1e2))(1);
  }
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


