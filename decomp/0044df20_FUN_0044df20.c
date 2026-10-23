// FUN_0044df20 @ 44df20 size=292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044df20(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 0xe892);
  do {
    if (puVar5 == (undefined4 *)0x0) goto LAB_0044df60;
    puVar2 = (undefined4 *)puVar5[2];
    iVar6 = FUN_004e9370(*puVar5);
    puVar5 = puVar2;
  } while (*(float *)(*(int *)(iVar6 + 0x1ea) + 0x14) <= _DAT_007e3380);
  if ((*(float *)(*(int *)(iVar6 + 0x1ea) + 0x14) < _DAT_007e4074) ||
     (*(char *)(param_1 + 0xe314) == '\0')) {
LAB_0044df60:
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 1) = 0;
    *(undefined1 *)param_2 = 0;
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0xe892);
  do {
    fVar4 = _DAT_007e3380;
    if (puVar5 == (undefined4 *)0x0) goto LAB_0044dfd8;
    puVar2 = (undefined4 *)puVar5[2];
    iVar6 = FUN_004e9370(*puVar5);
    puVar5 = puVar2;
  } while (*(float *)(*(int *)(iVar6 + 0x1ea) + 0x14) <= _DAT_007e3380);
  fVar4 = *(float *)(*(int *)(iVar6 + 0x1ea) + 0x14);
LAB_0044dfd8:
  iVar6 = (int)ROUND((_DAT_007e383c - fVar4) * _DAT_00d7cbac);
  if (*(char *)(param_1 + 0xe320) != '\0') {
    iVar6 = iVar6 / 2;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x4656);
  uVar1 = *(undefined2 *)(param_1 + 0x465a);
  FUN_0042dc20(iVar6);
  *param_2 = uVar3;
  *(undefined2 *)(param_2 + 1) = uVar1;
  return;
}


