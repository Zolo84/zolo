// FUN_0073dd00 @ 73dd00 size=55

undefined4 __thiscall FUN_0073dd00(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a) != 0) {
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x1a)];
  }
  if ((param_2 != 0) &&
     (iVar1 = FUN_0044dc80(*(undefined4 *)(param_1 + 0x16)), *(int *)(param_1 + 0x12) <= iVar1)) {
    return 1;
  }
  return 0;
}


