// FUN_005b4d80 @ 5b4d80 size=2372

undefined4 FUN_005b4d80(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined2 uStack_56;
  undefined2 uStack_54;
  uint uStack_4c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cbebf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar7 = FUN_0042e980();
  if (cVar7 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  iVar8 = (**(code **)(*param_1 + 8))();
  if (iVar8 < 0x141) {
    if (iVar8 == 0x140) {
      pvVar12 = operator_new(0xc);
      uStack_4 = 9;
      if (pvVar12 != (void *)0x0) {
        FUN_005b58c0();
        FUN_00449290();
        FUN_005b58c0();
        FUN_00449290();
        FUN_005b58c0();
        FUN_005b58c0();
        FUN_00446d10();
        FUN_005b58c0();
        FUN_00463ec0();
      }
    }
    else {
      switch(iVar8) {
      case 0x61:
        if ((&DAT_0089cad8)[*(int *)(param_1[1] + 0x16)] == 0) {
          ExceptionList = local_c;
          return 0;
        }
        cVar7 = FUN_004a0270();
        if ((cVar7 == '\0') && (*(char *)(param_1[1] + 0x1a) == '\0')) {
          ExceptionList = local_c;
          return 0;
        }
        pvVar12 = operator_new(0xc);
        uStack_4 = 0;
        if (pvVar12 != (void *)0x0) {
          FUN_005b58a0();
          FUN_0047ea00();
          FUN_00446d10();
          FUN_004638c0();
        }
        break;
      default:
        goto switchD_005b4ddb_caseD_62;
      case 0x9a:
        puVar9 = operator_new(0xc);
        uStack_4 = 8;
        if (puVar9 != (undefined4 *)0x0) {
          iVar8 = param_1[1];
          uVar13 = *(undefined4 *)(iVar8 + 0x1e);
          uVar5 = *(undefined4 *)(iVar8 + 0x16);
          uVar6 = *(undefined4 *)(iVar8 + 0x22);
          uVar2 = *(undefined4 *)(iVar8 + 0x12);
          uVar3 = *(undefined4 *)(iVar8 + 0x1a);
          uVar4 = *(undefined4 *)(iVar8 + 0xe);
          FUN_005b58d0();
          *puVar9 = &PTR_FUN_007e60c0;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar4;
          *(undefined4 *)(puVar9[1] + 0x12) = uVar2;
          *(undefined4 *)(puVar9[1] + 0x1a) = uVar3;
          *(undefined4 *)(puVar9[1] + 0x16) = uVar5;
          *(undefined4 *)(puVar9[1] + 0x1e) = uVar13;
          *(undefined4 *)(puVar9[1] + 0x22) = uVar6;
        }
        break;
      case 0xb5:
        puVar9 = operator_new(0xc);
        uStack_4 = 0xc;
        if (puVar9 != (undefined4 *)0x0) {
          iVar8 = param_1[1];
          uVar13 = *(undefined4 *)(iVar8 + 0xe);
          uVar5 = *(undefined4 *)(iVar8 + 0x16);
          uVar6 = *(undefined4 *)(iVar8 + 0x12);
          uStack_56 = (undefined2)uVar13;
          uStack_54 = (undefined2)((uint)uVar13 >> 0x10);
          puVar11 = operator_new(0x1a);
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
          }
          puVar9[1] = puVar11;
          *(undefined1 *)(puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 9) = 1;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *puVar11 = 0xb6;
          iVar8 = puVar9[1];
          uStack_4c = (uint)puVar9 & 0xff000000;
          *(uint *)(iVar8 + 8) = CONCAT22(uStack_56,3);
          *(undefined2 *)(iVar8 + 0xc) = uStack_54;
          iVar8 = puVar9[1];
          *(uint *)(iVar8 + 2) = uStack_4c;
          *(undefined2 *)(iVar8 + 6) = 0;
          *puVar9 = &PTR_FUN_007e9bdc;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          *(undefined4 *)(puVar9[1] + 0x12) = uVar6;
          *(undefined4 *)(puVar9[1] + 0x16) = uVar5;
        }
        break;
      case 0x13b:
        pvVar12 = operator_new(0xc);
        uStack_4 = 0xb;
        if (pvVar12 != (void *)0x0) {
          iVar8 = FUN_005b58b0();
          FUN_00446d10(iVar8 + 0x14);
          iVar8 = FUN_005b58b0();
          iVar8 = iVar8 + 0xe;
          iVar10 = FUN_005b58b0(iVar8);
          FUN_00463c90(0x13b,iVar10 + 0xe,iVar8);
        }
        break;
      case 0x13c:
        pvVar12 = operator_new(0xc);
        uStack_4 = 10;
        if (pvVar12 != (void *)0x0) {
          FUN_005b58c0();
          FUN_00449290();
          FUN_005b58c0();
          FUN_00449290();
          FUN_005b58c0();
          FUN_005b58c0();
          FUN_00446d10();
          FUN_005b58c0();
          FUN_00463ec0();
        }
        break;
      case 0x13d:
        iVar8 = FUN_00428ee0();
        if (iVar8 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        if (iVar8 == 8) {
          ExceptionList = local_c;
          return 0;
        }
        puVar9 = operator_new(0xc);
        uStack_4 = 4;
        if (puVar9 != (undefined4 *)0x0) {
          FUN_00498820();
          iVar10 = puVar9[1];
          *puVar9 = &PTR_FUN_007e5398;
          *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar8 + 4);
          *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar8 + 8);
          *(undefined4 *)(puVar9[1] + 0x14) = 0;
        }
      }
    }
  }
  else {
    switch(iVar8) {
    case 0x183:
      iVar8 = FUN_00428ee0();
      if (iVar8 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar8 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 2;
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = *(undefined4 *)(param_1[1] + 0x14);
        FUN_005b5810();
        iVar10 = puVar9[1];
        *puVar9 = &PTR_FUN_007e6200;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar8 + 4);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar8 + 8);
        *(undefined4 *)(puVar9[1] + 0x14) = uVar13;
      }
      break;
    case 0x184:
      iVar8 = FUN_00428ee0();
      if (iVar8 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar8 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 3;
      if (puVar9 != (undefined4 *)0x0) {
        iVar10 = param_1[1];
        uVar1 = *(undefined1 *)(iVar10 + 0x18);
        uVar13 = *(undefined4 *)(iVar10 + 0x1a);
        uVar5 = *(undefined4 *)(iVar10 + 0x14);
        FUN_005b5a10();
        iVar10 = puVar9[1];
        *puVar9 = &PTR_FUN_007e6240;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar8 + 4);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar8 + 8);
        *(undefined4 *)(puVar9[1] + 0x14) = uVar5;
        *(undefined1 *)(puVar9[1] + 0x18) = uVar1;
        *(undefined4 *)(puVar9[1] + 0x1a) = uVar13;
      }
      break;
    case 0x185:
      puVar9 = operator_new(0xc);
      uStack_4 = 6;
      if (puVar9 != (undefined4 *)0x0) {
        iVar8 = param_1[1];
        FUN_005b5970();
        iVar10 = puVar9[1];
        *puVar9 = &PTR_FUN_007e6280;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar8 + 0xe);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar8 + 0x12);
        iVar10 = puVar9[1];
        *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar8 + 0x14);
        *(undefined2 *)(iVar10 + 0x18) = *(undefined2 *)(iVar8 + 0x18);
      }
      break;
    case 0x186:
      iVar8 = FUN_00428460();
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + -8;
      }
      iVar10 = FUN_00428ee0();
      if (iVar10 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar10 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar8 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (*(int *)(iVar10 + 0xd0) != 0) {
        ExceptionList = local_c;
        return 0;
      }
      iVar8 = FUN_0075a2b0();
      if (iVar8 != 0) {
        ExceptionList = local_c;
        return 0;
      }
      pvVar12 = operator_new(0xc);
      uStack_4 = 7;
      if (pvVar12 != (void *)0x0) {
        FUN_005b5960();
        FUN_005b5960();
        FUN_00449290();
        FUN_005b5960();
        FUN_005b5960();
        FUN_005b5960();
        FUN_00464310();
      }
      break;
    case 0x187:
      iVar10 = FUN_00428ee0();
      if (iVar10 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar10 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 5;
      if (puVar9 != (undefined4 *)0x0) {
        FUN_00498820();
        iVar8 = puVar9[1];
        puVar14 = (undefined4 *)(iVar10 + 4);
        *puVar9 = &PTR_FUN_007e5398;
        uVar13 = *puVar14;
LAB_005b532d:
        *(undefined4 *)(iVar8 + 0xe) = uVar13;
        *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(puVar14 + 1);
        *(undefined4 *)(puVar9[1] + 0x14) = 0;
      }
      break;
    default:
      goto switchD_005b4ddb_caseD_62;
    case 0x1b4:
      iVar8 = FUN_00428ee0();
      if (iVar8 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      if (iVar8 == 8) {
        ExceptionList = local_c;
        return 0;
      }
      puVar9 = operator_new(0xc);
      uStack_4 = 1;
      if (puVar9 != (undefined4 *)0x0) {
        puVar14 = (undefined4 *)(iVar8 + 4);
        FUN_00498820();
        iVar8 = puVar9[1];
        *puVar9 = &PTR_FUN_007e5398;
        uVar13 = *puVar14;
        goto LAB_005b532d;
      }
    }
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0();
switchD_005b4ddb_caseD_62:
  ExceptionList = local_c;
  return 0;
}


