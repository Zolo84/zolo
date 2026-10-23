// FUN_0067aa10 @ 67aa10 size=194

void __fastcall FUN_0067aa10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_006a9cd0();
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x16,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x17,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1b,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1c,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x15,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1d,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1e,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x19,uVar1);
  uVar1 = 0;
  iVar2 = _rand();
  FUN_006adfb0(iVar2 % 3 + 1,uVar1);
  return;
}


