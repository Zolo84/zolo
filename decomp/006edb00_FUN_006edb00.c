// FUN_006edb00 @ 6edb00 size=332

undefined4 __fastcall FUN_006edb00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int **)(param_1 + 0x50) == (int *)0x0) {
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
      iVar2 = **(int **)(param_1 + 0x54);
      iVar1 = *(int *)(param_1 + 0x12);
      goto LAB_006edb35;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x14))
              (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12));
    iVar1 = *(int *)(param_1 + 0x12) + 0x10;
    iVar2 = **(int **)(param_1 + 0x54);
LAB_006edb35:
    (**(code **)(iVar2 + 0x14))(*(undefined4 *)(param_1 + 0xe),iVar1);
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      uVar5 = 0xf8;
      uVar4 = 0xe8;
      uVar3 = 0xd0;
      goto LAB_006edb75;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0xff;
  }
  uVar4 = 0xff;
  uVar3 = 0xff;
LAB_006edb75:
  uVar5 = FUN_00584270(uVar3,uVar4,uVar5);
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar2 = FUN_00415bd0();
    iVar2 = iVar2 + 4;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    iStack_c = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
    iStack_4 = iStack_c + 0x300;
    iStack_10 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
    iStack_8 = iStack_10 + 0x400;
    if (*(char *)(param_1 + 0x58) != '\0') {
      iStack_8 = iStack_10 + 0xf0;
    }
    FUN_00413483(iVar1,*(int *)(param_1 + 0xe) + iVar2,*(int *)(param_1 + 0x12) + 2,DAT_00bd1bac,
                 uVar5,&iStack_10);
    return 0;
  }
  FUN_004132d0(iVar1,*(int *)(param_1 + 0xe) + 100,*(int *)(param_1 + 0x12) + 2,DAT_00bd1bac,0,0);
  return 0;
}


