// FUN_00735430 @ 735430 size=51

undefined4 __thiscall FUN_00735430(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16) != 0) {
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x16)];
  }
  if ((param_2 != 0) && (iVar1 = FUN_0044d810(), iVar1 == *(int *)(param_1 + 0x12))) {
    return 1;
  }
  return 0;
}


