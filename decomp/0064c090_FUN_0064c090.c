// FUN_0064c090 @ 64c090 size=421

void __thiscall FUN_0064c090(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x13d40) == 0) {
    *(undefined1 *)(param_1 + 0x13d14) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x13d14) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4) + 0x4c))();
  *(undefined4 *)(param_1 + 0x21e66) = *(undefined4 *)(param_1 + 0x21e62);
  if (param_2 == 0) {
    if (*(int *)(DAT_00ab27b4 + 0x254 + DAT_008477ac * 0x4b2) != 9) {
      FUN_006520c0(&DAT_0083bf1c,&DAT_0083bf1c);
    }
  }
  else if (param_2 == 0x12) {
    (**(code **)(*(int *)(param_1 + 0x21eb0) + 0x14))();
  }
  else if ((param_2 == 10) && (*(int *)(DAT_00d0ca90 + 0x21e0c) != 0)) {
    FUN_0060a680();
  }
  iVar1 = **(int **)(param_1 + 0x13d9c);
  iVar3 = FUN_00415be0();
  iVar3 = FUN_00415bd0(-10 - iVar3);
  (**(code **)(iVar1 + 0x18))(-10 - iVar3);
  DAT_00ab0f7c = param_1;
  FUN_00648c30(0);
  *(int *)(param_1 + 0x21e62) = param_2;
  FUN_0064fd00();
  FUN_0064f5a0();
  if ((((param_2 != 3) && (param_2 != 2)) && (param_2 != 5)) &&
     (((param_2 != 6 && (param_2 != 7)) && (param_2 != 8)))) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 8))();
    if (cVar2 == '\0') {
      FUN_0052ac00();
    }
  }
  iVar3 = (**(code **)(**(int **)(DAT_00d13360 + 0x70) + 0x28))(&stack0xfffffff0);
  iVar4 = FUN_00415be0();
  iVar1 = **(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4);
  uVar5 = FUN_006d3420(*(int *)(iVar3 + 4) + iVar4);
  (**(code **)(iVar1 + 0x18))(uVar5);
  (**(code **)(**(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4) + 0x48))();
  return;
}


