// FUN_00512b20 @ 512b20 size=5006

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00512b20(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(char *)(param_2 + 0x37a0 + param_1[0x92]) == '\0') {
    return 0;
  }
  cVar2 = FUN_00523990();
  if (((cVar2 != '\0') && (iVar3 = param_1[0x99], iVar3 != 0)) && ((iVar3 < 9 || (0x15 < iVar3)))) {
    return 0;
  }
  iVar3 = DAT_00ab27b4 + param_3 * 0x4b2;
  uVar11 = *(undefined4 *)(param_1[0x92] + 6);
  if ((param_3 != 0) && (*(char *)(iVar3 + 0x180) != '\0')) {
    return 0;
  }
  switch(param_2) {
  default:
    goto switchD_00512baf_caseD_0;
  case 1:
    if ((param_3 != 0) && (param_3 == param_1[3])) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 != '\0') {
      if (param_3 == 0) {
        return 0;
      }
      cVar2 = FUN_005216c0(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar11 = 1;
      iVar4 = iVar3;
      (**(code **)(*param_1 + 0x14))(iVar3,1);
      cVar2 = FUN_00518d60(iVar4,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_00525660();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_00525720();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      return 1;
    }
    iVar4 = (**(code **)(*param_1 + 0x10))();
    if (*(int *)(iVar4 + 0x2ae) == 0) {
      return 1;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x3d8) != 0) {
      cVar2 = FUN_0044a690(*(undefined4 *)(param_1[0x92] + 6));
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 0x3dc);
      iVar4 = (**(code **)(*param_1 + 0x10))();
      if (iVar3 == *(int *)(*(int *)(iVar4 + 0x2ae) + 0xc)) {
        return 1;
      }
      return 0;
    }
    return 0;
  case 2:
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_005239c0();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 != '\0') {
      if (param_3 != 0) {
        iVar4 = FUN_004ece80();
        if (iVar4 == 0) {
          return 0;
        }
        if (((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044a690(uVar11), cVar2 == '\0')) &&
           (cVar2 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6)), cVar2 == '\0')) {
          return 0;
        }
      }
      iVar3 = (**(code **)(*param_1 + 0x18))();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x294) + 4))();
      if (iVar3 == 0) {
        return 1;
      }
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 1;
    }
    if (param_3 != 0) {
      iVar4 = FUN_004ece90();
      if (iVar4 == 0) {
        return 0;
      }
      if (((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044a690(uVar11), cVar2 == '\0')) &&
         (cVar2 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6)), cVar2 == '\0')) {
        return 0;
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x14))();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x2aa) + 4))();
    if (iVar4 == 0) {
      return 1;
    }
    if (param_3 == 0) {
      return 1;
    }
    uVar11 = 0x1c;
    (**(code **)(*param_1 + 0x14))(iVar3,0x1c);
    cVar2 = FUN_00518d60(iVar3,uVar11);
    goto LAB_00513e9c;
  case 3:
    if ((param_3 != 0) && (param_3 == param_1[3])) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if ((cVar2 == '\0') && (cVar2 = FUN_005239c0(), cVar2 == '\0')) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x17b) != '\0') {
      return 0;
    }
    iVar4 = (**(code **)(param_1[0x47] + 4))();
    if (iVar4 != 0) {
      return 0;
    }
    cVar2 = FUN_00525720();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_1[3] == 0) {
      return 0;
    }
    cVar2 = FUN_00523fc0();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x254) == 8) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x254) == 9) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 1;
    }
    iVar4 = FUN_004ece80();
    if (iVar4 == 0) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    goto LAB_00513e78;
  case 4:
    if (param_3 != 0) {
      if (param_3 == param_1[3]) {
        return 0;
      }
      iVar4 = param_3;
      FUN_0051b230(param_3);
      cVar2 = FUN_004e7940(iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x17b) != '\0') {
      return 0;
    }
    iVar4 = (**(code **)(param_1[0x47] + 4))();
    if (iVar4 != 0) {
      return 0;
    }
    cVar2 = FUN_00525660();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_00525720();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_1[3] == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    cVar2 = FUN_0044b280(uVar11);
    goto LAB_00513e9c;
  case 5:
  case 8:
    if (param_3 != 0) {
      if (param_3 == param_1[3]) {
        return 0;
      }
      if (((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044a690(uVar11), cVar2 == '\0')) &&
         (cVar2 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6)), cVar2 == '\0')) {
        return 0;
      }
      FUN_0051b230(param_3);
      cVar2 = FUN_004e7970(param_3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    goto LAB_00512de8;
  case 6:
    if ((param_3 != 0) && (param_3 != param_1[3])) {
      return 0;
    }
LAB_00512de8:
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x17b) != '\0') {
      return 0;
    }
    iVar3 = (**(code **)(param_1[0x47] + 4))();
    if (iVar3 != 0) {
      return 0;
    }
    cVar2 = FUN_00525660();
    bVar9 = cVar2 == '\0';
