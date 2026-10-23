// FUN_00664320 @ 664320 size=224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00664320(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_8;
  
  iVar4 = FUN_0044e1d0();
  uVar1 = *(undefined4 *)(iVar4 + 0x52);
  local_8 = 99999999;
  iVar4 = FUN_004e9370(param_2);
  if (*(int *)(iVar4 + 0x3d8) == *(int *)(param_1 + 10)) {
    return param_2;
  }
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe8a4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar3[2];
    iVar4 = FUN_004e9370(*puVar3);
    puVar3 = puVar2;
    if ((*(int *)(iVar4 + 0x46a) != 0) && (iVar5 = FUN_004ece90(), iVar5 != 0)) {
      fVar6 = (float10)FUN_0044a9c0(param_2,*(undefined4 *)(iVar4 + 0x12));
      iVar5 = FUN_00527b40();
      if ((float)fVar6 / ((float)iVar5 * _DAT_007e5dd0 + _DAT_007e3374) < (float)local_8) {
        local_8 = __ftol();
        uVar1 = *(undefined4 *)(iVar4 + 0x12);
      }
    }
  }
  return uVar1;
}


