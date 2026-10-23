// FUN_00436060 @ 436060 size=172

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00436060(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar6 = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  local_4 = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    piVar2 = (int *)*puVar1;
    cVar3 = FUN_00436e30(*(undefined4 *)(param_1 + 0x3e));
    if (cVar3 != '\0') {
      local_4 = iVar6;
    }
    iVar4 = (**(code **)(*piVar2 + 0x18))();
    iVar6 = iVar6 + iVar4;
  }
  iVar4 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    iVar5 = (**(code **)(*(int *)*puVar1 + 0x18))();
    iVar4 = iVar4 + iVar5;
  }
  if (iVar4 < iVar6) {
    iVar6 = 0;
    for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      iVar4 = (**(code **)(*(int *)*puVar1 + 0x18))();
      iVar6 = iVar6 + iVar4;
    }
  }
  iVar6 = iVar6 - *(int *)(param_1 + 0x2a);
  if (0 < iVar6) {
    return (float10)local_4 / (float10)iVar6;
  }
  return (float10)_DAT_007e3380;
}


