// FUN_0058cdb0 @ 58cdb0 size=56

void __fastcall FUN_0058cdb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x14))) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4) + 0x14))();
    return;
  }
  FUN_00405ad0(s_Array_bounds_violation__00857f9c);
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xc) + 0x14))();
  return;
}


