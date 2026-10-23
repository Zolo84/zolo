// FUN_005f4300 @ 5f4300 size=1896

int __thiscall FUN_005f4300(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iStack_1c;
  int *local_18;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cee71;
  pvStack_c = ExceptionList;
  piVar12 = *(int **)((int)param_1 + 0x7e);
  ExceptionList = &pvStack_c;
  iVar8 = (**(code **)(*(int *)(DAT_00d0ca90 + 0x3b68) + 4))();
  iVar9 = (**(code **)(*piVar12 + 4))();
  if (iVar9 == iVar8) {
    piVar12 = *(int **)(*(int *)((int)param_1 + 0x7e) + 4);
    piVar13 = *(int **)(DAT_00d0ca90 + 0x3b6c);
    do {
      if ((piVar12 == (int *)0x0) || (piVar13 == (int *)0x0)) goto LAB_005f4392;
      piVar1 = (int *)piVar12[2];
      piVar2 = (int *)piVar13[2];
      iVar8 = *piVar13;
      iVar9 = FUN_00428ee0(*piVar12 + 0x2e);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + -8;
      }
      piVar12 = piVar1;
      piVar13 = piVar2;
    } while (iVar9 == iVar8);
  }
  FUN_005f4de0();
LAB_005f4392:
  iStack_1c = 0;
  if (*(int **)((int)param_1 + 0x86) == (int *)0x0) {
LAB_005f43d8:
    if (*(int **)((int)param_1 + 0x82) == (int *)0x0) goto LAB_005f4428;
    iStack_1c = (**(code **)(**(int **)((int)param_1 + 0x82) + 4))(param_2);
    if (iStack_1c == 1) {
      if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
      }
    }
    else {
      if (iStack_1c != 2) goto LAB_005f4428;
      if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
      }
    }
    *(undefined4 *)((int)param_1 + 0x82) = 0;
  }
  else {
    iStack_1c = (**(code **)(**(int **)((int)param_1 + 0x86) + 4))(param_2);
    if (iStack_1c != 1) {
      if (iStack_1c != 0) goto LAB_005f4428;
      goto LAB_005f43d8;
    }
    if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
    }
    *(undefined4 *)((int)param_1 + 0x86) = 0;
  }
  iStack_1c = 3;
LAB_005f4428:
  if ((((*(int *)((int)param_1 + 0x86) == 0) && (*(int *)((int)param_1 + 0x82) == 0)) &&
      (iVar8 = FUN_00428ee0(DAT_00d0ca90 + 0x13c92), iVar8 != 0)) && (iVar8 + -8 != 0)) {
    *(int *)(DAT_00d0ca90 + 0x21ea2) = iVar8 + -8;
    if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
    }
    pvVar10 = operator_new(0xe8);
    uStack_4 = 0;
    if (pvVar10 == (void *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_005f6210(DAT_00d0ca90);
    }
    *(undefined4 *)((int)param_1 + 0x86) = uVar11;
    iVar8 = DAT_00d0ca90;
    uStack_12 = (undefined2)DAT_0088f28e;
    uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
    uStack_4 = 0xffffffff;
    *(uint *)(DAT_00d0ca90 + 0x13c92) = CONCAT22(uStack_12,DAT_0088f28c);
    *(undefined2 *)(iVar8 + 0x13c96) = uStack_10;
  }
  if (iStack_1c == 0) {
    iStack_1c = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x7e) + 0x12) + 4))(param_2);
  }
  (**(code **)(**(int **)((int)param_1 + 0x8a) + 0x50))();
  (**(code **)(**(int **)((int)param_1 + 0x8e) + 0x50))();
  bVar5 = false;
  bVar6 = false;
  piVar12 = *(int **)(DAT_00d0ca90 + 0xe86e);
