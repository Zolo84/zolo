// FUN_006a2a50 @ 6a2a50 size=123

void __fastcall FUN_006a2a50(int *param_1)

{
  undefined4 uVar1;
  
  FUN_006a6230();
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x16,uVar1);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x15,uVar1);
  (**(code **)(*param_1 + 0x21c))();
  (**(code **)(*param_1 + 0x214))();
  (**(code **)(*param_1 + 0x240))();
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  uVar1 = (**(code **)(*param_1 + 0x220))(0);
  *(undefined4 *)((int)param_1 + 0x9a) = uVar1;
  FUN_006adfb0(1,0);
  return;
}


