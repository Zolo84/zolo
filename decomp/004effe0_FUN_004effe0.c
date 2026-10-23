// FUN_004effe0 @ 4effe0 size=65

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004effe0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xac))();
  if (iVar1 == 0) {
    return (float10)_DAT_007e3380;
  }
  FUN_0051c480();
  iVar1 = FUN_00528300();
  return (float10)iVar1 * (float10)_DAT_007e543c;
}


