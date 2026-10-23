// FUN_006a6480 @ 6a6480 size=78

void __fastcall FUN_006a6480(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = _rand();
  FUN_006ae0d0(iVar1 % 7 + 2,uVar2);
  FUN_006a6230();
  uVar2 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x10,uVar2);
  uVar2 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x24,uVar2);
  return;
}


