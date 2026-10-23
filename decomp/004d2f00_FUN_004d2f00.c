// FUN_004d2f00 @ 4d2f00 size=91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004d2f00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x132) * 5;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
    return ((float10)iVar1 / (float10)iVar2) * (float10)_DAT_00dc1600;
  }
  return (float10)iVar1 * (float10)_DAT_00dc1600;
}


