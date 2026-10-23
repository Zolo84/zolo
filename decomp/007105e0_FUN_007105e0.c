// FUN_007105e0 @ 7105e0 size=4509

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_007105e0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined2 uStack_7e;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_60;
  int iStack_5e;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_50;
  undefined4 uStack_4e;
  undefined2 uStack_48;
  int iStack_46;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined2 uStack_30;
  int iStack_2e;
  undefined2 uStack_28;
  undefined4 uStack_26;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  undefined2 uStack_18;
  int iStack_16;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_8;
  int iStack_6;
  
  if ((*(char *)(param_2 + 0x150) != '\0') &&
     (cVar5 = (**(code **)(*(int *)(param_2 + 0x13e) + 0x30))
                        ((short)*(undefined4 *)(param_1 + 0x24)), cVar5 == '\0')) {
    return false;
  }
  iVar9 = *(int *)(param_2 + 0xc);
  if ((((iVar9 < 0) && (iVar8 = *(int *)(param_2 + 4), iVar8 != 0x1b)) && (iVar8 != 0x1c)) &&
     (iVar8 != 0x1d)) {
    return false;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (0x13d < uVar2) {
    return true;
  }
  uStack_66 = (undefined2)iVar9;
  uStack_7e = (undefined2)((uint)iVar9 >> 0x10);
  uStack_64 = uStack_7e;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_00711874)[uVar2]) {
  case 0:
    if (iVar9 < 1) {
      return false;
    }
    if (DAT_00877690 < iVar9) {
      return false;
    }
    iVar9 = FUN_004e9370(uStack_66);
    if (*(char *)(iVar9 + 0x180) != '\0') {
      return false;
    }
    iVar9 = FUN_004e9370((short)*(undefined4 *)(param_2 + 0xc));
    if (*(int *)(iVar9 + 0x3d4) == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x20) < 1) {
      return true;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      return true;
    }
    goto LAB_00710a7e;
  case 1:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    break;
  case 2:
    iVar8 = *(int *)(param_2 + 0x24);
    if (iVar8 < 1) {
      iVar9 = (&DAT_0089cad8)[iVar9];
      if (iVar9 == 0) {
        return false;
      }
      cVar5 = FUN_0044b300((short)*(undefined4 *)(iVar9 + 6));
      if (cVar5 != '\0') {
        return false;
      }
      cVar5 = FUN_0044b280((short)*(undefined4 *)(iVar9 + 6));
      bVar11 = cVar5 == '\0';
    }
    else {
      if (iVar8 == 1) {
        iVar9 = (**(code **)(**(int **)(DAT_00d615c2 + 0x22) + 4))();
        if (iVar9 < 1) {
          return true;
        }
        cVar5 = FUN_00584e20((short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 6));
      }
      else if (iVar8 == 2) {
        iVar9 = (**(code **)(**(int **)(DAT_00d615c6 + 0x22) + 4))();
        if (iVar9 < 1) {
          return true;
        }
        cVar5 = FUN_00584e20((short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 6));
      }
      else {
        if (iVar8 != 3) {
          return false;
        }
        iVar9 = (**(code **)(**(int **)(DAT_00d615ca + 0x22) + 4))();
        if (iVar9 < 1) {
          return true;
        }
        cVar5 = FUN_00584e20((short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 6));
      }
      if (cVar5 != '\0') {
        return false;
      }
      uVar6 = FUN_00584c90();
      cVar5 = FUN_0044b280(uVar6);
      bVar11 = cVar5 == '\0';
    }
    goto LAB_00710a95;
  case 3:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    iVar8 = *(int *)(param_2 + 0x10);
    if (iVar8 == 0) {
      if ((&DAT_00dc0fd4)[iVar9] == 0) {
        return true;
      }
      return false;
    }
    if (iVar8 == 1) {
      if ((&DAT_00dc0fd4)[iVar9] == 0) {
        return true;
      }
      cVar5 = FUN_0042e910();
      if (((cVar5 != '\0') && (DAT_00bd1500 != 0)) &&
         ((*(char *)(DAT_00bd1500 + 0x37b) != '\0' &&
          (*(int *)(DAT_00bd1500 + 0x3cc) == *(int *)(param_2 + 0xc))))) {
        return false;
      }
      bVar11 = *(int *)(DAT_00d0ca90 + 6) == *(int *)(param_2 + 0xc);
    }
    else {
      if (iVar8 != 2) {
        return true;
      }
      if ((&DAT_00dc0fd4)[iVar9] == 0) {
        return true;
      }
      cVar5 = FUN_0042e910();
      if (cVar5 == '\0') {
        return true;
      }
      if (DAT_00bd1500 == 0) {
        return true;
      }
      if (*(char *)(DAT_00bd1500 + 0x37b) == '\0') {
        return true;
      }
      bVar11 = *(int *)(DAT_00bd1500 + 0x3cc) == *(int *)(param_2 + 0xc);
    }
    goto LAB_007112be;
  case 4:
    uStack_10 = 6;
    iStack_e = iVar9;
    iVar9 = FUN_00428460((short)&uStack_10);
    if ((iVar9 == 0) || (iVar9 == 0xc)) {
      return false;
    }
    if (((*(int *)(iVar9 + 0x56) == 0) && (*(int *)(iVar9 + 0x52) == 0)) ||
       (*(char *)(iVar9 + 0x20) == '\0')) {
      return false;
    }
    if (*(char *)(iVar9 + 0x21) != '\0') {
      return false;
    }
    break;
  case 5:
    iVar9 = (&DAT_0089cad8)[iVar9];
    goto LAB_00711265;
  case 6:
    if (iVar9 < 1) {
      return false;
    }
    if (DAT_00877690 < iVar9) {
      return false;
    }
    iVar9 = FUN_004e9370(uStack_66);
    if (*(char *)(iVar9 + 0x180) != '\0') {
      return false;
    }
    iVar9 = FUN_004e9370((short)*(undefined4 *)(param_2 + 0xc));
    if (*(int *)(iVar9 + 0x3d4) == 0) {
      return false;
    }
    goto LAB_00710a7e;
  case 7:
    goto LAB_00710a82;
  case 8:
    if (*(int *)(param_2 + 0x24) < 1) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar9 = (&DAT_0089cad8)[*(int *)(param_2 + 0x24)];
    }
    if (iVar9 == 0) {
      return false;
    }
    cVar5 = (**(code **)(*(int *)(iVar9 + 0xe8b2) + 0x24))(uStack_66);
    if (cVar5 == '\0') {
      return true;
    }
    return false;
  case 9:
    if (*(int *)(param_2 + 0x24) < 1) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar9 = (&DAT_0089cad8)[*(int *)(param_2 + 0x24)];
    }
    if (iVar9 == 0) {
      return false;
    }
    cVar5 = (**(code **)(*(int *)(iVar9 + 0xe8b2) + 0x24))(uStack_66);
    if (cVar5 == '\0') {
      return false;
    }
    break;
  case 10:
    if (*(int *)(param_2 + 0x24) < 1) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar9 = (&DAT_0089cad8)[*(int *)(param_2 + 0x24)];
    }
    if (iVar9 == 0) {
      return false;
    }
    cVar5 = (**(code **)(*(int *)(iVar9 + 0xe8c4) + 0x24))(uStack_66);
    if (cVar5 != '\0') {
      return false;
    }
    break;
  case 0xb:
    if (*(int *)(param_2 + 0x24) < 1) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar9 = (&DAT_0089cad8)[*(int *)(param_2 + 0x24)];
    }
    if (iVar9 == 0) {
      return false;
    }
    cVar5 = (**(code **)(*(int *)(iVar9 + 0xe8c4) + 0x24))(uStack_66);
    if (cVar5 == '\0') {
      return false;
    }
    break;
  case 0xc:
    iVar7 = __ftol();
    iVar8 = *(int *)(DAT_00ab27b4 + 0x3d8 + iVar7 * 0x4b2);
    if (iVar8 == 0) {
      return false;
    }
    iVar7 = *(int *)(DAT_00ab27b4 + iVar7 * 0x4b2 + 0x3d4);
    if (iVar7 == 0) {
      return false;
    }
    iVar4 = *(int *)(param_2 + 0x20);
    if ((iVar4 < 0) && (iVar4 != -3)) {
      if ((iVar4 == -1) && (*(int *)(iVar8 + 6) == 0x157)) {
        return false;
      }
      return iVar8 != iVar7;
    }
    iVar4 = (&DAT_0089cad8)[iVar9];
    if (iVar4 == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x18) == 1) {
      iVar9 = *(int *)(param_1 + 0x24);
      if (iVar4 == iVar9) {
        return false;
      }
      if (iVar7 == iVar9) {
        return true;
      }
      if (iVar8 == iVar9) {
        return true;
      }
      return false;
    }
    if (*(int *)(param_2 + 0x18) != 2) {
      if ((iVar7 == *(int *)(param_1 + 0x24)) && (*(int *)(iVar8 + 6) == 0x157)) {
        return true;
      }
      if (iVar8 == *(int *)(param_1 + 0x24)) {
        return true;
      }
      if (iVar4 == iVar8) {
        return true;
      }
      return false;
    }
    if (*(int *)(iVar7 + 6) != iVar9) {
      return true;
    }
    bVar11 = *(int *)(iVar8 + 6) == iVar9;
    goto LAB_007112be;
  case 0xd:
    if ((*(int *)(param_2 + 0x20) < 0) && (*(int *)(param_2 + 0x20) != -3)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
      if ((&DAT_0089cad8)[iVar9] == 0) {
        return false;
      }
    }
    if (uVar2 == 0x1d) {
      iVar8 = __ftol();
      uVar3 = *(undefined4 *)((int)&DAT_008e977c + iVar8 * 0x12);
      uStack_68 = (undefined2)uVar3;
      uStack_66 = (undefined2)((uint)uVar3 >> 0x10);
    }
    else {
      iVar8 = __ftol();
      uVar3 = *(undefined4 *)((int)&DAT_008ea36c + iVar8 * 0x12);
      uStack_68 = (undefined2)uVar3;
      uStack_66 = (undefined2)((uint)uVar3 >> 0x10);
    }
    piVar10 = (int *)CONCAT22(uStack_66,uStack_68);
    if (piVar10 == (int *)0x0) {
      return false;
    }
    do {
      iVar8 = *(int *)(*piVar10 + 0x3d8);
      if ((iVar8 != 0) && (iVar7 = *(int *)(*piVar10 + 0x3d4), iVar7 != 0)) {
        if ((!bVar11) && (iVar8 != iVar7)) {
          return true;
        }
        if (*(int *)(param_2 + 0x18) == 1) {
          if ((bVar11) && (iVar4 = *(int *)(param_1 + 0x24), (&DAT_0089cad8)[iVar9] != iVar4)) {
            if (iVar7 == iVar4) {
              return true;
            }
            goto joined_r0x00710d77;
          }
        }
        else if (*(int *)(param_2 + 0x18) == 2) {
          if ((&DAT_0089cad8)[iVar9] != 0) {
            if (*(int *)(iVar7 + 6) != iVar9) {
              return true;
            }
            if (*(int *)(iVar8 + 6) != iVar9) {
              return true;
            }
          }
        }
        else {
          if ((iVar7 == *(int *)(param_1 + 0x24)) && (*(int *)(iVar8 + 6) == 0x157)) {
            return true;
          }
          if (iVar8 == *(int *)(param_1 + 0x24)) {
            return true;
          }
          iVar4 = (&DAT_0089cad8)[iVar9];
joined_r0x00710d77:
          if (iVar8 == iVar4) {
            return true;
          }
        }
      }
      piVar10 = (int *)piVar10[2];
      if (piVar10 == (int *)0x0) {
        return false;
      }
    } while( true );
  case 0xe:
    iVar8 = __ftol();
    if (*(int *)(DAT_00ab27b4 + 0x3d8 + iVar8 * 0x4b2) != *(int *)(param_1 + 0x24)) {
      return false;
    }
  case 0x1d:
    iVar9 = (&DAT_0089cad8)[iVar9];
    goto LAB_007112bc;
  case 0xf:
    if (iVar9 < 1) {
      return false;
    }
    if (DAT_00877690 < iVar9) {
      return false;
    }
    iVar9 = FUN_004e9370(uStack_66);
    if (*(char *)(iVar9 + 0x180) != '\0') {
      return false;
    }
