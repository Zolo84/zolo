// FUN_005b7080 @ 5b7080 size=2307

/* WARNING: Removing unreachable block (ram,0x005b7903) */

undefined4 FUN_005b7080(int *param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cc0c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0042e980();
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 8))();
  if (0xee < iVar3) {
    switch(iVar3) {
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
      puVar9 = operator_new(0xc);
      uStack_4 = 9;
      goto LAB_005b7835;
    case 0xf3:
      iVar3 = FUN_00428ee0();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar3 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puStack_20 = (undefined4 *)0x0;
      uStack_4 = 10;
      FUN_004d5bf0();
      FUN_004d5be0();
      cVar2 = FUN_00431220();
      if (cVar2 != '\0') {
        uVar6 = FUN_004d5be0();
        puStack_20 = operator_new(0xe);
        if (puStack_20 == (undefined4 *)0x0) {
          puStack_20 = (undefined4 *)0x0;
        }
        else {
          *puStack_20 = uVar6;
          puStack_20[1] = 0;
          puStack_20[2] = 0;
          *(undefined1 *)(puStack_20 + 3) = 0;
        }
        pvVar5 = operator_new(0xc);
        uStack_4._0_1_ = 0xb;
        if (pvVar5 != (void *)0x0) {
          FUN_005668d0();
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,10);
        FUN_00565bc0();
      }
      while (puStack_20 != (undefined4 *)0x0) {
        puStack_20 = (undefined4 *)puStack_20[2];
        FUN_00796cd8();
      }
      ExceptionList = local_c;
      return 0;
    default:
      ExceptionList = local_c;
      return 0;
    case 0x10d:
      iVar3 = FUN_00428ee0();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar3 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 3;
      if (puVar9 != (undefined4 *)0x0) {
        FUN_00498820();
        iVar7 = puVar9[1];
        *puVar9 = &PTR_FUN_007e5398;
        *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar3 + 4);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar3 + 8);
        *(undefined4 *)(puVar9[1] + 0x14) = 0;
      }
LAB_005b7763:
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
      ExceptionList = local_c;
      return 0;
    case 0x147:
      iVar3 = FUN_00428ee0();
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar3 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 4;
      if (puVar9 != (undefined4 *)0x0) {
        iVar3 = param_1[1];
        uVar6 = *(undefined4 *)(iVar3 + 0x14);
        (**(code **)(*param_1 + 8))();
        FUN_004736e0();
        iVar7 = puVar9[1];
        *puVar9 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar3 + 0xe);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar3 + 0x12);
        *(undefined4 *)(puVar9[1] + 0x14) = uVar6;
      }
    }
    goto LAB_005b7805;
  }
  if (iVar3 == 0xee) {
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)(iVar3 + 0x126) < *(int *)(param_1[1] + 0x14)) {
      ExceptionList = local_c;
      return 0;
    }
    puVar9 = operator_new(0xc);
    uStack_4 = 8;
