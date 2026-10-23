// FUN_00517740 @ 517740 size=174

uint __thiscall FUN_00517740(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((*(int *)(param_2 + 0x254) != 8) && (uVar2 = 0, *(int *)(param_2 + 0x254) != 9)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x2aa) + 8))();
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_004e7940(*(undefined4 *)(param_1 + 0xc));
      if (((char)uVar2 != '\0') &&
         ((*(int *)(param_2 + 0x46a) != 0 || (uVar2 = 0, *(int *)(param_2 + 0x182) != 0)))) {
        uVar3 = *(uint *)(param_2 + 0x3d8);
        if (uVar3 == 0) {
          return 1;
        }
        if (uVar3 == *(uint *)(param_1 + 0x248)) {
LAB_005177e7:
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
        cVar1 = FUN_0044b280(*(undefined4 *)(uVar3 + 6));
        if (cVar1 == '\0') {
          uVar2 = FUN_0044a690(*(undefined4 *)(*(int *)(param_2 + 0x3d8) + 6));
          if (((char)uVar2 != '\0') &&
             (uVar2 = *(uint *)(param_1 + 0xc), uVar3 = uVar2, *(uint *)(param_2 + 0x3dc) == uVar2))
          goto LAB_005177e7;
        }
        else {
          uVar2 = 0;
          uVar3 = *(uint *)(param_2 + 0x182);
          if (*(uint *)(param_2 + 0x182) != 0) goto LAB_005177e7;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}


