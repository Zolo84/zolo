// FUN_00592810 @ 592810 size=136

undefined4 __thiscall FUN_00592810(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x16) {
    if (*(int *)(param_2[1] + 0xe) == 0x104) {
      iVar1 = 0x1e;
      do {
        FUN_00435030();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 3;
    }
    if (*(int *)(param_2[1] + 0xe) == 0x105) {
      iVar1 = 0x1e;
      do {
        FUN_004351b0();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 3;
    }
  }
  uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x118) + 0x12) + 4))(param_2);
  return uVar2;
}


