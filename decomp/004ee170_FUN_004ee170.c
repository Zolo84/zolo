// FUN_004ee170 @ 4ee170 size=59

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ee170(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xe8b2) + 0x24))
                    (*(undefined4 *)(param_1 + 0x12));
  if (cVar1 == '\0') {
    return (float10)_DAT_007e3380;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x1ca) + 0x14) * (float10)_DAT_007e3358 +
         (float10)*(int *)(param_1 + 0x1f2);
}


