// FUN_00522bc0 @ 522bc0 size=1107

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00522bc0(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_4c [4];
  undefined **ppuStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined **ppuStack_34;
  int iStack_30;
  undefined **ppuStack_20;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c21d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_005230e0(param_2);
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
  if (iVar4 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_1[3] != param_2) {
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 != '\0') {
      FUN_005212f0();
      ppuStack_34 = &PTR_FUN_007e8c70;
      iVar4 = param_1[3];
      uStack_4 = 0;
      uVar5 = FUN_004e9370(param_2);
      uVar6 = FUN_004e9370(iVar4);
      uVar3 = FUN_00431220(param_1,uVar6,uVar5);
      uStack_4 = 0xffffffff;
      ppuStack_34 = &PTR_LAB_007e518c;
      FUN_0045a680();
      ExceptionList = local_c;
      return uVar3;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x30))();
      if (cVar2 != '\0') {
        piVar1 = *(int **)((int)param_1 + 0x26);
        do {
          if (piVar1 == (int *)0x0) goto LAB_00522f68;
          iVar4 = *piVar1;
          piVar1 = (int *)piVar1[2];
        } while (*(char *)(iVar4 + 0x15c) == '\0');
        iVar4 = FUN_004e9370(param_2);
        if ((((*(int *)(iVar4 + 0x254) == 8) || (*(int *)(iVar4 + 0x254) == 9)) ||
            (*(int *)(iVar4 + 0x3d8) == 0)) ||
           (cVar2 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar2 == '\0')) {
          ExceptionList = local_c;
          return 0;
        }
LAB_00522f68:
        iStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        ppuStack_48 = &PTR_FUN_007e8b48;
        iVar4 = param_1[3];
        uStack_4 = 3;
        uVar5 = FUN_004e9370(param_2);
        uVar6 = FUN_004e9370(iVar4);
        uVar3 = FUN_00431220(param_1,uVar6,uVar5);
        ppuStack_48 = &PTR_LAB_007e518c;
        iVar4 = iStack_44;
        while (iVar4 != 0) {
          iVar7 = *(int *)(iVar4 + 8);
          FUN_00796cd8(iVar4);
          iVar4 = iVar7;
        }
        ExceptionList = local_c;
        return uVar3;
      }
    }
    else {
      iVar4 = FUN_004e9370(param_2);
      if ((param_1[3] != 0) ||
         (iVar7 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar7 + 0x2ae) == 0)) {
        if ((*(int *)(iVar4 + 0x3d8) != 0) &&
           ((cVar2 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar2 != '\0' &&
            (iVar7 = (**(code **)(param_1[0x47] + 4))(), iVar7 != 0)))) {
          ExceptionList = local_c;
          return 0;
        }
        piVar1 = *(int **)((int)param_1 + 0x26);
        if (DAT_00dc195e == '\0') {
          do {
            if (piVar1 == (int *)0x0) goto LAB_00522de0;
            puVar8 = (undefined4 *)FUN_00499730(auStack_4c,0);
          } while (*(int *)(*(int *)*puVar8 + 0x134) != 9);
        }
        else {
          do {
            if (piVar1 == (int *)0x0) goto LAB_00522de0;
            iVar7 = *piVar1;
            piVar1 = (int *)piVar1[2];
          } while (*(float *)(iVar7 + 0x110) != _DAT_007e3380);
        }
        goto LAB_00522ebc;
      }
      if (*(int *)(iVar4 + 0x3d8) != 0) {
        cVar2 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
        if (cVar2 == '\0') {
          cVar2 = FUN_0044a690(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
          if (cVar2 == '\0') {
            ExceptionList = local_c;
            return 0;
          }
          iVar4 = *(int *)(iVar4 + 0x3dc);
          iVar7 = (**(code **)(*param_1 + 0x10))();
          if (iVar4 != *(int *)(*(int *)(iVar7 + 0x2ae) + 0xc)) {
            ExceptionList = local_c;
            return 0;
          }
        }
        else {
          if (*(int *)(iVar4 + 0x182) == 0) {
            ExceptionList = local_c;
            return 0;
          }
          if (*(char *)(param_1[0x92] + 0x37bb) == '\0') {
            ExceptionList = local_c;
            return 0;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 1;
LAB_00522de0:
  piVar1 = *(int **)((int)param_1 + 0x26);
  do {
    if (piVar1 == (int *)0x0) {
      iVar7 = *(int *)(iVar4 + 0x482);
      iVar9 = FUN_004e9370(param_1[3]);
      if (iVar7 == *(int *)(iVar9 + 0x482)) {
        ExceptionList = local_c;
        return 1;
      }
      FUN_004ee3c0();
      ppuStack_34 = &PTR_FUN_007e8694;
      iVar7 = param_1[3];
      uStack_4 = 1;
      uVar5 = FUN_004e9370(param_2);
      uVar6 = FUN_004e9370(iVar7);
      cVar2 = FUN_00431220(param_1,uVar6,uVar5);
      if (cVar2 == '\x01') {
        ppuStack_34 = &PTR_LAB_007e518c;
        while (iStack_30 != 0) {
          iVar4 = *(int *)(iStack_30 + 8);
          FUN_00796cd8(iStack_30);
          iStack_30 = iVar4;
        }
        ExceptionList = local_c;
        return 1;
      }
      uStack_4 = 0xffffffff;
      ppuStack_34 = &PTR_LAB_007e518c;
      while (iStack_30 != 0) {
        iVar7 = *(int *)(iStack_30 + 8);
        FUN_00796cd8(iStack_30);
        iStack_30 = iVar7;
      }
      break;
    }
    iVar7 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(char *)(iVar7 + 0x155) == '\0');
LAB_00522ebc:
  if (*(char *)(param_1[0x92] + 0x37a3) != '\0') {
    uVar5 = FUN_004e9370(param_1[3]);
    iVar7 = param_1[3];
    param_1[3] = 0;
    FUN_004ee3c0();
    ppuStack_20 = &PTR_FUN_007e8c28;
    uStack_4 = 2;
    uVar3 = FUN_00431220(param_1,uVar5,iVar4);
    param_1[3] = iVar7;
    ppuStack_20 = &PTR_LAB_007e518c;
    while (iStack_1c != 0) {
      iVar4 = *(int *)(iStack_1c + 8);
      FUN_00796cd8(iStack_1c);
      iStack_1c = iVar4;
    }
    ExceptionList = local_c;
    return uVar3;
  }
  ExceptionList = local_c;
  return 0;
}


