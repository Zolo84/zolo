// FUN_00517bf0 @ 517bf0 size=18

undefined4 __fastcall FUN_00517bf0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2aa) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00517bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x2aa) + 4))();
    return uVar1;
  }
  return 0;
}


