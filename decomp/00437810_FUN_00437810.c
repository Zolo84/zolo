// FUN_00437810 @ 437810 size=193

undefined4 __thiscall FUN_00437810(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00437580(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x34) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(param_2);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x12) + 0x10))(param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x10))(param_2);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_004133fd(*(int *)(param_1 + 0x14) + 0x34,*(int *)(param_1 + 0x2c) + 4,
                 *(int *)(param_1 + 0x30) + 2,*(undefined4 *)(param_1 + 0x10),0,0);
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  uVar2 = FUN_00584270(0xff,0,0);
  FUN_004133fd(*(undefined4 *)(param_1 + 0x36),*(int *)(param_1 + 0x2c) + 4,
               *(int *)(param_1 + 0x30) + 2,uVar1,uVar2,uVar3);
  return 0;
}


