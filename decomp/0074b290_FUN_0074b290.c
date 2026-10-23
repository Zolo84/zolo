// FUN_0074b290 @ 74b290 size=65

undefined4 __thiscall FUN_0074b290(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70)) && (*(uint *)(param_1 + 0x74) != 0))
  {
    return 2;
  }
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x78);
  iVar1 = FUN_00758d30(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    return 7;
  }
  return 0;
}


