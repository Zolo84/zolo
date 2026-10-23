// FUN_005f6790 @ 5f6790 size=3935

int __thiscall FUN_005f6790(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf11a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
  if ((iVar5 == 0) || (iVar5 == 8)) {
    ExceptionList = local_c;
    return 1;
  }
  iStack_20 = (**(code **)(*(int *)param_1[0x39] + 4))(param_2);
  if (*(char *)(param_1[0x39] + 0x96) != '\0') {
    ExceptionList = local_c;
    return 1;
  }
  if (iStack_20 == 0) {
    iStack_20 = (**(code **)(*(int *)param_1[0x38] + 4))(param_2);
    if (*(char *)(param_1[0x38] + 0x96) != '\0') {
      puVar6 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -8;
        }
        FUN_004736e0(0x147,&DAT_0088f230);
        iVar7 = puVar6[1];
        *puVar6 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
        *(undefined4 *)(puVar6[1] + 0x14) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00565cc0(puVar6);
      ExceptionList = local_c;
      return 1;
    }
    if (((iStack_20 == 0) && (iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0xe)) &&
       (cVar3 = (**(code **)(*param_1 + 0x20))
                          (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
       cVar3 == '\0')) {
      ExceptionList = local_c;
      return 1;
    }
  }
  iStack_1c = 0;
  do {
    (**(code **)(*(int *)param_1[iStack_1c + 0x21] + 0x50))();
    if (iStack_20 == 0) {
      cVar3 = FUN_00433910();
      iVar5 = (int)param_1 + 0x7e;
      FUN_00428ee0(iVar5);
      iVar7 = FUN_004d5be0();
      if (*(int *)(iVar7 + 0x3d8) == DAT_00d0ca90) {
LAB_005f69a7:
        iStack_20 = (**(code **)(*(int *)param_1[iStack_1c + 0x21] + 4))(param_2);
      }
      else {
        FUN_00428ee0(iVar5);
        iVar7 = FUN_004d5be0();
        if (*(int *)(*(int *)(*(int *)(iVar7 + 0x3d8) + 0x12da) + 0x3b30) != 0) {
          FUN_00428ee0(iVar5);
          iVar7 = FUN_004d5be0();
          if (*(int *)(*(int *)(*(int *)(iVar7 + 0x3d8) + 0x12da) + 0x3b30) ==
              *(int *)(DAT_00d0ca90 + 6)) goto LAB_005f69a7;
        }
      }
      cVar4 = FUN_00433910();
      if (cVar3 == cVar4) goto switchD_005f69e9_default;
      switch(iStack_1c) {
      case 0:
        puStack_14 = operator_new(0xc);
        uStack_4 = 1;
        if (puStack_14 != (undefined4 *)0x0) {
          iVar5 = FUN_00428ee0(iVar5);
          if (iVar5 == 0) {
            iVar5 = 0;
            uVar8 = 0x142;
          }
          else {
            iVar5 = iVar5 + -8;
            uVar8 = 0x142;
          }
          break;
        }
LAB_005f6b89:
        puStack_14 = (undefined4 *)0x0;
        goto LAB_005f6b8b;
      case 1:
        puStack_14 = operator_new(0xc);
        uStack_4 = 4;
        if (puStack_14 == (undefined4 *)0x0) goto LAB_005f6b89;
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -8;
        }
        uVar8 = 0x144;
        break;
      case 2:
        puStack_14 = operator_new(0xc);
        uStack_4 = 3;
        if (puStack_14 == (undefined4 *)0x0) goto LAB_005f6b89;
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 == 0) {
          iVar5 = 0;
          uVar8 = 0x145;
        }
        else {
          iVar5 = iVar5 + -8;
          uVar8 = 0x145;
        }
        break;
      case 3:
        puStack_14 = operator_new(0xc);
        uStack_4 = 2;
        if (puStack_14 == (undefined4 *)0x0) goto LAB_005f6b89;
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 == 0) {
          iVar5 = 0;
          uVar8 = 0x143;
        }
        else {
          iVar5 = iVar5 + -8;
          uVar8 = 0x143;
        }
        break;
      case 4:
        puStack_14 = operator_new(0xc);
        uStack_4 = 5;
        if (puStack_14 == (undefined4 *)0x0) goto LAB_005f6b89;
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 == 0) {
          iVar5 = 0;
          uVar8 = 0x146;
        }
        else {
          iVar5 = iVar5 + -8;
          uVar8 = 0x146;
        }
        break;
      default:
        goto switchD_005f69e9_default;
      }
      FUN_004736e0(uVar8,&DAT_0088f230);
      *puStack_14 = &PTR_FUN_007e6040;
      iVar7 = puStack_14[1];
      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
      *(uint *)(puStack_14[1] + 0x14) = (uint)(cVar3 != '\x01');
