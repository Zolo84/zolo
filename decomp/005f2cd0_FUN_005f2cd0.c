// FUN_005f2cd0 @ 5f2cd0 size=2884

int __thiscall FUN_005f2cd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cedb8;
  local_c = ExceptionList;
  iVar12 = (int)param_1 + 0x2e;
  ExceptionList = &local_c;
  iVar4 = FUN_00428ee0(iVar12);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (iVar4 + -8 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  (**(code **)(*(int *)param_1[0xd] + 0x50))();
  (**(code **)(*(int *)param_1[0xe] + 0x50))();
  (**(code **)(*(int *)param_1[0xf] + 0x50))();
  (**(code **)(*(int *)param_1[0x10] + 0x50))();
  if (*(int *)(iVar4 + 0x12a) < 1) {
    piVar1 = (int *)param_1[0xe];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  if (*(int *)(iVar4 + 0x126) < 1) {
    piVar1 = (int *)param_1[0x10];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  iVar5 = __ftol();
  if (iVar5 < 1) {
    piVar1 = (int *)param_1[0xf];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  iVar5 = __ftol();
  if (iVar5 < 1) {
    piVar1 = (int *)param_1[0xd];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  if (*(int *)(*DAT_00d12b40 + 0x392) == 1) {
    piVar1 = (int *)param_1[0xd];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0xe];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0xf];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0x10];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  local_24 = (**(code **)(*(int *)param_1[0xd] + 4))(param_2);
  if (((local_24 == 0) &&
      (local_24 = (**(code **)(*(int *)param_1[0xe] + 4))(param_2), local_24 == 0)) &&
     (local_24 = (**(code **)(*(int *)param_1[0xf] + 4))(param_2), local_24 == 0)) {
    local_24 = (**(code **)(*(int *)param_1[0x10] + 4))(param_2);
  }
  if (*(char *)(param_1[0xd] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef == '\0') {
        puVar6 = operator_new(0xc);
        uStack_4 = 2;
        if (puVar6 == (undefined4 *)0x0) goto LAB_005f3098;
        iVar5 = FUN_00428ee0(iVar12);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -8;
        }
        FUN_004736e0(0xeb,&DAT_0088f230);
        iVar7 = puVar6[1];
        *puVar6 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
        *(undefined4 *)(puVar6[1] + 0x14) = 1;
      }
      else {
        iVar5 = __ftol();
        if (10 < iVar5) {
          iVar5 = 10;
        }
        puVar6 = operator_new(0xc);
        uStack_4 = 1;
        if (puVar6 == (undefined4 *)0x0) {
LAB_005f3098:
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar7 = FUN_00428ee0(iVar12);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + -8;
          }
          FUN_004736e0(0xeb,&DAT_0088f230);
          iVar2 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
          *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
          *(int *)(puVar6[1] + 0x14) = iVar5;
        }
      }
    }
    else {
      iVar5 = __ftol();
      if (5 < iVar5) {
        iVar5 = 5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f3098;
      iVar7 = FUN_00428ee0(iVar12);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -8;
      }
      FUN_004736e0(0xeb,&DAT_0088f230);
      iVar2 = puVar6[1];
      *puVar6 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
      *(int *)(puVar6[1] + 0x14) = iVar5;
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
  if (*(char *)(param_1[0xe] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef == '\0') {
        puVar6 = operator_new(0xc);
        uStack_4 = 5;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar5 = FUN_00428ee0(iVar12);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + -8;
          }
          FUN_004736e0(0xed,&DAT_0088f230);
          iVar7 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
          *(undefined4 *)(puVar6[1] + 0x14) = 1;
        }
        uStack_4 = 0xffffffff;
        FUN_00565cc0(puVar6);
        goto LAB_005f3242;
      }
      iVar5 = FUN_00428ee0(iVar12);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      iVar5 = *(int *)(iVar5 + 0x132);
      if (10 < iVar5) {
        iVar5 = 10;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 4;
    }
    else {
      iVar5 = FUN_00428ee0(iVar12);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      iVar5 = *(int *)(iVar5 + 0x132);
      if (5 < iVar5) {
        iVar5 = 5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 3;
    }
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar7 = FUN_00428ee0(iVar12);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -8;
      }
      FUN_004736e0(0xed,&DAT_0088f230);
      *puVar6 = &PTR_FUN_007e6040;
      iVar2 = puVar6[1];
      *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
      *(int *)(puVar6[1] + 0x14) = iVar5;
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
LAB_005f3242:
  if (*(char *)(param_1[0xf] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef == '\0') {
        puVar6 = operator_new(0xc);
        uStack_4 = 8;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar5 = FUN_00428ee0(iVar12);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + -8;
          }
          FUN_004736e0(0xec,&DAT_0088f230);
          iVar7 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
          *(undefined4 *)(puVar6[1] + 0x14) = 1;
        }
        uStack_4 = 0xffffffff;
        FUN_00565cc0(puVar6);
        goto LAB_005f3411;
      }
      iVar5 = __ftol();
      if (10 < iVar5) {
        iVar5 = 10;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 7;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f32e5;
      iVar7 = FUN_00428ee0(iVar12);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -8;
      }
      FUN_004736e0(0xec,&DAT_0088f230);
      iVar2 = puVar6[1];
      *puVar6 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
      *(int *)(puVar6[1] + 0x14) = iVar5;
    }
    else {
      iVar5 = __ftol();
      if (5 < iVar5) {
        iVar5 = 5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 6;
      if (puVar6 == (undefined4 *)0x0) {
LAB_005f32e5:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar7 = FUN_00428ee0(iVar12);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + -8;
        }
        FUN_004736e0(0xec,&DAT_0088f230);
        iVar2 = puVar6[1];
        *puVar6 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
        *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
        *(int *)(puVar6[1] + 0x14) = iVar5;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
LAB_005f3411:
  if (*(char *)(param_1[0x10] + 0x9d) == '\0') goto LAB_005f373c;
  if (DAT_00bd13ee == '\0') {
    if (DAT_00bd13ef == '\0') {
      puVar6 = operator_new(0xc);
      uStack_4 = 0xf;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f3729;
      iVar12 = FUN_00428ee0(iVar12);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar12 + -8;
      }
      puVar11 = operator_new(0x18);
      uStack_4._0_1_ = 0x10;
      if (puVar11 == (undefined2 *)0x0) {
        puVar11 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
        puVar11[7] = 0;
        *(undefined4 *)(puVar11 + 8) = 0;
      }
      puVar6[1] = puVar11;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined1 *)((int)puVar6 + 9) = 1;
      *puVar6 = &PTR_FUN_007e6060;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *puVar11 = 0xee;
      iVar5 = puVar6[1];
      *(undefined4 *)(iVar5 + 8) = DAT_0088f230;
      uStack_4 = CONCAT31(uStack_4._1_3_,0x11);
      *(undefined2 *)(iVar5 + 0xc) = DAT_0088f234;
      puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar5 = puVar6[1];
      *(undefined4 *)(iVar5 + 2) = *puVar10;
      *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar10 + 1);
      iVar5 = puVar6[1];
      *puVar6 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar5 + 0xe) = *(undefined4 *)(iVar12 + 0xc);
      *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar12 + 0x10);
      *(undefined4 *)(puVar6[1] + 0x14) = 1;
    }
    else {
      iVar5 = FUN_00428ee0(iVar12);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      iVar5 = *(int *)(iVar5 + 0x12e);
      if (10 < iVar5) {
        iVar5 = 10;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 0xc;
      if (puVar6 == (undefined4 *)0x0) {
LAB_005f3729:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar12 = FUN_00428ee0(iVar12);
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar12 + -8;
        }
        pvVar8 = operator_new(0x18);
        uStack_4._0_1_ = 0xd;
        if (pvVar8 == (void *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
          *(undefined2 *)((int)pvVar8 + 0xe) = 0;
          *(undefined4 *)((int)pvVar8 + 0x10) = 0;
        }
        uStack_4._0_1_ = 0xc;
        FUN_0042d320(pvVar8);
        *puVar6 = &PTR_FUN_007e6060;
        *(undefined1 *)((int)puVar6 + 10) = 0;
        *(undefined2 *)puVar6[1] = 0xee;
        iVar7 = puVar6[1];
        *(undefined4 *)(iVar7 + 8) = DAT_0088f230;
        uStack_4 = CONCAT31(uStack_4._1_3_,0xe);
        *(undefined2 *)(iVar7 + 0xc) = DAT_0088f234;
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar7 = puVar6[1];
        *(undefined4 *)(iVar7 + 2) = *puVar10;
        *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar10 + 1);
        iVar7 = puVar6[1];
        *puVar6 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar12 + 0xc);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar12 + 0x10);
        *(int *)(puVar6[1] + 0x14) = iVar5;
      }
    }
  }
  else {
    iVar5 = FUN_00428ee0(iVar12);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + -8;
    }
    iVar5 = *(int *)(iVar5 + 0x12e);
    if (5 < iVar5) {
      iVar5 = 5;
    }
    puVar6 = operator_new(0xc);
    uStack_4 = 9;
    if (puVar6 == (undefined4 *)0x0) goto LAB_005f3729;
    iVar12 = FUN_00428ee0(iVar12);
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + -8;
    }
    pvVar8 = operator_new(0x18);
    uStack_4._0_1_ = 10;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00473890();
    }
    uStack_4._0_1_ = 9;
    FUN_0042d320(uVar9);
    *puVar6 = &PTR_FUN_007e6060;
    *(undefined1 *)((int)puVar6 + 10) = 0;
    *(undefined2 *)puVar6[1] = 0xee;
    iVar7 = puVar6[1];
    *(undefined4 *)(iVar7 + 8) = DAT_0088f230;
    uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
    *(undefined2 *)(iVar7 + 0xc) = DAT_0088f234;
    puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar7 = puVar6[1];
    *(undefined4 *)(iVar7 + 2) = *puVar10;
    *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar10 + 1);
    iVar7 = puVar6[1];
    *puVar6 = &PTR_FUN_007e6040;
    *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar12 + 0xc);
    *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar12 + 0x10);
    *(int *)(puVar6[1] + 0x14) = iVar5;
  }
  uStack_4 = 0xffffffff;
  FUN_00565cc0(puVar6);
LAB_005f373c:
  if (((local_24 != 0) || (iVar12 = (**(code **)(*param_2 + 8))(), iVar12 != 0xe)) ||
     (cVar3 = (**(code **)(*param_1 + 0x2c))
                        (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
     cVar3 == '\0')) {
    ExceptionList = local_c;
    return local_24;
  }
  iVar12 = param_1[0x14];
  *(int *)(DAT_00d0ca90 + 0x21ea2) = iVar4 + -8;
  if (*(undefined4 **)(iVar12 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar12 + 0x86))(1);
  }
  pvVar8 = operator_new(0xe8);
  uStack_4 = 0x12;
  if (pvVar8 != (void *)0x0) {
    uVar9 = FUN_005f6210(DAT_00d0ca90);
    *(undefined4 *)(iVar12 + 0x86) = uVar9;
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)(iVar12 + 0x86) = 0;
  ExceptionList = local_c;
  return 0;
}


