// FUN_00577d20 @ 577d20 size=34

void __fastcall FUN_00577d20(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  while (iVar1 != 0) {
    FUN_00565c30(iVar1);
    iVar1 = (**(code **)(*param_1 + 0x10))();
  }
  return;
}


