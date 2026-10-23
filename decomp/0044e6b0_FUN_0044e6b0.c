// FUN_0044e6b0 @ 44e6b0 size=74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0044e6b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0xe892);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return (float10)_DAT_007e3380;
    }
    puVar1 = (undefined4 *)puVar2[2];
    iVar3 = FUN_004e9370(*puVar2);
    puVar2 = puVar1;
  } while (*(float *)(*(int *)(iVar3 + 0x1ee) + 0x14) <= _DAT_007e3380);
  return (float10)*(float *)(*(int *)(iVar3 + 0x1ee) + 0x14);
}


