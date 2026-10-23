// FUN_004ef9b0 @ 4ef9b0 size=140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004ef9b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_2 + 0x2b2) != 0) {
    return false;
  }
  if (*(int *)((int)param_2 + 0x2ae) != 0) {
    return false;
  }
  for (iVar1 = *(int *)(param_1 + 0x26); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
  }
  FUN_00527b40();
  iVar1 = (**(code **)(*param_2 + 0xac))();
  iVar2 = __ftol();
  return iVar1 <= iVar2;
}


