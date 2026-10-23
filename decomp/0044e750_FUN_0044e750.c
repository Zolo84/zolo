// FUN_0044e750 @ 44e750 size=75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0044e750(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0xe892);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar2[2];
    iVar3 = FUN_004e9370(*puVar2);
    puVar2 = puVar1;
  } while (*(float *)(*(int *)(iVar3 + 0x1ea) + 0x10) <= _DAT_007e3380);
  uVar4 = __ftol();
  return uVar4;
}