joined_r0x005f452d:
  if (piVar12 != (int *)0x0) {
    piVar13 = (int *)piVar12[2];
    iVar8 = *piVar12;
    iVar9 = FUN_0044e1d0();
    piVar12 = piVar13;
    if ((iVar8 != iVar9) && (iVar9 = (**(code **)(*(int *)(iVar8 + 0x28) + 4))(), 0 < iVar9)) {
      uVar11 = FUN_004e9f40();
      FUN_004e9370(uVar11);
      iVar9 = (**(code **)(*(int *)(iVar8 + 0x16) + 4))();
      if (iVar9 == 0) {
LAB_005f45b1:
        bVar5 = true;
      }
      else {
        bVar4 = false;
        piVar13 = *(int **)(iVar8 + 0x1a);
        if (*(int **)(iVar8 + 0x1a) == (int *)0x0) goto LAB_005f45b1;
        do {
          piVar1 = (int *)piVar13[2];
          if ((*(int *)(*piVar13 + 0x12a) == DAT_00d0ca90) &&
             (cVar7 = FUN_004d2f60(), cVar7 != '\0')) {
            bVar4 = true;
          }
          piVar13 = piVar1;
        } while (piVar1 != (int *)0x0);
        if (!bVar4) goto LAB_005f45b1;
      }
      iVar9 = (**(code **)(*(int *)(iVar8 + 4) + 4))();
      if (iVar9 != 0) {
        bVar4 = false;
        piVar13 = *(int **)(iVar8 + 8);
        if (*(int **)(iVar8 + 8) != (int *)0x0) {
          do {
            piVar1 = (int *)piVar13[2];
            if ((*(int *)(*piVar13 + 0x12a) == DAT_00d0ca90) &&
               (cVar7 = FUN_004d2f60(), cVar7 == '\0')) {
              bVar4 = true;
            }
            piVar13 = piVar1;
          } while (piVar1 != (int *)0x0);
          if (bVar4) goto joined_r0x005f452d;
        }
      }
      bVar6 = true;
    }
    goto joined_r0x005f452d;
  }
  local_18 = &DAT_0089cad8;
  do {
    if ((*local_18 != 0) &&
       (*(int *)(*(int *)(*local_18 + 0x12da) + 0x3b30) == *(int *)(DAT_00d0ca90 + 6))) {
      iVar8 = FUN_0044e1d0();
      iVar8 = (**(code **)(*(int *)(iVar8 + 4) + 4))();
      if (iVar8 == 0) {
        iVar8 = -1;
        iVar9 = FUN_0044e1d0();
        puVar14 = *(undefined4 **)(iVar9 + 0x3e);
        if (*(undefined4 **)(iVar9 + 0x3e) != (undefined4 *)0x0) {
          do {
            if (iVar8 == 0) break;
            puVar3 = (undefined4 *)puVar14[2];
            piVar12 = (int *)*puVar14;
            iVar9 = FUN_004c9f81();
            if (iVar9 == DAT_00d0ca90) {
              iVar8 = *piVar12;
              iVar9 = FUN_0044e1d0();
              if (iVar9 == iVar8) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(iVar8 + 0x52);
              }
            }
            puVar14 = puVar3;
          } while (puVar3 != (undefined4 *)0x0);
          if (iVar8 != -1) goto LAB_005f4691;
        }
        bVar6 = true;
      }
    }
LAB_005f4691:
    local_18 = local_18 + 1;
    if (0x89d037 < (int)local_18) {
      if (!bVar5) {
        piVar12 = *(int **)((int)param_1 + 0x8e);
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (!bVar6) {
        piVar12 = *(int **)((int)param_1 + 0x8a);
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (*(int *)(*DAT_00d12b40 + 0x38a) == 1) {
        piVar12 = *(int **)((int)param_1 + 0x8a);
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (*(int *)(*DAT_00d12b40 + 0x38e) == 1) {
        piVar12 = *(int **)((int)param_1 + 0x8e);
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(**(int **)((int)param_1 + 0x8e) + 4))(param_2);
      }
      if (*(char *)(*(int *)((int)param_1 + 0x8e) + 0x96) != '\0') {
        if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
        }
        pvVar10 = operator_new(0x108);
        uStack_4 = 1;
        if (pvVar10 == (void *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_005f55e0(0);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)((int)param_1 + 0x82) = uVar11;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(**(int **)((int)param_1 + 0x8a) + 4))(param_2);
      }
      if (*(char *)(*(int *)((int)param_1 + 0x8a) + 0x96) != '\0') {
        if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
        }
        pvVar10 = operator_new(0x108);
        uStack_4 = 2;
        if (pvVar10 == (void *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_005f55e0(1);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)((int)param_1 + 0x82) = uVar11;
      }
      if (iStack_1c == 0) {
        iVar8 = (**(code **)(*param_2 + 8))();
        if ((iVar8 == 0xe) &&
           (cVar7 = (**(code **)(*param_1 + 0x20))
                              (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)
                              ), cVar7 == '\0')) {
          ExceptionList = pvStack_c;
          return 1;
        }
        iStack_1c = (**(code **)(*(int *)param_1[0x25] + 4))(param_2);
        if (*(char *)(param_1[0x25] + 0x96) != '\0') {
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      cVar7 = FUN_004442a0();
      if (cVar7 == '\0') {
        piVar12 = (int *)param_1[0x27];
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
        piVar12 = (int *)param_1[0x28];
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
        piVar12 = (int *)param_1[0x26];
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (DAT_00dc1963 != '\0') {
        piVar12 = (int *)param_1[0x28];
        if (*(char *)((int)piVar12 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar12 + 0x60))();
        *(undefined1 *)((int)piVar12 + 0x86) = 1;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x26] + 4))(param_2);
      }
      cVar7 = FUN_00433910();
      if (cVar7 == '\0') {
        *(undefined4 *)(*DAT_00d12b40 + 0x38a) = 0;
      }
      else {
        *(undefined4 *)(*DAT_00d12b40 + 0x38a) = 1;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x27] + 4))(param_2);
      }
      cVar7 = FUN_00433910();
      if (cVar7 == '\0') {
        *(undefined4 *)(*DAT_00d12b40 + 0x38e) = 0;
      }
      else {
        *(undefined4 *)(*DAT_00d12b40 + 0x38e) = 1;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x28] + 4))(param_2);
      }
      cVar7 = FUN_00433910();
      if (cVar7 == '\0') {
        *(undefined4 *)(*DAT_00d12b40 + 0x392) = 0;
      }
      else {
        *(undefined4 *)(*DAT_00d12b40 + 0x392) = 1;
      }
      if (((iStack_1c == 0) && (iVar8 = (**(code **)(*param_2 + 8))(), iVar8 == 0xe)) &&
         (cVar7 = (**(code **)(*param_1 + 0x20))
                            (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
         cVar7 != '\0')) {
        ExceptionList = pvStack_c;
        return 3;
      }
      ExceptionList = pvStack_c;
      return iStack_1c;
    }
  } while( true );
}