LAB_005f6b8b:
      uStack_4 = 0xffffffff;
      FUN_00565cc0(puStack_14);
    }
switchD_005f69e9_default:
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 5);
  (**(code **)(*(int *)param_1[0x32] + 0x50))();
  (**(code **)(*(int *)param_1[0x33] + 0x50))();
  (**(code **)(*(int *)param_1[0x34] + 0x50))();
  (**(code **)(*(int *)param_1[0x35] + 0x50))();
  iVar5 = (int)param_1 + 0x7e;
  iVar7 = FUN_00428ee0(iVar5);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar7 + -8;
  }
  if (*(int *)(iVar7 + 0x132) < 1) {
    piVar1 = (int *)param_1[0x33];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  iVar7 = FUN_00428ee0(iVar5);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar7 + -8;
  }
  if (*(int *)(iVar7 + 0x12e) < 1) {
    piVar1 = (int *)param_1[0x35];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  iVar7 = __ftol();
  if (iVar7 < 1) {
    piVar1 = (int *)param_1[0x34];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  iVar7 = __ftol();
  if (iVar7 < 1) {
    piVar1 = (int *)param_1[0x32];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  if (*(int *)(*DAT_00d12b40 + 0x392) == 1) {
    piVar1 = (int *)param_1[0x32];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0x33];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0x34];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
    piVar1 = (int *)param_1[0x35];
    if (*(char *)((int)piVar1 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar1 + 0x60))();
    *(undefined1 *)((int)piVar1 + 0x86) = 1;
  }
  if (((iStack_20 == 0) &&
      (iStack_20 = (**(code **)(*(int *)param_1[0x32] + 4))(param_2), iStack_20 == 0)) &&
     ((iStack_20 = (**(code **)(*(int *)param_1[0x33] + 4))(param_2), iStack_20 == 0 &&
      (iStack_20 = (**(code **)(*(int *)param_1[0x34] + 4))(param_2), iStack_20 == 0)))) {
    iStack_20 = (**(code **)(*(int *)param_1[0x35] + 4))(param_2);
  }
  if (*(char *)(param_1[0x32] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef != '\0') {
        iVar7 = __ftol();
        if (10 < iVar7) {
          iVar7 = 10;
        }
        puVar6 = operator_new(0xc);
        uStack_4 = 7;
        goto LAB_005f6e70;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 8;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f6f28;
      iVar5 = FUN_00428ee0(iVar5);
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
      iVar7 = __ftol();
      if (5 < iVar7) {
        iVar7 = 5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 6;
LAB_005f6e70:
      if (puVar6 == (undefined4 *)0x0) {
LAB_005f6f28:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -8;
        }
        FUN_004736e0(0xeb,&DAT_0088f230);
        *puVar6 = &PTR_FUN_007e6040;
        iVar2 = puVar6[1];
        *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
        *(int *)(puVar6[1] + 0x14) = iVar7;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
  if (*(char *)(param_1[0x33] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef != '\0') {
        iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
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
        uStack_4 = 10;
        goto LAB_005f6fe5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 0xb;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f70a0;
      iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
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
    else {
      iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
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
      uStack_4 = 9;
LAB_005f6fe5:
      if (puVar6 == (undefined4 *)0x0) {
LAB_005f70a0:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar7 = FUN_00428ee0((int)param_1 + 0x7e);
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
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
  if (*(char *)(param_1[0x34] + 0x9d) != '\0') {
    if (DAT_00bd13ee == '\0') {
      if (DAT_00bd13ef == '\0') {
        puVar6 = operator_new(0xc);
        uStack_4 = 0x10;
        if (puVar6 != (undefined4 *)0x0) {
          iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + -8;
          }
          pvVar9 = operator_new(0x18);
          uStack_4._0_1_ = 0x11;
          if (pvVar9 == (void *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_00473890();
          }
          uStack_4._0_1_ = 0x10;
          FUN_0042d320(uVar8);
          *puVar6 = &PTR_FUN_007e6060;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *(undefined2 *)puVar6[1] = 0xec;
          iVar7 = puVar6[1];
          *(undefined4 *)(iVar7 + 8) = DAT_0088f230;
          uStack_4 = CONCAT31(uStack_4._1_3_,0x12);
          *(undefined2 *)(iVar7 + 0xc) = DAT_0088f234;
          puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar7 = puVar6[1];
          *(undefined4 *)(iVar7 + 2) = *puVar10;
          *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar10 + 1);
          iVar7 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
          *(undefined4 *)(puVar6[1] + 0x14) = 1;
          goto LAB_005f732f;
        }
      }
      else {
        iVar5 = __ftol();
        if (10 < iVar5) {
          iVar5 = 10;
        }
        puVar6 = operator_new(0xc);
        uStack_4 = 0xd;
        if (puVar6 != (undefined4 *)0x0) {
          iVar7 = FUN_00428ee0((int)param_1 + 0x7e);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + -8;
          }
          pvVar9 = operator_new(0x18);
          uStack_4._0_1_ = 0xe;
          if (pvVar9 == (void *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_00473890();
          }
          uStack_4._0_1_ = 0xd;
          FUN_0042d320(uVar8);
          *puVar6 = &PTR_FUN_007e6060;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *(undefined2 *)puVar6[1] = 0xec;
          iVar2 = puVar6[1];
          *(undefined4 *)(iVar2 + 8) = DAT_0088f230;
          uStack_4 = CONCAT31(uStack_4._1_3_,0xf);
          *(undefined2 *)(iVar2 + 0xc) = DAT_0088f234;
          puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar2 = puVar6[1];
          *(undefined4 *)(iVar2 + 2) = *puVar10;
          *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar10 + 1);
          goto LAB_005f7224;
        }
      }
LAB_005f732d:
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar5 = __ftol();
      if (5 < iVar5) {
        iVar5 = 5;
      }
      puVar6 = operator_new(0xc);
      uStack_4 = 0xc;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f732d;
      iVar7 = FUN_00428ee0((int)param_1 + 0x7e);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -8;
      }
      FUN_004736e0(0xec,&DAT_0088f230);
LAB_005f7224:
      *puVar6 = &PTR_FUN_007e6040;
      iVar2 = puVar6[1];
      *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
      *(int *)(puVar6[1] + 0x14) = iVar5;
    }
LAB_005f732f:
    uStack_4 = 0xffffffff;
    FUN_00565cc0(puVar6);
  }
  if (*(char *)(param_1[0x35] + 0x9d) == '\0') goto LAB_005f768c;
  if (DAT_00bd13ee == '\0') {
    if (DAT_00bd13ef == '\0') {
      puVar6 = operator_new(0xc);
      uStack_4 = 0x18;
      if (puVar6 == (undefined4 *)0x0) goto LAB_005f7679;
      iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      puVar11 = operator_new(0x18);
      if (puVar11 == (undefined2 *)0x0) {
        puVar11 = (undefined2 *)0x0;
      }
      else {
        puVar11[3] = 0;
        *(undefined1 *)(puVar11 + 2) = 0;
        *(undefined1 *)((int)puVar11 + 3) = 0;
        *(undefined1 *)(puVar11 + 1) = 0;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0;
        puVar11[7] = 0;
        *(undefined4 *)(puVar11 + 8) = 0;
      }
      puVar6[1] = puVar11;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined1 *)((int)puVar6 + 9) = 1;
      *puVar6 = &PTR_FUN_007e6060;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *puVar11 = 0xee;
      iVar7 = puVar6[1];
      *(undefined4 *)(iVar7 + 8) = DAT_0088f230;
      *(undefined2 *)(iVar7 + 0xc) = DAT_0088f234;
      iVar7 = puVar6[1];
      puStack_14 = (undefined4 *)((uint)puVar6 & 0xff000000);
      *(undefined4 **)(iVar7 + 2) = puStack_14;
      *(undefined2 *)(iVar7 + 6) = 0;
      iVar7 = puVar6[1];
      *puVar6 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
      *(undefined4 *)(puVar6[1] + 0x14) = 1;
    }
    else {
      iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
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
      uStack_4 = 0x16;
      if (puVar6 == (undefined4 *)0x0) {
LAB_005f7679:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar7 = FUN_00428ee0((int)param_1 + 0x7e);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + -8;
        }
        puVar11 = operator_new(0x18);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x17);
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
        iVar2 = puVar6[1];
        *(undefined4 *)(iVar2 + 8) = DAT_0088f230;
        *(undefined2 *)(iVar2 + 0xc) = DAT_0088f234;
        iVar2 = puVar6[1];
        puStack_14 = (undefined4 *)((uint)puVar6 & 0xff000000);
        *(undefined4 **)(iVar2 + 2) = puStack_14;
        *(undefined2 *)(iVar2 + 6) = 0;
        iVar2 = puVar6[1];
        *puVar6 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
        *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
        *(int *)(puVar6[1] + 0x14) = iVar5;
      }
    }
  }
  else {
    iVar5 = FUN_00428ee0((int)param_1 + 0x7e);
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
    uStack_4 = 0x13;
    if (puVar6 == (undefined4 *)0x0) goto LAB_005f7679;
    iVar7 = FUN_00428ee0((int)param_1 + 0x7e);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar7 + -8;
    }
    pvVar9 = operator_new(0x18);
    uStack_4._0_1_ = 0x14;
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
      *(undefined2 *)((int)pvVar9 + 0xe) = 0;
      *(undefined4 *)((int)pvVar9 + 0x10) = 0;
    }
    uStack_4._0_1_ = 0x13;
    FUN_0042d320(pvVar9);
    *puVar6 = &PTR_FUN_007e6060;
    *(undefined1 *)((int)puVar6 + 10) = 0;
    *(undefined2 *)puVar6[1] = 0xee;
    iVar2 = puVar6[1];
    *(undefined4 *)(iVar2 + 8) = DAT_0088f230;
    uStack_4 = CONCAT31(uStack_4._1_3_,0x15);
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f234;
    puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar6[1];
    *(undefined4 *)(iVar2 + 2) = *puVar10;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar10 + 1);
    iVar2 = puVar6[1];
    *puVar6 = &PTR_FUN_007e6040;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar7 + 0x10);
    *(int *)(puVar6[1] + 0x14) = iVar5;
  }
  uStack_4 = 0xffffffff;
  FUN_00565cc0(puVar6);
LAB_005f768c:
  if (iStack_20 == 0) {
    iVar5 = *param_1;
    iVar7 = FUN_00581e60();
    puVar6 = (undefined4 *)FUN_00581e60(*(undefined4 *)(iVar7 + 4));
    cVar3 = (**(code **)(iVar5 + 0x20))(*puVar6);
    if ((cVar3 != '\0') &&
       ((iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0xe || (iVar5 == 0x11)))) {
      iStack_20 = 3;
    }
  }
  ExceptionList = local_c;
  return iStack_20;
}


