// FUN_004b4020 @ 4b4020 size=42

undefined4 __thiscall FUN_004b4020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_004b40d0(param_1[1]);
  (**(code **)(iVar1 + 0x2c))(param_2,param_1,param_3);
  return param_2;
}


