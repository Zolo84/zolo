// FUN_00451260 @ 451260 size=34

undefined4 __thiscall FUN_00451260(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x81a + param_2 * 4);
  if (iVar1 < 0x14) {
    *(int *)(param_1 + 0x81a + param_2 * 4) = iVar1 + 1;
  }
  return *(undefined4 *)(param_1 + 0x81a + param_2 * 4);
}


