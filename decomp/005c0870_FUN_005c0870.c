// FUN_005c0870 @ 5c0870 size=202

void __fastcall FUN_005c0870(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cc683;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ec5f0;
  param_1[2] = &PTR_LAB_007ec5ec;
  local_4 = 1;
  cVar3 = FUN_0042e910();
  if (cVar3 == '\0') {
    FUN_0064a850(0);
  }
  *(undefined4 *)(DAT_00d0ca90 + 0x13da8) = 0;
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  iVar1 = *(int *)((int)param_1 + 0x72);
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  param_1[0x18] = &PTR_LAB_007e378c;
  iVar1 = param_1[0x19];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar2;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


