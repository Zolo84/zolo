// FUN_00747d60 @ 747d60 size=77

undefined4 __thiscall FUN_00747d60(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0074a090(&param_2);
  if ((iVar1 != *(int *)(param_1 + 0x40)) && (*(uint *)(iVar1 + 0xc) <= param_2)) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10);
}


