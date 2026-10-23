// FUN_005d5900 @ 5d5900 size=209

undefined4 __thiscall FUN_005d5900(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0061eac0(param_2);
  (**(code **)(**(int **)(param_1 + 0xc6) + 0x38))(8,0x80);
  (**(code **)(**(int **)(param_1 + 0xc6) + 0x10))(0);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar5 = DAT_00bd1bac;
  uVar6 = 0;
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  uVar4 = 0xc0;
  uVar3 = 8;
  uVar2 = FUN_0042b6c9(s_SHIPS_SUNK_BY_0085b484);
  FUN_004133fd(uVar2,uVar3,uVar4,uVar5,uVar1,uVar6);
  (**(code **)(**(int **)(param_1 + 0xc2) + 0x14))(0,0xd0);
  (**(code **)(**(int **)(param_1 + 0xca) + 0x34))(8,0xd8);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xca) + 0x12) + 0x10))(param_2);
  (**(code **)(**(int **)(param_1 + 0xc2) + 0x14))(0,0x228);
  return 0;
}


