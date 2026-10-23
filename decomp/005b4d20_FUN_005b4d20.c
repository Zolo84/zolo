// FUN_005b4d20 @ 5b4d20 size=26

undefined4 __thiscall FUN_005b4d20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0xb + 0xb;
  return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(param_1 + iVar1 * 4) != '\0');
}


