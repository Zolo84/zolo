// FUN_004ed260 @ 4ed260 size=169

undefined4 __thiscall FUN_004ed260(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x3d8) != 0) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x290))) {
    iVar6 = 0;
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x298) + iVar6);
      if (piVar3[1] != 4) {
        iVar1 = *piVar3;
        iVar4 = DAT_00ab27b4 + iVar1 * 0x4b2;
        iVar1 = *(int *)(DAT_00ab27b4 + 0x254 + iVar1 * 0x4b2);
        if ((((iVar1 != 8) && (iVar1 != 9)) && (*(int *)(iVar4 + 0x3d8) != 0)) &&
           (cVar2 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x3d8) + 6)), cVar2 != '\0')) {
          if (param_2 == '\0') {
            return 1;
          }
          iVar4 = (**(code **)(**(int **)(iVar4 + 0x1c2) + 4))();
          if (0 < iVar4) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)(param_1 + 0x290));
  }
  return 0;
}


