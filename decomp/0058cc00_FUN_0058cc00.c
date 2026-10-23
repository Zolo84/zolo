// FUN_0058cc00 @ 58cc00 size=69

void __thiscall FUN_0058cc00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x14))) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 4))(param_2);
    return;
  }
  FUN_00405ad0(s_Array_bounds_violation__00857f9c);
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xc) + 4))(param_2);
  return;
}