LAB_00512e25:
    if (!bVar9) {
      return 0;
    }
    cVar2 = FUN_00525720();
    if (cVar2 != '\0') {
      return 0;
    }
    bVar9 = param_1[3] == 0;
    break;
  case 7:
    if ((param_3 != 0) && (param_3 != param_1[3])) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x17b) != '\0') {
      return 0;
    }
    iVar3 = (**(code **)(param_1[0x47] + 4))();
    bVar9 = iVar3 == 0;
    goto LAB_00512e25;
  case 9:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      iVar4 = iVar3;
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_008774a4 < *(float *)(*piVar7 + 0x118)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (!bVar9) {
      return 0;
    }
    goto LAB_00513e47;
  case 10:
  case 0xb:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x254) == 8) || (*(int *)(iVar3 + 0x254) == 9)) {
        return 0;
      }
      if (((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) &&
         (cVar2 = FUN_0044a690(uVar11), cVar2 == '\0')) {
        return 0;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 == '\0') {
      bVar9 = false;
      piVar7 = *(int **)((int)param_1 + 0x26);
      if (*(int **)((int)param_1 + 0x26) != (int *)0x0) {
        do {
          piVar1 = piVar7 + 2;
          if ((_DAT_007e3380 < *(float *)(*piVar7 + 0x2e0)) ||
             (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e4))) {
            bVar9 = true;
          }
          piVar7 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        if (bVar9) {
          return 1;
        }
      }
      return 0;
    }
    return 0;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
      if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
        return 0;
      }
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2dc)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x10:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    if (((param_3 != 0) && (*(int *)(iVar3 + 0x254) != 8)) && (*(int *)(iVar3 + 0x254) != 9)) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 == '\0') {
      bVar9 = false;
      piVar7 = *(int **)((int)param_1 + 0x26);
      if (*(int **)((int)param_1 + 0x26) != (int *)0x0) {
        do {
          piVar1 = piVar7 + 2;
          if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e8)) {
            bVar9 = true;
          }
          piVar7 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        if (bVar9) {
          return 1;
        }
      }
      return 0;
    }
    return 0;
  case 0x11:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x254) == 8) || (*(int *)(iVar3 + 0x254) == 9)) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x46a) == 0) {
        return 0;
      }
      if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
        return 0;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e8)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x12:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (((param_3 != 0) && (*(int *)(iVar3 + 0x254) != 8)) && (*(int *)(iVar3 + 0x254) != 9)) {
      return 0;
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e8)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x13:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
      if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044a690(uVar11), cVar2 == '\0')) {
        return 0;
      }
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2ec)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (!bVar9) {
      return 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x18))();
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x294) + 4))();
    if (iVar3 < 1) {
      return 1;
    }
    return 0;
  case 0x14:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    if ((param_3 != 0) && ((*(int *)(iVar3 + 0x254) == 8 || (*(int *)(iVar3 + 0x254) == 9)))) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x18))();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x294) + 4))();
    if (iVar4 < 1) {
      return 0;
    }
    (**(code **)(*param_1 + 0x18))();
    cVar2 = FUN_004ef790();
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_00523990();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    iVar4 = iVar3;
    (**(code **)(*param_1 + 0x18))(iVar3);
    cVar2 = FUN_004f0300(iVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(int *)(iVar3 + 0x254) == 8) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x254) == 9) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    cVar2 = FUN_0044b280(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_0044a690(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
    return 0;
  case 0x15:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x254) == 8) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x254) == 9) {
      return 0;
    }
    if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
      return 0;
    }
    (**(code **)(*param_1 + 0x18))(iVar3);
    cVar2 = FUN_004f0300(iVar3);
    goto LAB_00513e9c;
  case 0x16:
    cVar2 = (**(code **)(*param_1 + 0x7c))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      iVar4 = iVar3;
      (**(code **)(*param_1 + 0x18))(iVar3);
      cVar2 = FUN_004f0300(iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0051a490();
    if (cVar2 != '\0') {
      return 0;
    }
    if ((param_3 != 0) &&
       (iVar4 = (**(code **)(*param_1 + 0x18))(), *(int *)(iVar4 + 0x212) != param_3)) {
      iVar8 = (**(code **)(*param_1 + 0x18))();
      iVar4 = param_3;
      FUN_004e9370(*(undefined4 *)(iVar8 + 0x212),param_3);
      cVar2 = FUN_004e7940(iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_008774ec < *(float *)(*piVar7 + 0x118)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (!bVar9) {
      return 0;
    }
LAB_00513e47:
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x254) == 8) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x254) == 9) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    cVar2 = FUN_0044b280(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
LAB_00513e78:
    cVar2 = FUN_0044a690(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6);
LAB_00513e96:
    cVar2 = FUN_005861a0(uVar11);
    goto LAB_00513e9c;
  case 0x17:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) {
        return 0;
      }
      uVar11 = 0x17;
      (**(code **)(*param_1 + 0x14))(iVar3,0x17);
      cVar2 = FUN_00518d60(iVar3,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0044beb0();
    if (cVar2 == '\0') {
      return 0;
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2cc)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x18:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) {
        return 0;
      }
      uVar11 = 0x18;
      (**(code **)(*param_1 + 0x14))(iVar3,0x18);
      cVar2 = FUN_00518d60(iVar3,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e8)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x19:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) {
        return 0;
      }
      uVar11 = 0x19;
      (**(code **)(*param_1 + 0x14))(iVar3,0x19);
      cVar2 = FUN_00518d60(iVar3,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e4)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x1a:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      uVar10 = 0x1a;
      iVar4 = iVar3;
      (**(code **)(*param_1 + 0x14))(iVar3,0x1a);
      cVar2 = FUN_00518d60(iVar4,uVar10);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2f0)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (!bVar9) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    cVar2 = FUN_0044b280(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_0044a690(uVar11);
    goto LAB_00513e9c;
  case 0x1b:
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x182) < 1) {
        return 0;
      }
      if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
        return 0;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x14))();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x2aa) + 4))();
    if (iVar4 < 1) {
      return 0;
    }
    (**(code **)(*param_1 + 0x14))();
    cVar2 = FUN_00527530();
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    uVar11 = 0x1b;
    iVar4 = iVar3;
    (**(code **)(*param_1 + 0x14))(iVar3,0x1b);
    cVar2 = FUN_00518d60(iVar4,uVar11);
    if (cVar2 == '\0') {
      return 0;
    }
    (**(code **)(*param_1 + 0x14))();
    iVar4 = FUN_00518b70();
    if (iVar4 == 0) {
      return 1;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6);
    (**(code **)(*param_1 + 0x14))();
    iVar3 = FUN_00518b70();
    FUN_004e9370(*(undefined4 *)(iVar3 + 0xc));
    cVar2 = FUN_0044b280(uVar11);
    goto LAB_00513e9c;
  case 0x1c:
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x14))();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x2aa) + 4))();
    if (iVar4 < 1) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    cVar2 = FUN_0044b280(uVar11);
    if (cVar2 == '\x01') {
      return 0;
    }
    cVar2 = FUN_005216c0(iVar3);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar11 = 0x1c;
    (**(code **)(*param_1 + 0x14))(iVar3,0x1c);
    cVar2 = FUN_00518d60(iVar3,uVar11);
