// FUN_00441c10 @ 441c10 size=674

void __thiscall
FUN_00441c10(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            char param_7)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb20e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)((int)param_1 + 0x57) = 0;
  *(int *)((int)param_1 + 0x4a) = param_5;
  iVar5 = DAT_0089c0bc;
  if (param_5 == 0x10) {
    param_1[5] = DAT_0089c0b4;
  }
  else if (param_5 == 8) {
    param_1[5] = DAT_0089c0b8;
  }
  else if (param_5 == 7) {
    *(undefined4 *)((int)param_1 + 0x4a) = 8;
    param_1[5] = iVar5;
  }
  puVar2 = operator_new(0x1e);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_LAB_007e36b4;
    local_4 = 1;
    FUN_00418f40();
    *puVar2 = &PTR_FUN_007e36fc;
    *(undefined ***)((int)puVar2 + 0x12) = &PTR_LAB_007e36e8;
    *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007e36e4;
  }
  iVar5 = *(int *)((int)param_1 + 0x4a);
  param_1[3] = (int)puVar2;
  local_4 = 0xffffffff;
  if (param_3 <= iVar5 * 3) {
    param_3 = iVar5 * 3;
  }
  param_1[6] = param_3;
  iVar3 = param_4;
  if (param_4 <= iVar5 * 3) {
    iVar3 = iVar5 * 3;
  }
  param_1[7] = iVar3;
  if (param_3 % iVar5 != 0) {
    param_3 = (param_3 / iVar5) * iVar5;
  }
  param_1[6] = param_3;
  if (iVar3 % iVar5 != 0) {
    iVar3 = (iVar3 / iVar5) * iVar5;
  }
  param_1[7] = iVar3;
  pvVar4 = operator_new(0x25e);
  local_4 = 2;
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004010a0(param_1[6],param_1[7],0x10,1);
  }
  param_1[4] = iVar5;
  local_4 = 0xffffffff;
  if (param_2 == (int *)0x0) {
    param_1[8] = DAT_0089c0a0;
    param_1[9] = DAT_0089c0a4;
    if (DAT_00893750 != 0) {
      cVar1 = FUN_0042e9a0();
      if (cVar1 != '\0') {
        param_1[8] = 8;
        param_1[9] = 0x32;
      }
    }
    DAT_0089c0a0 = DAT_0089c0a0 + 8;
    DAT_0089c0a4 = DAT_0089c0a4 + 8;
    if (700 < DAT_0089c0a0) {
      DAT_0089c0a0 = 300;
      DAT_0089c0a4 = 100;
    }
    if (700 < param_4 + param_1[9]) {
      param_1[9] = 700 - param_4;
    }
  }
  else {
    param_1[8] = *param_2;
    param_1[9] = param_2[1];
  }
  cVar1 = FUN_00581e70();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (param_7 != '\0') {
    FUN_00442840(*(undefined4 *)(param_1[5] + 0x1c),param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 0x20),param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 4),param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 8),param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 0x18),param_6);
    FUN_00442840(*(undefined4 *)param_1[5],param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 0x10),param_6);
    FUN_00442840(*(undefined4 *)(param_1[5] + 0x14),param_6);
  }
  (**(code **)(*param_1 + 0x14))();
  DAT_0089c0c0 = param_1;
  ExceptionList = pvStack_c;
  return;
}


