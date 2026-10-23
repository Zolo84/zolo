// FUN_004bebe0 @ 4bebe0 size=157

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004bebe0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uStack_8;
  
  (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
  fVar1 = (float10)FUN_00527840();
  (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
  fVar2 = (float10)FUN_005277e0();
  uStack_8 = (float)(fVar2 * (float10)(float)fVar1);
  (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
  fVar1 = (float10)FUN_00527840();
  (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
  fVar2 = (float10)FUN_005277e0();
  fVar2 = fVar2 * (float10)(float)fVar1;
  if (uStack_8 < _DAT_007e5440) {
    uStack_8 = 0.001;
  }
  if (fVar2 < (float10)_DAT_007e5440) {
    fVar2 = (float10)_DAT_007e5440;
  }
  return (float10)uStack_8 / (fVar2 + (float10)uStack_8);
}


