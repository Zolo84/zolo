// FUN_0058cd30 @ 58cd30 size=60

void __thiscall FUN_0058cd30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x14) <= iVar1)) {
    FUN_00405ad0(s_Array_bounds_violation__00857f9c);
    puVar2 = *(undefined4 **)(param_1 + 0xc);
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4);
  }
  (**(code **)(*(int *)*puVar2 + 0x3c))(param_2,param_3);
  return;
}


