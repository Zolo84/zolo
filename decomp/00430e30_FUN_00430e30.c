// FUN_00430e30 @ 430e30 size=944

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00430e30(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x2c))();
  if ((cVar2 != '\0') && ((*(int *)(param_2 + 0x254) == 8) != (*(int *)(param_3 + 0x254) == 8))) {
    (**(code **)(*param_1 + 0x78))(param_3);
    iVar4 = __ftol();
    return iVar4;
  }
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if ((cVar2 != '\0') && ((&DAT_00dc0fd4)[*(int *)(param_1[0x92] + 6)] == 0)) {
    iVar4 = *(int *)(param_3 + 0x254);
    if (iVar4 == 8) {
      return 1;
    }
    if ((((*(int *)(param_2 + 0x254) == 8) && (iVar4 != 8)) && (iVar4 != 9)) &&
       ((*(int *)(param_3 + 0x3d8) != 0 &&
        (cVar2 = FUN_0044a690(*(int *)(param_1[0x92] + 6)), cVar2 != '\0')))) {
      return 1;
    }
  }
  FUN_0044a9c0(*(undefined4 *)(param_2 + 0x12),*(undefined4 *)(param_3 + 0x12));
  if (((*(int *)(param_3 + 0x254) != 8) && (*(int *)(param_3 + 0x254) != 9)) &&
     (cVar2 = (**(code **)(*param_1 + 0x28))(), cVar2 != '\0')) {
    FUN_004ecea0();
  }
  uVar1 = *(undefined4 *)(param_1[0x92] + 6);
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    if ((*(int *)(param_2 + 0x254) == 8) || (*(int *)(param_2 + 0x254) == 9)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if ((*(int *)(param_3 + 0x254) == 8) || (*(int *)(param_3 + 0x254) == 9)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (cVar2 != cVar3) {
      if (*(int *)(param_2 + 0x46a) == 0) {
        if (*(int *)(param_3 + 0x46a) != 0) {
          FUN_0044a690(uVar1);
        }
      }
      else {
        FUN_0044a690(uVar1);
      }
      if ((*(int *)(param_3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar1), cVar2 != '\0')) {
        (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      }
      goto LAB_00431059;
    }
  }
  (**(code **)(*param_1 + 0x78))(param_3);
LAB_00431059:
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if ((((cVar2 != '\0') && (*(int *)(param_2 + 0x254) != 8)) && (*(int *)(param_2 + 0x254) != 9)) &&
     (((*(int *)(param_3 + 0x254) != 8 && (*(int *)(param_3 + 0x254) != 9)) &&
      (*(int *)(param_3 + 0x3d8) != 0)))) {
    FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
  }
  if (*(char *)((int)param_1 + 0x17b) == '\0') {
    if (param_1[0x99] == 6) {
      if (*(int *)(param_3 + 0x3d8) != 0) {
        FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
      }
    }
    else if ((param_1[0x99] == 5) && (*(int *)(param_3 + 0x3d8) != 0)) {
      FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
    }
  }
  cVar2 = FUN_0051a490();
  if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x17b) == '\0')) {
    (**(code **)(*param_1 + 0x2c))();
  }
  iVar4 = __ftol();
  if (iVar4 < 1) {
    return 1;
  }
  return iVar4;
}


