// FUN_00451290 @ 451290 size=33

undefined4 __thiscall FUN_00451290(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x81a + param_2 * 4);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x81a + param_2 * 4) = iVar1 + -1;
  }
  return *(undefined4 *)(param_1 + 0x81a + param_2 * 4);
}


