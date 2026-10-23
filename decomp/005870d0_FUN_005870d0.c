// FUN_005870d0 @ 5870d0 size=78

void __thiscall FUN_005870d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)*param_1;
  uVar2 = FUN_0044b160(param_2);
  (**(code **)(iVar1 + 0x2c))(uVar2);
  (**(code **)(*(int *)*param_1 + 0x34))(4);
  (**(code **)(*(int *)*param_1 + 0x38))(0);
  FUN_00417300();
  uVar2 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar2);
  return;
}


