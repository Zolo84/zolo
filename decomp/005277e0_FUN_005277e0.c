// FUN_005277e0 @ 5277e0 size=91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005277e0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_8;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 != 0) {
    iVar1 = param_1[1];
    fStack_8 = 0.0;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      fVar2 = (float10)FUN_0051a210();
      fStack_8 = (float)(fVar2 + (float10)fStack_8);
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    return (float10)fStack_8 / (float10)iVar1;
  }
  return (float10)_DAT_007e3380;
}