LAB_005b73d8:
    if (puVar9 == (undefined4 *)0x0) goto LAB_005b7805;
    iVar3 = param_1[1];
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    (**(code **)(*param_1 + 8))();
    goto LAB_005b73ed;
  }
  switch(iVar3) {
  case 0x40:
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 0x14) {
      ExceptionList = local_c;
      return 0;
    }
    iVar7 = (**(code **)(*(int *)(iVar3 + 0x108) + 4))();
    if (iVar7 != 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar9 = operator_new(0xc);
    uVar1 = DAT_0088f28c;
    uStack_4 = 0xc;
    if (puVar9 != (undefined4 *)0x0) {
      iVar7 = *(int *)(iVar3 + 0x234);
      uStack_3a = (undefined2)DAT_0088f28e;
      uStack_38 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      puVar8 = operator_new(0x20);
      uStack_4 = CONCAT31(uStack_4._1_3_,0xd);
      if (puVar8 == (undefined2 *)0x0) {
        puVar10 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar8[4] = 0;
        *(undefined4 *)(puVar8 + 5) = 0;
        puVar8[7] = 0;
        *(undefined4 *)(puVar8 + 8) = 0;
        puVar8[0xd] = 0;
        *(undefined4 *)(puVar8 + 0xe) = 0;
        puVar10 = puVar8;
      }
      puVar9[1] = puVar10;
      *(undefined1 *)(puVar9 + 2) = 0;
      *(undefined1 *)((int)puVar9 + 9) = 1;
      *puVar9 = &PTR_FUN_007e5e5c;
      *(undefined1 *)((int)puVar9 + 10) = 0;
      *puVar10 = 0x41;
      iVar4 = puVar9[1];
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 4);
      *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar7 + 8);
      iVar7 = puVar9[1];
      *(uint *)(iVar7 + 2) = (uint)puVar8 & 0xff000000;
      *(undefined2 *)(iVar7 + 6) = 0;
      iVar7 = puVar9[1];
      *puVar9 = &PTR_FUN_007e5370;
      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar3 + 4);
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar3 + 8);
      *(undefined1 *)(puVar9[1] + 0x14) = 1;
      *(undefined1 *)(puVar9[1] + 0x15) = 0;
      *(undefined4 *)(puVar9[1] + 0x16) = 0;
      iVar3 = puVar9[1];
      *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_3a,uVar1);
      *(undefined2 *)(iVar3 + 0x1e) = uStack_38;
    }
    goto LAB_005b7763;
  case 0x49:
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -0x14;
    }
    iVar7 = FUN_00428ee0();
    if (((((iVar7 != 0) && (iVar7 != 0x14)) &&
         (iVar4 = (**(code **)(*(int *)(iVar7 + 0x108) + 4))(), iVar4 == 0)) &&
        ((iVar3 != 0 && (iVar4 = (**(code **)(*(int *)(iVar3 + 0x11c) + 4))(), iVar4 == 0)))) &&
       (*(int *)(iVar7 + 0x234) == *(int *)(iVar3 + 0x248))) {
      if ((*(char *)(iVar3 + 0x17d) != '\0') || (*(char *)(iVar7 + 0x169) != '\0')) {
        ExceptionList = local_c;
        return 3;
      }
      *(undefined1 *)(iVar7 + 0x1e) = 1;
      iVar3 = *(int *)(iVar7 + 0x12);
      while (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 8);
        FUN_0045e6c0();
      }
      iVar3 = *(int *)(iVar7 + 0x12);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
      while (iVar3 != 0) {
        if (*(char *)(iVar3 + 0xc) == '\0') {
          iVar3 = *(int *)(iVar3 + 8);
        }
        else {
          iVar4 = *(int *)(iVar7 + 0xe);
          FUN_00499730();
          (**(code **)(iVar4 + 0x1c))();
        }
      }
      pvVar5 = operator_new(0xc);
      uStack_4 = 0;
      if (pvVar5 != (void *)0x0) {
        FUN_00447250();
        FUN_00449290();
        uVar6 = FUN_00447250();
        FUN_00449290(uVar6);
        FUN_00494b80();
        uVar6 = FUN_0045fec0();
        FUN_005b7c20(0x56,uVar6);
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
      pvVar5 = operator_new(0xc);
      uStack_4 = 1;
      if (pvVar5 != (void *)0x0) {
        FUN_00447250();
        FUN_00449290();
        uVar6 = FUN_00447250();
        FUN_00449290(uVar6);
        FUN_00494b80();
        uVar6 = FUN_0045fec0();
        FUN_005b7c20(0x55,uVar6);
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
      puVar9 = operator_new(0xc);
      uVar1 = DAT_0088f28c;
      uStack_4 = 2;
      if (puVar9 != (undefined4 *)0x0) {
        uStack_42 = (undefined1)DAT_0088f28e;
        uStack_41 = (undefined1)((uint)DAT_0088f28e >> 8);
        uStack_40 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        FUN_00458490();
        iVar3 = puVar9[1];
        *puVar9 = &PTR_FUN_007e5370;
        *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar7 + 4);
        *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar7 + 8);
        *(undefined1 *)(puVar9[1] + 0x14) = 1;
        *(undefined1 *)(puVar9[1] + 0x15) = 0;
        *(undefined4 *)(puVar9[1] + 0x16) = 0;
        iVar3 = puVar9[1];
        *(uint *)(iVar3 + 0x1a) = CONCAT13(uStack_41,CONCAT12(uStack_42,uVar1));
        *(undefined2 *)(iVar3 + 0x1e) = uStack_40;
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
    }
    break;
  case 0x57:
    FUN_00428ee0();
    FUN_00428ee0();
    FUN_00516cc0();
    FUN_00516f50();
    break;
  case 0xeb:
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = param_1[1];
    iVar7 = __ftol();
    if (iVar7 < *(int *)(iVar3 + 0x14)) {
      ExceptionList = local_c;
      return 0;
    }
    puVar9 = operator_new(0xc);
    uStack_4 = 5;
    goto LAB_005b73d8;
  case 0xec:
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = param_1[1];
    iVar7 = __ftol();
    if (iVar7 < *(int *)(iVar3 + 0x14)) {
      ExceptionList = local_c;
      return 0;
    }
    puVar9 = operator_new(0xc);
    uStack_4 = 6;
    goto LAB_005b7835;
  case 0xed:
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 8) {
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)(iVar3 + 0x12a) < *(int *)(param_1[1] + 0x14)) {
      ExceptionList = local_c;
      return 0;
    }
    puVar9 = operator_new(0xc);
    uStack_4 = 7;
LAB_005b7835:
    if (puVar9 != (undefined4 *)0x0) {
      iVar3 = param_1[1];
      uVar6 = *(undefined4 *)(iVar3 + 0x14);
      (**(code **)(*param_1 + 8))();
LAB_005b73ed:
      FUN_004736e0();
      *puVar9 = &PTR_FUN_007e6040;
      iVar7 = puVar9[1];
      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar3 + 0xe);
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar3 + 0x12);
      *(undefined4 *)(puVar9[1] + 0x14) = uVar6;
    }
LAB_005b7805:
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
  }
  ExceptionList = local_c;
  return 0;
}