LAB_00513e9c:
    bVar9 = cVar2 == '\0';
    break;
  case 0x1d:
    if (((param_3 != 0) && (*(int *)(iVar3 + 0x254) != 8)) && (*(int *)(iVar3 + 0x254) != 9)) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      uVar11 = 0x1d;
      (**(code **)(*param_1 + 0x14))(iVar3,0x1d);
      cVar2 = FUN_00518d60(iVar3,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) == (int *)0x0) {
      return 0;
    }
    do {
      piVar1 = piVar7 + 2;
      if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e4)) {
        bVar9 = true;
      }
      piVar7 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    bVar9 = !bVar9;
    break;
  case 0x1e:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
    }
    (**(code **)(*param_1 + 0x14))();
    cVar2 = FUN_00516d10();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
      return 0;
    }
    uVar11 = 0x1e;
    iVar4 = iVar3;
    (**(code **)(*param_1 + 0x14))(iVar3,0x1e);
    cVar2 = FUN_00518d60(iVar4,uVar11);
    if (cVar2 == '\0') {
      return 0;
    }
    bVar9 = *(int *)(iVar3 + 0x46a) == 0;
    break;
  case 0x1f:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(iVar3 + 0x254) == 8) {
        return 0;
      }
      if (*(int *)(iVar3 + 0x254) == 9) {
        return 0;
      }
    }
    (**(code **)(*param_1 + 0x14))();
    cVar2 = FUN_00516d10();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      if ((*(int *)(iVar3 + 0x3d8) != 0) && (cVar2 = FUN_0044b280(uVar11), cVar2 == '\0')) {
        return 0;
      }
      uVar11 = 0x1f;
      iVar4 = iVar3;
      (**(code **)(*param_1 + 0x14))(iVar3,0x1f);
      cVar2 = FUN_00518d60(iVar4,uVar11);
      if (cVar2 == '\0') {
        return 0;
      }
      if (*(float *)(*(int *)(iVar3 + 0x1de) + 0x10) != _DAT_007e3380) {
        return 1;
      }
      return 0;
    }
    return 1;
  case 0x20:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    uVar10 = 0x20;
    iVar4 = iVar3;
    (**(code **)(*param_1 + 0x14))(iVar3,0x20);
    cVar2 = FUN_00518d60(iVar4,uVar10);
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(int *)(iVar3 + 0x3d8) == 0) {
      return 1;
    }
    cVar2 = FUN_0044a690(uVar11);
    if (cVar2 != '\0') {
      return 1;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6);
    goto LAB_00513e96;
  case 0x21:
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 == '\0') {
      return 0;
    }
    bVar9 = false;
    piVar7 = *(int **)((int)param_1 + 0x26);
    if (*(int **)((int)param_1 + 0x26) != (int *)0x0) {
      do {
        if (bVar9) goto LAB_00513c84;
        piVar1 = piVar7 + 2;
        if (_DAT_007e3380 < *(float *)(*piVar7 + 0x2e4)) {
          bVar9 = true;
        }
        piVar7 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      if (bVar9) {
LAB_00513c84:
        if (param_3 == 0) {
          return 1;
        }
        uVar11 = 0x21;
        iVar4 = iVar3;
        (**(code **)(*param_1 + 0x14))(iVar3,0x21);
        cVar2 = FUN_00518d60(iVar4,uVar11);
        if (cVar2 != '\0') {
          if (*(int *)(iVar3 + 0x254) != 8) {
            return 0;
          }
          bVar9 = false;
          iVar4 = (**(code **)(*param_1 + 0x14))();
          if (*(int *)(iVar4 + 0x212) != 0) {
            iVar4 = (**(code **)(*param_1 + 0x14))();
            iVar4 = FUN_004e9370(*(undefined4 *)(iVar4 + 0x212));
            param_2 = 0;
            if (0 < *(int *)(iVar4 + 0x290)) {
              iVar8 = 0;
              do {
                iVar5 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar4 + 0x298) + iVar8));
                if (((*(int *)(iVar5 + 0x254) == 8) &&
                    (iVar5 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar4 + 0x298) + iVar8)),
                    *(char *)(iVar5 + 0x180) == '\0')) &&
                   (iVar5 = *(int *)(iVar3 + 0x288),
                   iVar6 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar4 + 0x298) + iVar8)),
                   iVar5 == *(int *)(iVar6 + 0x288))) {
                  bVar9 = true;
                }
                param_2 = param_2 + 1;
                iVar8 = iVar8 + 0xc;
              } while (param_2 < *(int *)(iVar4 + 0x290));
              if (bVar9) {
                return 1;
              }
            }
          }
          return 0;
        }
        return 0;
      }
    }
    return 0;
  }
  if (bVar9) {
    return 0;
  }
switchD_00512baf_caseD_0:
  return 1;
}


