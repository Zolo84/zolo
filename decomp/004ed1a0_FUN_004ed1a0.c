// FUN_004ed1a0 @ 4ed1a0 size=27

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ed1a0(int param_1)

{
  if (*(int *)(param_1 + 0x3d4) == 0) {
    return (float10)_DAT_007e3380;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x1d6) + 0x14);
}


