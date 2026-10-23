// FUN_0043f160 @ 43f160 size=216

void __fastcall FUN_0043f160(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007baf63;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4654;
  param_1[2] = &PTR_LAB_007e4650;
  local_4 = 1;
  puVar4 = *(undefined4 **)((int)param_1 + 0x82);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    FUN_00796cd8(*puVar4);
    FUN_00796cd8(puVar4);
    puVar4 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  local_4 = local_4 & 0xffffff00;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e469c;
  iVar3 = *(int *)((int)param_1 + 0x82);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


