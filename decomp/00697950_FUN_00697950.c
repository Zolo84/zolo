// FUN_00697950 @ 697950 size=39

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00697950(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0xc))();
  if ((fVar1 <= (float10)_DAT_007e68cc) && (param_1[6] == 0)) {
    return 1;
  }
  return 0;
}


