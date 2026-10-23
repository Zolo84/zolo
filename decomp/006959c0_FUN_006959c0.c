// FUN_006959c0 @ 6959c0 size=53

void __fastcall FUN_006959c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00468690(param_1 + 0x3c);
  uVar1 = FUN_00527b40();
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  iVar2 = FUN_00527630(1);
  *(int *)(param_1 + 0x50) = iVar2 + *(int *)(param_1 + 0x54);
  return;
}


