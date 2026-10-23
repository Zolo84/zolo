// FUN_0057b230 @ 57b230 size=416

void __fastcall FUN_0057b230(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c89f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ead80;
  piVar4 = (int *)param_1[0x2f1];
  local_4 = 1;
  if (piVar4 != (int *)0x0) {
    uVar2 = *(undefined4 *)((int)param_1 + param_1[0xe1] * 0x3e + 0x3b0);
    param_1[0xeb] = 0;
    if (*(char *)((int)param_1 + 0x37b) != '\0') {
      uVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,uVar2);
      param_1[0xeb] = uVar2;
    }
    (**(code **)(*(int *)param_1[0x2f1] + 0x10))((int *)param_1[0x2f1]);
    (**(code **)(*(int *)param_1[0x2f1] + 8))((int *)param_1[0x2f1]);
  }
  if (param_1[0x2f1] != 0) {
    (**(code **)(*(int *)param_1[0x2f2] + 8))((int *)param_1[0x2f2]);
  }
  piVar4 = param_1 + 0xd3;
  iVar3 = 10;
  do {
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,puVar1[1]);
      FUN_00796cd8(puVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = param_1 + 0xe;
  iVar3 = 8;
  do {
    if (*piVar4 != 0) {
      FUN_00796cd8(*piVar4);
    }
    piVar4 = piVar4 + 0x14;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = param_1 + 0xf0;
  iVar3 = 0x20;
  do {
    if (*piVar4 != 0) {
      FUN_00796cd8(*piVar4);
    }
    piVar4 = (int *)((int)piVar4 + 0x3e);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = param_1 + 0xe3;
  iVar3 = 4;
  do {
    if (*piVar4 != 0) {
      FUN_00796cd8(*piVar4);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (DAT_00bd0554 != (HANDLE)0x0) {
    CloseHandle(DAT_00bd0554);
    DAT_00bd0554 = (HANDLE)0x0;
  }
  if (DAT_00bd0558 != (HANDLE)0x0) {
    CloseHandle(DAT_00bd0558);
    DAT_00bd0558 = (HANDLE)0x0;
  }
  CoUninitialize();
  local_4 = local_4 & 0xffffff00;
  FUN_007a8882(param_1 + 0xec,0x3e,0x20,&LAB_0057b1f0);
  local_4 = 0xffffffff;
  FUN_0057f0f0();
  ExceptionList = pvStack_c;
  return;
}


