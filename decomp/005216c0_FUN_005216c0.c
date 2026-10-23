// FUN_005216c0 @ 5216c0 size=730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_005216c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_4 [4];
  
  iVar3 = param_2;
  iVar6 = param_1[0x92];
  iVar1 = *(int *)(iVar6 + 6);
  iVar2 = *(int *)((int)param_1 + 0x26);
  if (DAT_00dc195e == '\0') {
    do {
      if (iVar2 == 0) goto LAB_00521726;
      puVar5 = (undefined4 *)FUN_00499730(local_4,0);
    } while (*(int *)(*(int *)*puVar5 + 0x134) != 9);
  }
  else {
    do {
      if (iVar2 == 0) goto LAB_00521726;
      puVar5 = (undefined4 *)FUN_00499730(&param_2,0);
    } while (*(float *)(*(int *)*puVar5 + 0x110) != _DAT_007e3380);
  }
  if (((param_1[3] != 0) && (*(int *)(iVar3 + 0x254) != 8)) && (*(int *)(iVar3 + 0x254) != 9)) {
    return 0;
  }
LAB_00521726:
  param_2 = *(int *)((int)param_1 + 0x26);
  while (param_2 != 0) {
    puVar5 = (undefined4 *)FUN_00499730(local_4,0);
    if (*(char *)(*(int *)*puVar5 + 0x155) != '\0') {
      return 0;
    }
  }
  cVar4 = FUN_00522a60(iVar3);
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x2c))(), cVar4 == '\0')) {
    if (((((char)param_1[0x5f] == '\0') ||
         (*(char *)(*(int *)(*(int *)(iVar3 + 0x3d8) + 0x12da) + 0x31 +
                   *(int *)(param_1[0x92] + 6) * 0x2c) == '\0')) &&
        ((cVar4 = (**(code **)(*param_1 + 0x30))(), cVar4 == '\0' ||
         ((*(int *)(iVar3 + 0x3d8) == 0 ||
          (cVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6)), cVar4 == '\0'))))))
       && (*(int *)(iVar3 + 0x3d8) != 0)) {
      cVar4 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
      if (cVar4 == '\0') {
        if ((param_1[3] < 1) ||
           (iVar6 = FUN_004e9370(param_1[3]), *(int *)(iVar6 + 0x3d8) != *(int *)(iVar3 + 0x3d8))) {
          return 0;
        }
      }
      else {
        cVar4 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
        if ((((cVar4 == '\0') && (*(int *)(*(int *)(iVar3 + 0x3d8) + 6) == 0x157)) &&
            (*(int *)(iVar3 + 0x3d4) != param_1[0x92])) &&
           (cVar4 = FUN_0044a690(*(undefined4 *)(*(int *)(iVar3 + 0x3d4) + 6)), cVar4 == '\0')) {
          return 0;
        }
      }
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar4 != '\0') && (cVar4 = FUN_004ed1c0(param_1[0x92]), cVar4 != '\0')) {
      return 0;
    }
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if (((cVar4 != '\0') && (*(int *)(iVar3 + 0x46a) != 0)) && (*(int *)(iVar3 + 0x3d4) != 0)) {
      iVar2 = *(int *)(iVar3 + 0x3d8);
      cVar4 = FUN_005861a0(*(undefined4 *)(iVar2 + 6));
      iVar1 = *(int *)(*(int *)(iVar3 + 0x3d8) + 0x12da) + iVar1 * 0x2c;
      if ((*(char *)(iVar1 + 0x32) == '\0') &&
         (*(char *)(iVar1 + 0x31) == '\0' && (cVar4 == '\0' && iVar2 != iVar6))) {
        return 0;
      }
    }
  }
  return 1;
}


