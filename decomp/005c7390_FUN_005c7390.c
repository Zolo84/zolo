// FUN_005c7390 @ 5c7390 size=1371

undefined4 __fastcall FUN_005c7390(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ccb7c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_005c5030();
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 3;
  }
  iVar5 = *(int *)(param_1 + 0x8c);
  piVar2 = *(int **)(iVar5 + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x90);
  switch(uVar7) {
  case 0:
    uVar11 = *(undefined4 *)(iVar4 + 0xc);
    uVar7 = 0;
    goto LAB_005c74c2;
  case 1:
  case 4:
    iVar5 = FUN_004e9370(*(undefined4 *)(iVar4 + 0xc));
    iVar10 = 0;
    uStack_1c = 0;
    if (0 < *(int *)(iVar5 + 0x290)) {
      do {
        iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
        if ((((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
            (iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298))),
            *(char *)(iVar9 + 0x180) == '\0')) &&
           (iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298))),
           *(int *)(iVar9 + 0x3d8) != 0)) {
          uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x248) + 6);
          FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
          cVar3 = FUN_0044b280(uVar7);
          if (cVar3 != '\0') {
            pvVar6 = operator_new(0x46);
            uStack_4 = 0;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
            }
            uStack_4 = 0xffffffff;
            FUN_005c46c0(uVar7);
          }
        }
        uStack_1c = uStack_1c + 1;
        iVar10 = iVar10 + 0xc;
      } while ((int)uStack_1c < *(int *)(iVar5 + 0x290));
    }
    break;
  default:
    iVar5 = FUN_004e9370(*(undefined4 *)(iVar4 + 0xc));
    pvVar6 = operator_new(0x46);
    uStack_4 = 2;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar4 + 0xc));
    }
    uStack_4 = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x8c);
    iVar10 = *(int *)(iVar4 + 8);
    puVar8 = operator_new(0xe);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = uVar7;
      puVar8[1] = iVar10;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    iVar9 = *(int *)(iVar4 + 0xc);
    *(undefined4 **)(iVar4 + 8) = puVar8;
    *(int *)(iVar4 + 0xc) = iVar9 + 1;
    if (iVar9 == 0) {
      *(undefined4 **)(iVar4 + 4) = puVar8;
    }
    else {
      *(undefined4 **)(iVar10 + 8) = puVar8;
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar5 + 0x290)) {
      iVar10 = 0;
      do {
        iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
        if (((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
           (iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298))),
           *(char *)(iVar9 + 0x180) == '\0')) {
          pvVar6 = operator_new(0x46);
          uStack_4 = 3;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar7);
        }
        iVar4 = iVar4 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar4 < *(int *)(iVar5 + 0x290));
    }
    break;
  case 5:
  case 8:
    iVar5 = FUN_004e9370(*(undefined4 *)(iVar4 + 0xc));
    iVar10 = 0;
    uStack_1c = 0;
    if (0 < *(int *)(iVar5 + 0x290)) {
      do {
        iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
        if ((((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
            (iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298))),
            *(char *)(iVar9 + 0x180) == '\0')) &&
           ((iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298))),
            *(int *)(iVar9 + 0x3d8) != 0 &&
            (puVar8 = (undefined4 *)(*(int *)(iVar5 + 0x298) + iVar10), puVar8[1] != 4)))) {
          uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x248) + 6);
          FUN_004e9370(*puVar8);
          cVar3 = FUN_0044a690(uVar7);
          if (cVar3 == '\0') {
            iVar9 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
            cVar3 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar9 + 0x3d8) + 6));
            if (cVar3 == '\0') goto LAB_005c7729;
          }
          pvVar6 = operator_new(0x46);
          uStack_4 = 1;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x298)));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar7);
        }
LAB_005c7729:
        uStack_1c = uStack_1c + 1;
        iVar10 = iVar10 + 0xc;
      } while ((int)uStack_1c < *(int *)(iVar5 + 0x290));
    }
    break;
  case 6:
  case 7:
    uVar11 = *(undefined4 *)(iVar4 + 0xc);
LAB_005c74c2:
    uStack_14 = uStack_14 & 0xff000000;
    uStack_1c = uStack_1c & 0xff000000;
    FUN_0050b600(iVar4,uVar7,uVar11,0x3f800000,1,1,uStack_1c,0,uStack_14,0,1,0xffffffff,0,1,0,
                 0xbf800000,1);
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
  if (iVar4 != 0) {
    piVar2 = *(int **)(param_1 + 0x8c);
    iVar4 = (**(code **)(**(int **)piVar2[1] + 0x18))();
    iVar5 = (**(code **)(*piVar2 + 4))();
    iVar4 = iVar4 * iVar5;
    if (499 < iVar4) {
      iVar4 = 500;
    }
    *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) = iVar4;
  }
  FUN_004353e0();
  FUN_00435fd0();
  *(undefined4 *)(param_1 + 0x98) = 2;
  ExceptionList = local_c;
  return 3;
}


