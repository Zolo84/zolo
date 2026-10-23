// FUN_005c67f0 @ 5c67f0 size=202

undefined4 __thiscall FUN_005c67f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0061eac0(param_2);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  FUN_00584270(0,0,0);
  FUN_00584270(0x74,0x65,0x5e);
  (**(code **)(**(int **)(param_1 + 0x8a) + 0x18))(0,0x60);
  (**(code **)(**(int **)(param_1 + 0x8a) + 0x10))(param_2);
  uVar6 = 0;
  uVar4 = 0x68;
  uVar3 = 8;
  uVar5 = DAT_00bd1bac;
  uVar2 = FUN_0042b6c9(s_MIL_AIRLIST_00859d3c);
  FUN_004133fd(uVar2,uVar3,uVar4,uVar5,uVar1,uVar6);
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x34))(8,0x80);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xbc) + 0x12) + 0x10))(param_2);
  return 0;
}


