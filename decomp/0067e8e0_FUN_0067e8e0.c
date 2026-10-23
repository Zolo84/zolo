// FUN_0067e8e0 @ 67e8e0 size=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0067e8e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = (&DAT_0089cad8)[param_1];
  if (iVar1 != 0) {
    param_1 = 0;
    puVar3 = *(undefined4 **)(iVar1 + 0xe8b6);
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[2];
      iVar4 = FUN_004e9370(*puVar3);
      puVar3 = puVar2;
      if ((*(int *)(iVar4 + 0x3d4) == iVar1) &&
         (iVar5 = iVar5 + 1, *(int *)(iVar4 + 0x3d8) != iVar1)) {
        param_1 = __ftol();
      }
    }
    return (int)ROUND(((float)param_1 * _DAT_007e4088) / (float)iVar5);
  }
  return 0;
}


