// FUN_0069af60 @ 69af60 size=144

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069af60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x40) = 4;
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x48) + 0x28) + 4))();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1 / 3;
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x48) + 0x3a) + 4))();
  iVar1 = *(int *)(param_1 + 0x40) + iVar1;
  *(int *)(param_1 + 0x40) = iVar1;
  if (*(float *)(*(int *)(param_1 + 10) + 0x39d0) * _DAT_007e6800 < (float)iVar1) {
    uVar2 = __ftol();
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  if (*(int *)(param_1 + 0x40) < 4) {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if (2 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  return;
}


