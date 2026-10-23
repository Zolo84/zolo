// FUN_0058cca0 @ 58cca0 size=64

void __fastcall FUN_0058cca0(int param_1)

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
      (**(code **)(*(int *)*puVar1 + 0x1c))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}


