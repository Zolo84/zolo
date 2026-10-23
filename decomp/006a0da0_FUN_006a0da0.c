// FUN_006a0da0 @ 6a0da0 size=53

void __fastcall FUN_006a0da0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x2c;
  uVar1 = (**(code **)(*param_1 + 0xe0))(piVar2);
  FUN_006a9ef0(uVar1,piVar2);
  piVar2 = param_1 + 0x31;
  uVar1 = (**(code **)(*param_1 + 0xe0))(piVar2);
  FUN_006a9ef0(uVar1,piVar2);
  return;
}


