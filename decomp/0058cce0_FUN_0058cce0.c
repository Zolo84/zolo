// FUN_0058cce0 @ 58cce0 size=80

void __thiscall FUN_0058cce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if ((iVar2 < 0) || (*(int *)(param_1 + 0x14) <= iVar2)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
        puVar1 = *(undefined4 **)(param_1 + 0xc);
      }
      else {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      }
      (**(code **)(*(int *)*puVar1 + 0x38))(param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}