LAB_00710a7e:
    uStack_66 = (undefined2)*(undefined4 *)(param_2 + 0xc);
LAB_00710a82:
    iVar9 = FUN_004e9370(uStack_66);
    bVar11 = *(int *)(iVar9 + 0x3d4) == *(int *)(param_1 + 0x24);
LAB_00710a95:
    if (!bVar11) {
      return false;
    }
    break;
  case 0x10:
    uStack_8 = 6;
    iStack_6 = iVar9;
    iVar9 = FUN_00428460((short)&uStack_8);
    if ((iVar9 == 0) || (iVar9 == 0xc)) {
      return false;
    }
    if ((*(int *)(iVar9 + 0x56) == 0) && (*(int *)(iVar9 + 0x52) == 0)) {
      return false;
    }
    if (*(char *)(iVar9 + 0x20) != '\0') {
      return false;
    }
    if (*(char *)(iVar9 + 0x21) != '\0') {
      return false;
    }
    break;
  case 0x11:
    uStack_68 = 9;
    iVar9 = FUN_00428ee0((short)&uStack_68);
    goto LAB_007112b2;
  case 0x12:
    uStack_68 = 9;
    iVar9 = FUN_00428ee0((short)&uStack_68);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 == 8) {
      return false;
    }
    piVar10 = (int *)FUN_00465ae0(uStack_68,uStack_64);
    cVar5 = (**(code **)(*piVar10 + 0x24))();
    bVar11 = cVar5 == '\0';
    goto LAB_007112be;
  case 0x13:
    uStack_30 = 10;
    iStack_2e = iVar9;
    iVar9 = FUN_00428ee0((short)&uStack_30);
    goto LAB_007112b2;
  case 0x14:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    cVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x450))(uStack_66,1);
    if (cVar5 != '\0') {
      return true;
    }
    return false;
  case 0x15:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    iVar9 = (&DAT_00dc0fd4)[*(int *)(*(int *)(param_1 + 0x24) + 6)];
