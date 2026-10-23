// FUN_004e4530 @ 4e4530 size=195

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004e4530(int param_1,int param_2)

{
  char cVar1;
  float10 fVar2;
  float unaff_retaddr;
  
  if (param_2 == 0) {
    return (float10)_DAT_007e3380;
  }
  cVar1 = (**(code **)(*(int *)(param_2 + 0xe8b2) + 0x24))(*(undefined4 *)(param_1 + 0x12));
  fVar2 = (float10)unaff_retaddr;
  if (cVar1 == '\0') {
    fVar2 = fVar2 * (float10)_DAT_007e34c0;
  }
  if (fVar2 < (float10)_DAT_007e3374) {
    fVar2 = (float10)_DAT_007e3374;
  }
  return fVar2;
}


