// FUN_0053f550 @ 53f550 size=31

undefined4 __thiscall FUN_0053f550(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = (**(code **)(*param_2 + 0x14))();
  (**(code **)(iVar1 + 0x80))(uVar2);
  return 1;
}


