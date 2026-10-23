// FUN_004d3fe0 @ 4d3fe0 size=491

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d3fe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  cVar3 = FUN_0044beb0();
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x12e);
    iVar6 = iVar1 / 2;
    iVar5 = iVar6 + 1;
    (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    if (*(int *)(iVar4 + 0x3d4) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      FUN_0044b280(uVar2);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (*(int *)(iVar4 + 0x3d4) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      FUN_0044b280(uVar2);
    }
    iVar4 = __ftol();
    if (iVar1 < iVar4) {
      iVar5 = iVar6 + 4;
    }
    if (10 < *(int *)(param_1 + 0x12e)) {
      iVar5 = iVar5 + 4;
    }
    if ((((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(param_1 + 0x128)) * 0xc -
          (int)*(char *)(param_1 + 0x126)) + (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
        (int)*(char *)(param_1 + 0x125)) + (int)*(char *)(DAT_00893530 + 0x15) < 3) {
      iVar5 = iVar5 + 2;
    }
    if ((((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(param_1 + 0x128)) * 0xc -
          (int)*(char *)(param_1 + 0x126)) + (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
        (int)*(char *)(param_1 + 0x125)) + (int)*(char *)(DAT_00893530 + 0x15) < 7) {
      iVar5 = iVar5 + 1;
    }
    if ((((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(param_1 + 0x128)) * 0xc -
          (int)*(char *)(param_1 + 0x126)) + (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
        (int)*(char *)(param_1 + 0x125)) + (int)*(char *)(DAT_00893530 + 0x15) < 0xf) {
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + iVar5;
  return;
}