LAB_00711265:
    if (iVar9 != 0) {
      return false;
    }
    break;
  case 0x16:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x12da) + iVar9 * 0x2c + 0x2c) != '\0') {
      return false;
    }
    break;
  case 0x17:
    uStack_60 = 6;
    iStack_5e = iVar9;
    iVar9 = FUN_00428460((short)&uStack_60);
    if (iVar9 == 0) {
      return false;
    }
    iVar9 = iVar9 + -0xc;
    goto LAB_007112bc;
  case 0x18:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if (*(float *)(param_2 + 8) < _DAT_007e3374) {
      return false;
    }
    break;
  case 0x19:
    if (iVar9 < 1) {
      return false;
    }
    break;
  case 0x1a:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    bVar11 = *(char *)(*(int *)((&DAT_0089cad8)[iVar9] + 0x12da) +
                      (*(int *)(*(int *)(param_1 + 0x24) + 6) + 1) * 0x2c) == '\0';
    goto LAB_007112be;
  case 0x1b:
    if (*(int *)(param_2 + 300) == 0) {
      return true;
    }
    iVar9 = (&DAT_0089cad8)[iVar9];
    goto LAB_007112bc;
  case 0x1c:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    cVar5 = FUN_005861a0((short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 6));
    if (cVar5 != '\0') {
      return false;
    }
    break;
  case 0x1e:
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    if (iVar9 < 1) {
      return false;
    }
    uStack_20 = uStack_66;
    uStack_1e = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_20);
    if ((iVar9 == 0) || (iVar9 == 0x14)) {
      return false;
    }
    goto LAB_00711222;
  case 0x1f:
    if (iVar9 < 1) {
      return false;
    }
    uStack_28 = uStack_66;
    uStack_26 = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_28);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 == 0x14) {
      return false;
    }
