// FUN_005ea750 @ 5ea750 size=293

undefined4 __thiscall FUN_005ea750(int param_1,undefined4 param_2)

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
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x14))(0x80,0x60);
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x14))(0x98,0x60);
  (**(code **)(**(int **)(param_1 + 200) + 0x14))(0xb0,0x60);
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x14))(200,0x60);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x14))(0xe0,0x60);
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x34))(8,0x80);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xd4) + 0x12) + 0x10))(param_2);
  uVar6 = 0;
  uVar4 = 0x68;
  uVar3 = 0x10;
  uVar5 = DAT_00bd1bac;
  uVar2 = FUN_0042b6c9(s_COMBATLIST_0085cdb8);
  FUN_004133fd(uVar2,uVar3,uVar4,uVar5,uVar1,uVar6);
  return 0;
}


