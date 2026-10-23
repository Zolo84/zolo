// FUN_00468960 @ 468960 size=64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00468960(int param_1,int param_2)

{
  if (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] == 0) &&
     (_DAT_007e3380 <= *(float *)(*(int *)(param_1 + 0x120) + 0x1e8 + param_2 * 4))) {
    return (float10)*(float *)(*(int *)(param_1 + 0x120) + 0x1e8 + param_2 * 4);
  }
  return (float10)(float)(&DAT_00d77b88)[param_2];
}