LAB_00711222:
    iVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0x24) + 0x4504) + 4))();
    if (iVar9 < 1) {
      return false;
    }
    break;
  case 0x20:
    iVar9 = *(int *)(param_2 + 0x14);
    if (iVar9 < 1) {
      return false;
    }
    if (DAT_00877690 < iVar9) {
      return false;
    }
    iVar9 = FUN_004e9370((short)iVar9);
    if (*(char *)(iVar9 + 0x180) != '\0') {
      return false;
    }
    if ((*(int *)(param_2 + 0xc) < 1) || (10 < *(int *)(param_2 + 0xc))) {
      return false;
    }
    break;
  case 0x21:
    uStack_58 = uStack_66;
    uStack_56 = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_58);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 + -8 == 0) {
      return false;
    }
    cVar5 = (**(code **)(DAT_00d77b76 + 0x24))((short)(iVar9 + -8));
    if (cVar5 != '\0') {
      return false;
    }
    iVar9 = *(int *)(iVar9 + 0x54);
    goto LAB_007112bc;
  case 0x22:
    uStack_50 = uStack_66;
    uStack_4e = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_50);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 == 8) {
      return false;
    }
    bVar11 = *(int *)(iVar9 + 0x54) == 0;
    goto LAB_007112be;
  case 0x23:
    if (iVar9 < 0) {
      return false;
    }
    uStack_18 = 0x11;
    uVar6 = SUB42(&uStack_18,0);
    iStack_16 = iVar9;
    goto LAB_007112ad;
  case 0x24:
    if (iVar9 < 0) {
      return false;
    }
    break;
  case 0x25:
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x3350) == 0) {
      return false;
    }
    break;
  case 0x26:
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar9 = (&DAT_0089cad8)[iVar9];
    }
    if (iVar9 == 0) {
      return false;
    }
    switch(*(undefined4 *)(param_2 + 0x24)) {
    case 0:
      if (*(int *)(iVar9 + 0x3350) == 0) {
        return false;
      }
      iVar9 = *(int *)(iVar9 + 6);
      iVar8 = FUN_00584c90();
      if (iVar8 == iVar9) {
        return false;
      }
      break;
    case 1:
      cVar5 = FUN_00584e20((short)*(undefined4 *)(iVar9 + 6));
      if (cVar5 == '\0') {
        return false;
      }
      iVar9 = *(int *)(iVar9 + 6);
      iVar8 = FUN_00584c90();
      if (iVar8 == iVar9) {
        return false;
      }
      break;
    case 2:
      cVar5 = FUN_00584e20((short)*(undefined4 *)(iVar9 + 6));
      if (cVar5 == '\0') {
        return false;
      }
      iVar9 = *(int *)(iVar9 + 6);
      iVar8 = FUN_00584c90();
      if (iVar8 == iVar9) {
        return false;
      }
      break;
    case 3:
      cVar5 = FUN_00584e20((short)*(undefined4 *)(iVar9 + 6));
      if (cVar5 == '\0') {
        return false;
      }
      iVar9 = *(int *)(iVar9 + 6);
      iVar8 = FUN_00584c90();
      if (iVar8 == iVar9) {
        return false;
      }
    }
    break;
  case 0x27:
    if ((3 < *(int *)(param_2 + 0x24)) || (*(int *)(param_2 + 0x24) < 1)) {
      return false;
    }
    break;
  case 0x28:
    bVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x12da) + 0x3b30) == 0;
    goto LAB_007112be;
  case 0x29:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if (*(int *)(*(int *)((&DAT_0089cad8)[iVar9] + 0x12da) + 0x3b30) !=
        *(int *)(*(int *)(param_1 + 0x24) + 6)) {
      return false;
    }
    break;
  case 0x2a:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x10) == 1) {
      cVar5 = FUN_005861a0(uStack_66);
      bVar11 = cVar5 == '\0';
    }
    else {
      cVar5 = FUN_005861a0((short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 6));
      bVar11 = cVar5 == '\0';
    }
    goto LAB_007112be;
  case 0x2b:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    cVar5 = FUN_005861c0((short)*(undefined4 *)((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] + 6));
    if (cVar5 != '\0') {
      return false;
    }
    break;
  case 0x2c:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    cVar5 = FUN_005861c0((short)*(undefined4 *)((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] + 6));
    bVar11 = cVar5 == '\0';
    goto LAB_007112be;
  case 0x2d:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    cVar5 = FUN_005861e0((short)*(undefined4 *)((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] + 6));
    if (cVar5 != '\0') {
      return false;
    }
    break;
  case 0x2e:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    cVar5 = FUN_005861e0((short)*(undefined4 *)((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] + 6));
    bVar11 = cVar5 == '\0';
    goto LAB_007112be;
  case 0x2f:
    if ((((&DAT_0089cad8)[iVar9] == 0) || ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0)) ||
       (piVar10 = DAT_00d615f6, DAT_00d615f6 == (int *)0x0)) {
      return false;
    }
    do {
      piVar1 = piVar10 + 2;
      iVar8 = *piVar10;
      if (*(int *)(iVar8 + 0x1e) == 0) {
        iVar7 = *(int *)((&DAT_0089cad8)[iVar9] + 6);
        if ((*(int *)(iVar8 + 0x1a) == iVar7) || (*(int *)(iVar8 + 0x16) == iVar7)) {
          iVar7 = *(int *)((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] + 6);
          if (*(int *)(iVar8 + 0x1a) == iVar7) {
            return true;
          }
          if (*(int *)(iVar8 + 0x16) == iVar7) {
            return true;
          }
        }
      }
      piVar10 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return false;
      }
    } while( true );
  case 0x30:
    if ((&DAT_0089cad8)[iVar9] == 0) {
      return false;
    }
  case 0x38:
    iVar9 = (&DAT_0089cad8)[*(int *)(param_2 + 0x14)];
