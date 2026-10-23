// FUN_0074c240 @ 74c240 size=56

uint __fastcall FUN_0074c240(uint param_1)

{
  int iVar1;
  
  FUN_00798acc();
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_00798b68();
  return ~-(uint)(iVar1 != 0) & param_1;
}