LAB_007112bc:
    bVar11 = iVar9 == 0;
    goto LAB_007112be;
  case 0x31:
    uStack_48 = 0x11;
    uVar6 = SUB42(&uStack_48,0);
    iStack_46 = iVar9;
LAB_007112ad:
    iVar9 = FUN_00428460(uVar6);
LAB_007112b2:
    if (iVar9 == 0) {
      return false;
    }
    iVar9 = iVar9 + -8;
    goto LAB_007112bc;
  case 0x32:
    if (iVar9 < 1) {
      return false;
    }
    if (DAT_00877690 < iVar9) {
      return false;
    }
    iVar9 = FUN_004e9370(uStack_66);
    if (*(char *)(iVar9 + 0x180) != '\0') {
      return false;
    }
    iVar9 = FUN_004e9370((short)*(undefined4 *)(param_2 + 0xc));
    if (*(int *)(iVar9 + 0x3d8) != *(int *)(param_1 + 0x24)) {
      return false;
    }
    break;
  case 0x33:
    uStack_40 = uStack_66;
    uStack_3e = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_40);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 == 8) {
      return false;
    }
    if (*(char *)(iVar9 + 0x14d) != '\0') {
      return false;
    }
    break;
  case 0x34:
    uStack_38 = uStack_66;
    uStack_36 = __ftol();
    iVar9 = FUN_00428ee0((short)&uStack_38);
    if (iVar9 == 0) {
      return false;
    }
    if (iVar9 == 8) {
      return false;
    }
    bVar11 = *(char *)(iVar9 + 0x14d) == '\0';
    goto LAB_007112be;
  case 0x35:
    iVar9 = (&DAT_0089cad8)[iVar9];
    iVar8 = (&DAT_0089cad8)[*(int *)(param_2 + 0x14)];
    if (iVar9 == 0) {
      return false;
    }
    if (iVar8 == 0) {
      return false;
    }
    if (*(float *)(param_2 + 8) == _DAT_007e3374) {
      if (*(char *)(*(int *)(iVar9 + 6) + iVar8 + 0x34ac) != '\0') {
        return false;
      }
    }
    else if (*(char *)(*(int *)(iVar9 + 6) + 0x34ac + iVar8) == '\0') {
      return false;
    }
    break;
  case 0x36:
    if ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0) {
      return false;
    }
    break;
  case 0x37:
    if (((&DAT_0089cad8)[iVar9] == 0) || ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0)) {
      return false;
    }
    break;
  case 0x3a:
    if ((-1 < *(int *)(param_2 + 0x14)) && ((&DAT_0089cad8)[*(int *)(param_2 + 0x14)] == 0)) {
      return false;
    }
    switch(*(undefined4 *)(param_2 + 0x10)) {
    case 0:
      if ((*(float *)(param_2 + 8) <= _DAT_007e3380) ||
         ((float)DAT_00877690 < *(float *)(param_2 + 8))) {
        return false;
      }
      uVar6 = __ftol();
      iVar9 = FUN_004e9370(uVar6);
      if (*(char *)(iVar9 + 0x180) != '\0') {
        return false;
      }
      break;
    case 1:
      if ((*(float *)(param_2 + 8) <= _DAT_007e3380) || (_DAT_007f86c4 < *(float *)(param_2 + 8))) {
        return false;
      }
      break;
    case 2:
      if (*(float *)(param_2 + 8) <= _DAT_007e3380) {
        return false;
      }
      if (_DAT_007f86c0 < *(float *)(param_2 + 8)) {
        return false;
      }
      break;
    case 3:
      if (*(float *)(param_2 + 8) <= _DAT_007e3380) {
        return false;
      }
      if (_DAT_007e3844 < *(float *)(param_2 + 8)) {
        return false;
      }
      break;
    default:
      return false;
    }
    if ((*(char *)(param_2 + 0x13d) == '\0') && (*(int *)(param_2 + 0xc) < 0)) {
      return false;
    }
    if (DAT_0087769c < *(int *)(param_2 + 0xc)) {
      return false;
    }
    break;
  case 0x3b:
    if (iVar9 == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x24) < 1) {
      bVar11 = *(int *)(param_1 + 0x24) == 0;
    }
    else {
      bVar11 = (&DAT_0089cad8)[*(int *)(param_2 + 0x24)] == 0;
    }
LAB_007112be:
    if (bVar11) {
      return false;
    }
  }
  return true;
}


