// FUN_00568170 @ 568170 size=13304

int * FUN_00568170(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c78f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WaitForSingleObjectEx(DAT_00dc4b68,0xffffffff,0);
  uVar2 = (**(code **)(*param_1 + 8))();
  switch(uVar2) {
  case 0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056cc50(param_1);
    *piVar5 = (int)&PTR_FUN_007e949c;
    break;
  case 1:
    piVar5 = operator_new(0xc);
    uStack_4 = 1;
    goto LAB_00568202;
  case 2:
    piVar5 = operator_new(0xc);
    uStack_4 = 2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056ce50(param_1);
    *piVar5 = (int)&PTR_FUN_007e951c;
    break;
  case 3:
    piVar5 = operator_new(0xc);
    uStack_4 = 3;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d0b0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea2fc;
    break;
  case 4:
  case 7:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1c:
  case 0x50:
  case 0x9f:
  case 0xac:
  case 0x117:
  case 0x12e:
  case 0x12f:
  case 0x151:
    goto switchD_005681b0_caseD_4;
  case 5:
    piVar5 = operator_new(0xc);
    uStack_4 = 4;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056cf80(param_1);
    *piVar5 = (int)&PTR_FUN_007ea2dc;
    break;
  case 6:
    piVar5 = operator_new(0xc);
    uStack_4 = 5;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056cd80(param_1);
    *piVar5 = (int)&PTR_FUN_007ea2bc;
    break;
  case 8:
    piVar5 = operator_new(0xc);
    uStack_4 = 6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00574610(param_1);
    *piVar5 = (int)&PTR_FUN_007ea29c;
    break;
  case 9:
    piVar5 = operator_new(0xc);
    uStack_4 = 7;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d2c0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea27c;
    break;
  case 10:
  case 0x123:
    piVar5 = operator_new(0xc);
    uStack_4 = 10;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
LAB_0056a2e6:
    *piVar5 = (int)&PTR_FUN_007e3e5c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576880(param_1);
    *piVar5 = (int)&PTR_FUN_007e3e3c;
    break;
  case 0xb:
  case 299:
    piVar5 = operator_new(0xc);
    uStack_4 = 8;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d430(param_1);
    *piVar5 = (int)&PTR_FUN_007ea25c;
    break;
  case 0x15:
  case 0xd0:
  case 0xe2:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x8c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056f380(param_1);
    *piVar5 = (int)&PTR_FUN_007e6020;
    break;
  case 0x17:
  case 0x131:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00574210(param_1);
    *piVar5 = (int)&PTR_FUN_007e3dbc;
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572c40(param_1);
    *piVar5 = (int)&PTR_FUN_007e3e9c;
    break;
  case 0x1b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x9c;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x9d);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x19;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571200(param_1);
    *piVar5 = (int)&PTR_FUN_007e7618;
    break;
  case 0x25:
  case 0x26:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x1a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x1b);
    *piVar5 = (int)&PTR_FUN_007e77c4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576e40(param_1);
    *piVar5 = (int)&PTR_FUN_007e77a4;
    break;
  case 0x27:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x1c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571680(param_1);
    *piVar5 = (int)&PTR_FUN_007ea1bc;
    break;
  case 0x28:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x1d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x1e);
    *piVar5 = (int)&PTR_FUN_007ea19c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576ec0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea17c;
    break;
  case 0x29:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x1f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00570d60(param_1);
    *piVar5 = (int)&PTR_FUN_007e73ec;
    break;
  case 0x2a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x20;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x21);
    *piVar5 = (int)&PTR_FUN_007ea15c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576d80(param_1);
    *piVar5 = (int)&PTR_FUN_007ea13c;
    break;
  case 0x2b:
  case 0x2e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x23;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572420(param_1);
    *piVar5 = (int)&PTR_FUN_007ea11c;
    break;
  case 0x2c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb7;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xb8);
    *piVar5 = (int)&PTR_FUN_007e9afc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577040(param_1);
    *piVar5 = (int)&PTR_FUN_007e9adc;
    break;
  case 0x2d:
  case 0x38:
  case 0xe6:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x30;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x31);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x2f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x42;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005724f0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9fdc;
    break;
  case 0x30:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x24;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x25);
LAB_005688e8:
    *piVar5 = (int)&PTR_FUN_007e5e5c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576f80(param_1);
    *piVar5 = (int)&PTR_FUN_007e5370;
    break;
  case 0x31:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x26;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571f30(param_1);
    *piVar5 = (int)&PTR_FUN_007e5370;
    break;
  case 0x32:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x27;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x28);
      goto LAB_005688e8;
    }
    goto LAB_0056ad14;
  case 0x33:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x29;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572650(param_1);
    *piVar5 = (int)&PTR_FUN_007e959c;
    break;
  case 0x34:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x2a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x2b);
    *piVar5 = (int)&PTR_FUN_007e77e4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577100(param_1);
    *piVar5 = (int)&PTR_FUN_007e7804;
    break;
  case 0x35:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x2c;
    goto LAB_00569a54;
  case 0x36:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb9;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e5c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e62e0;
    break;
  case 0x37:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x2f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571430(param_1);
    *piVar5 = (int)&PTR_FUN_007ea0bc;
    break;
  case 0x39:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x32;
    goto LAB_00568b1f;
  case 0x3a:
  case 0x3b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x34;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x35);
    *piVar5 = (int)&PTR_FUN_007ea07c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577080(param_1);
    *piVar5 = (int)&PTR_FUN_007ea05c;
    break;
  case 0x3c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x36;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005725c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e7784;
    break;
  case 0x3d:
  case 0x3e:
  case 0x114:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x37;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x38);
LAB_00568c41:
    *piVar5 = (int)&PTR_FUN_007e6b6c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576dc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6b4c;
    break;
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x43:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x1ba:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x39;
    goto LAB_00569a54;
  case 0x42:
  case 100:
  case 0x65:
  case 0x79:
  case 0x7a:
  case 0x97:
  case 0x132:
  case 0x138:
  case 400:
  case 0x191:
  case 0x192:
  case 0x1a1:
  case 0x1a3:
  case 0x1a4:
  case 0x1aa:
  case 0x1bb:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xf;
    goto LAB_00568497;
  case 0x45:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x3e;
    goto LAB_00568497;
  case 0x49:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x3a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x3b);
    *piVar5 = (int)&PTR_FUN_007e63c4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005770c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e63a4;
    break;
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x51:
  case 0x52:
  case 0xf7:
  case 0xf8:
  case 0x1b3:
  case 0x1bd:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x3c;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x3d);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x4f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056c9f0(param_1);
    *piVar5 = (int)&PTR_FUN_007e5330;
    break;
  case 0x53:
  case 0x54:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x3f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d5d0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea03c;
    break;
  case 0x55:
  case 0x56:
  case 0x57:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x40;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x41);
    *piVar5 = (int)&PTR_FUN_007ea01c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577180(param_1);
    *piVar5 = (int)&PTR_FUN_007e9ffc;
    break;
  case 0x58:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x43;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572980(param_1);
    *piVar5 = (int)&PTR_FUN_007e9fbc;
    break;
  case 0x59:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x44;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x45);
      goto LAB_00568c41;
    }
    goto LAB_0056ad14;
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x46;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e1e0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9f9c;
    break;
  case 0x5f:
  case 0x60:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x47;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x48);
    *piVar5 = (int)&PTR_FUN_007e9f7c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576a80(param_1);
    *piVar5 = (int)&PTR_FUN_007e9f5c;
    break;
  case 0x61:
  case 0x62:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x93;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056cac0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6534;
    break;
  case 99:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x162:
  case 0x169:
  case 0x16a:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x1a5:
  case 0x1a6:
  case 0x1b9:
  case 0x1bc:
  case 0x205:
  case 0x206:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xfe;
    if (pvVar4 != (void *)0x0) {
      piVar5 = (int *)FUN_0056be00(param_1);
      break;
    }
    goto LAB_0056b492;
  case 0x66:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x49;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056ecc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e63e4;
    break;
  case 0x67:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x4a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x4b);
    *piVar5 = (int)&PTR_FUN_007e6444;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576b80(param_1);
    *piVar5 = (int)&PTR_FUN_007e6424;
    break;
  case 0x68:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x4c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056ee10(param_1);
    *piVar5 = (int)&PTR_FUN_007e9f3c;
    break;
  case 0x69:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x4d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x4e);
    *piVar5 = (int)&PTR_FUN_007e6484;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576bc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6464;
    break;
  case 0x6a:
    piVar5 = operator_new(0x12);
    uStack_4 = 0x12;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e340(param_1);
    *(undefined2 *)(piVar5 + 3) = 0;
    *(undefined4 *)((int)piVar5 + 0xe) = 0;
    *piVar5 = (int)&PTR_FUN_007e6100;
    break;
  case 0x6b:
  case 0x6d:
  case 0x70:
  case 0x71:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x14;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e470(param_1);
    *piVar5 = (int)&PTR_FUN_007e6140;
    break;
  case 0x6c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x15;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e820(param_1);
    *piVar5 = (int)&PTR_FUN_007e6180;
    break;
  case 0x6e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x16;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e910(param_1);
    *piVar5 = (int)&PTR_FUN_007ea1dc;
    break;
  case 0x6f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x13;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e650(param_1);
    *piVar5 = (int)&PTR_FUN_007ea1fc;
    break;
  case 0x7b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d6a0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea23c;
    break;
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x83:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x4f;
LAB_00568b1f:
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00570eb0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6b4c;
    break;
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x50;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x51);
    *piVar5 = (int)&PTR_FUN_007e7850;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576e00(param_1);
    *piVar5 = (int)&PTR_FUN_007e7830;
    break;
  case 0x84:
  case 0xa0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x76;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e150(param_1);
    *piVar5 = (int)&PTR_FUN_007e52d0;
    break;
  case 0x85:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x17;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572280(param_1);
    *piVar5 = (int)&PTR_FUN_007e875c;
    break;
  case 0x86:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x18;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572310(param_1);
    *piVar5 = (int)&PTR_FUN_007e87a8;
    break;
  case 0x87:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x73;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572050(param_1);
    *piVar5 = (int)&PTR_FUN_007e6080;
    break;
  case 0x88:
  case 0xa9:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571fc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e5fa0;
    break;
  case 0x89:
    piVar5 = operator_new(0xc);
    uStack_4 = 100;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x65);
    *piVar5 = (int)&PTR_FUN_007e6000;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576c80(param_1);
    *piVar5 = (int)&PTR_FUN_007e5fe0;
    break;
  case 0x8a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x62;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056de00(param_1);
    *piVar5 = (int)&PTR_FUN_007e9e5c;
    break;
  case 0x8b:
    piVar5 = operator_new(0xc);
    uStack_4 = 99;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572a50(param_1);
    *piVar5 = (int)&PTR_FUN_007e6734;
    break;
  case 0x8c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x66;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056dcd0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9e3c;
    break;
  case 0x8d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x67;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x68);
    *piVar5 = (int)&PTR_FUN_007e957c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576ac0(param_1);
    *piVar5 = (int)&PTR_FUN_007e955c;
    break;
  case 0x8e:
  case 0x10b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x69;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571dd0(param_1);
    *piVar5 = (int)&PTR_FUN_007e5310;
    break;
  case 0x8f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x6a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x6b);
    *piVar5 = (int)&PTR_FUN_007e78d0;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576f40(param_1);
    *piVar5 = (int)&PTR_FUN_007e78b0;
    break;
  case 0x90:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x6c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571e60(param_1);
    *piVar5 = (int)&PTR_FUN_007e9e1c;
    break;
  case 0x91:
  case 0x92:
  case 0x141:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x6d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x6e);
    *piVar5 = (int)&PTR_FUN_007e68a0;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576f00(param_1);
    *piVar5 = (int)&PTR_FUN_007e6880;
    break;
  case 0x93:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x6f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056dfb0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9dfc;
    break;
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x130:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xbd;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xbe);
LAB_0056a49c:
    *piVar5 = (int)&PTR_FUN_007e5f80;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005774c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e5f60;
    break;
  case 0x98:
  case 0x99:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x70;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056e080(param_1);
    *piVar5 = (int)&PTR_FUN_007e9ddc;
    break;
  case 0x9a:
  case 0x9b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x71;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x72);
    *piVar5 = (int)&PTR_FUN_007e60e0;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576a00(param_1);
    *piVar5 = (int)&PTR_FUN_007e60c0;
    break;
  case 0x9c:
  case 0x9d:
  case 0x9e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x74;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x75);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0xa1:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x79;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572cd0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6d68;
    break;
  case 0xa2:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xa1);
    *piVar5 = (int)&PTR_FUN_007e9c7c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577200(param_1);
    *piVar5 = (int)&PTR_FUN_007e9c5c;
    break;
  case 0xa3:
  case 0xa4:
  case 0xa5:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x7a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x7b);
    *piVar5 = (int)&PTR_FUN_007e6b6c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576dc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6b4c;
    break;
  case 0xa6:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x80;
    goto LAB_00569a54;
  case 0xa7:
  case 0x1d0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x81;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x82);
    *piVar5 = (int)&PTR_FUN_007e6794;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005771c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6774;
    break;
  case 0xa8:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x83;
    goto LAB_00569a54;
  case 0xaa:
  case 0xab:
  case 0xe5:
  case 0x16f:
  case 0x1a2:
  case 0x1ab:
  case 0x1ac:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f6:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x84;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x85);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0xad:
  case 0xf6:
  case 0x10d:
  case 0x10e:
  case 0x13d:
  case 0x187:
  case 0x1b4:
  case 0x1c0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x94;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x95);
    *piVar5 = (int)&PTR_FUN_007e53b8;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576900(param_1);
    *piVar5 = (int)&PTR_FUN_007e5398;
    break;
  case 0xae:
  case 0xaf:
  case 0xb0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x9a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x9b);
    *piVar5 = (int)&PTR_FUN_007e9cfc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576940(param_1);
    *piVar5 = (int)&PTR_FUN_007e9cdc;
    break;
  case 0xb1:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x9f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572e70(param_1);
    *piVar5 = (int)&PTR_FUN_007e9c9c;
    break;
  case 0xb2:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572f40(param_1);
    *piVar5 = (int)&PTR_FUN_007e9c3c;
    break;
  case 0xb3:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x9e;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573010(param_1);
    *piVar5 = (int)&PTR_FUN_007e9cbc;
    break;
  case 0xb4:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa3;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572d60(param_1);
    *piVar5 = (int)&PTR_FUN_007e9c1c;
    break;
  case 0xb5:
  case 0xb6:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa4;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xa5);
    *piVar5 = (int)&PTR_FUN_007e9bfc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576a40(param_1);
    *piVar5 = (int)&PTR_FUN_007e9bdc;
    break;
  case 0xb7:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x57;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x58);
    *piVar5 = (int)&PTR_FUN_007e66d4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576cc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e66b4;
    break;
  case 0xb8:
  case 0xb9:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x53;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056fe30(param_1);
    *piVar5 = (int)&PTR_FUN_007e6364;
    break;
  case 0xba:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x5d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x5e);
    *piVar5 = (int)&PTR_FUN_007e6bcc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576d40(param_1);
    *piVar5 = (int)&PTR_FUN_007e6bac;
    break;
  case 0xbb:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x5f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00570770(param_1);
    *piVar5 = (int)&PTR_FUN_007e9ebc;
    break;
  case 0xbc:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x60;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x61);
    *piVar5 = (int)&PTR_FUN_007e9e9c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576d00(param_1);
    *piVar5 = (int)&PTR_FUN_007e9e7c;
    break;
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xcf:
  case 0xe1:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x5c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00570160(param_1);
    *piVar5 = (int)&PTR_FUN_007e66f4;
    break;
  case 0xc0:
  case 0xcc:
  case 0xcd:
  case 0xde:
  case 0xdf:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x59;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056f7a0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6674;
    break;
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xd1:
  case 0xd2:
  case 0xd3:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x52;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056f5f0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6324;
    break;
  case 0xce:
  case 0xe0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x5a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x5b);
    *piVar5 = (int)&PTR_FUN_007e947c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576c40(param_1);
    *piVar5 = (int)&PTR_FUN_007e945c;
    break;
  case 0xd7:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x54;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x55);
    *piVar5 = (int)&PTR_FUN_007e9f1c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577600(param_1);
    *piVar5 = (int)&PTR_FUN_007e9efc;
    break;
  case 0xd8:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x56;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00574400(param_1);
    *piVar5 = (int)&PTR_FUN_007e9edc;
    break;
  case 0xe3:
  case 0x10a:
  case 0x18c:
  case 0x18d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x8f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056f000(param_1);
    *piVar5 = (int)&PTR_FUN_007e6968;
    break;
  case 0xe4:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x92;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056dac0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9d1c;
    break;
  case 0xe7:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x11;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056eaa0(param_1);
    *piVar5 = (int)&PTR_FUN_007e61c0;
    break;
  case 0xe8:
  case 0xe9:
  case 0xea:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x8d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x8e);
    *piVar5 = (int)&PTR_FUN_007e5f00;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576e80(param_1);
    *piVar5 = (int)&PTR_FUN_007e5ee0;
    break;
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x7c;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005720e0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6040;
    break;
  case 0xf4:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x7d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x7e);
    *piVar5 = (int)&PTR_FUN_007e95fc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577000(param_1);
    *piVar5 = (int)&PTR_FUN_007e95dc;
    break;
  case 0xf5:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x7f;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572170(param_1);
    *piVar5 = (int)&PTR_FUN_007e8cc0;
    break;
  case 0x10c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xae;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572ae0(param_1);
    *piVar5 = (int)&PTR_FUN_007e7288;
    break;
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005731b0(param_1);
    *piVar5 = (int)&PTR_FUN_007e742c;
    break;
  case 0x115:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb3;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005730e0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9b3c;
    break;
  case 0x116:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x8a;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x8b);
    *piVar5 = (int)&PTR_FUN_007e9d5c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005768c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9d3c;
    break;
  case 0x118:
  case 0x119:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa7;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xa8);
    *piVar5 = (int)&PTR_FUN_007e9bbc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577480(param_1);
    *piVar5 = (int)&PTR_FUN_007e9b9c;
    break;
  case 0x11a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb4;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0xb5);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x11f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xa9;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573e90(param_1);
    *piVar5 = (int)&PTR_FUN_007e9b7c;
    break;
  case 0x120:
  case 0x121:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xaa;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0xab);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x122:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xac;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0xad);
      goto LAB_0056a2e6;
    }
    goto LAB_0056ad14;
  case 0x124:
  case 0x125:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x33;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d990(param_1);
    *piVar5 = (int)&PTR_FUN_007ea09c;
    break;
  case 0x126:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xaf;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d770(param_1);
    *piVar5 = (int)&PTR_FUN_007e9b5c;
    break;
  case 0x127:
  case 0x128:
  case 0x129:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xb1);
    *piVar5 = (int)&PTR_FUN_007e6594;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576980(param_1);
    *piVar5 = (int)&PTR_FUN_007e6574;
    break;
  case 0x12a:
    piVar5 = operator_new(0xc);
    uStack_4 = 9;
LAB_00568202:
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056c440(param_1);
    *piVar5 = (int)&PTR_FUN_007e3e3c;
    break;
  case 300:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xb6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056f1b0(param_1);
    *piVar5 = (int)&PTR_FUN_007e9b1c;
    break;
  case 0x12d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x77;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x78);
    *piVar5 = (int)&PTR_FUN_007e9dbc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576c00(param_1);
    *piVar5 = (int)&PTR_FUN_007e9d9c;
    break;
  case 0x133:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xbf;
    goto LAB_00568497;
  case 0x134:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xc1);
    *piVar5 = (int)&PTR_FUN_007e9abc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577500(param_1);
    *piVar5 = (int)&PTR_FUN_007e9a9c;
    break;
  case 0x135:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00574100(param_1);
    *piVar5 = (int)&PTR_FUN_007e9a7c;
    break;
  case 0x136:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc3;
LAB_00568497:
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573f60(param_1);
    *piVar5 = (int)&PTR_FUN_007e5f60;
    break;
  case 0x137:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc4;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xc5);
    *piVar5 = (int)&PTR_FUN_007e9a5c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577540(param_1);
    *piVar5 = (int)&PTR_FUN_007e9a3c;
    break;
  case 0x139:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572760(param_1);
    *piVar5 = (int)&PTR_FUN_007e961c;
    break;
  case 0x13a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x2d;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x2e);
    *piVar5 = (int)&PTR_FUN_007ea0fc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577140(param_1);
    *piVar5 = (int)&PTR_FUN_007ea0dc;
    break;
  case 0x13b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xba;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xbb);
    *piVar5 = (int)&PTR_FUN_007e65d4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005769c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e65b4;
    break;
  case 0x13c:
  case 0x13f:
  case 0x140:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xbc;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056d8c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e65f4;
    break;
  case 0x13e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x22;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572870(param_1);
    *piVar5 = (int)&PTR_FUN_007e6e2c;
    break;
  case 0x148:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xda;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xdb);
    *piVar5 = (int)&PTR_FUN_007e97bc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576b40(param_1);
    *piVar5 = (int)&PTR_FUN_007e979c;
    break;
  case 0x149:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe3;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573a80(param_1);
    *piVar5 = (int)&PTR_FUN_007e975c;
    break;
  case 0x14a:
  case 0x14b:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xfd;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570020(param_1);
    break;
  case 0x14c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe4;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xe5);
    *piVar5 = (int)&PTR_FUN_007e973c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005773c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e971c;
    break;
  case 0x14d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573b90(param_1);
    *piVar5 = (int)&PTR_FUN_007e96fc;
    break;
  case 0x14e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe9;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573c60(param_1);
    *piVar5 = (int)&PTR_FUN_007e969c;
    break;
  case 0x14f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe7;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xe8);
    *piVar5 = (int)&PTR_FUN_007e96dc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577400(param_1);
    *piVar5 = (int)&PTR_FUN_007e96bc;
    break;
  case 0x150:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xea;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xeb);
    *piVar5 = (int)&PTR_FUN_007e967c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577440(param_1);
    *piVar5 = (int)&PTR_FUN_007e965c;
    break;
  case 0x152:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xec;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570670(param_1);
    break;
  case 0x153:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xee;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570900(param_1);
    break;
  case 0x154:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xef;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_005709e0(param_1);
    break;
  case 0x155:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf1;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570570(param_1);
    break;
  case 0x156:
  case 0x157:
  case 0x180:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf2;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570be0(param_1);
    break;
  case 0x158:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf4;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056f8f0(param_1);
    break;
  case 0x159:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf5;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056fc10(param_1);
    break;
  case 0x15a:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf6;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570330(param_1);
    break;
  case 0x15b:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf7;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570470(param_1);
    break;
  case 0x15c:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xfb;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_005700c0(param_1);
    break;
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x164:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x101;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_005701f0(param_1);
    break;
  case 0x163:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf8;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570290(param_1);
    break;
  case 0x165:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf9;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056f9f0(param_1);
    break;
  case 0x166:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xfa;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056fad0(param_1);
    break;
  case 0x167:
  case 0x168:
  case 0x1be:
  case 0x1bf:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xfc;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570ca0(param_1);
    break;
  case 0x16b:
  case 0x16c:
    piVar5 = operator_new(0xc);
    uStack_4 = 199;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,200);
    *piVar5 = (int)&PTR_FUN_007e9a1c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577240(param_1);
    *piVar5 = (int)&PTR_FUN_007e99fc;
    break;
  case 0x16d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xc9;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573530(param_1);
    *piVar5 = (int)&PTR_FUN_007e99dc;
    break;
  case 0x16e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xca;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xcb);
    *piVar5 = (int)&PTR_FUN_007e99bc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577300(param_1);
    *piVar5 = (int)&PTR_FUN_007e999c;
    break;
  case 0x170:
  case 0x171:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xcc;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573640(param_1);
    *piVar5 = (int)&PTR_FUN_007e997c;
    break;
  case 0x172:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xcd;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xce);
    *piVar5 = (int)&PTR_FUN_007e995c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577340(param_1);
    *piVar5 = (int)&PTR_FUN_007e993c;
    break;
  case 0x173:
  case 0x174:
  case 0x175:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xcf;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573750(param_1);
    *piVar5 = (int)&PTR_FUN_007e991c;
    break;
  case 0x176:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xd1);
    *piVar5 = (int)&PTR_FUN_007e98fc;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577380(param_1);
    *piVar5 = (int)&PTR_FUN_007e98dc;
    break;
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd2;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573860(param_1);
    *piVar5 = (int)&PTR_FUN_007e98bc;
    break;
  case 0x17b:
  case 0x17c:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd3;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573930(param_1);
    *piVar5 = (int)&PTR_FUN_007e989c;
    break;
  case 0x17d:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd6;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573460(param_1);
    *piVar5 = (int)&PTR_FUN_007e983c;
    break;
  case 0x17e:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xdc;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_005733d0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6ab8;
    break;
  case 0x17f:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xdd;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xde);
    *piVar5 = (int)&PTR_FUN_007e6bec;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005772c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e977c;
    break;
  case 0x181:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf3;
    goto LAB_0056b2ca;
  case 0x182:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd9;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573300(param_1);
    *piVar5 = (int)&PTR_FUN_007e97dc;
    break;
  case 0x183:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x96;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056c690(param_1);
    *piVar5 = (int)&PTR_FUN_007e6200;
    break;
  case 0x184:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x97;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x98);
    *piVar5 = (int)&PTR_FUN_007e6260;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_005775c0(param_1);
    *piVar5 = (int)&PTR_FUN_007e6240;
    break;
  case 0x185:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xdf;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056eb90(param_1);
    *piVar5 = (int)&PTR_FUN_007e6280;
    break;
  case 0x186:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xe0;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xe1);
    *piVar5 = (int)&PTR_FUN_007e6654;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576b00(param_1);
    *piVar5 = (int)&PTR_FUN_007e6634;
    break;
  case 0x188:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd7;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xd8);
    *piVar5 = (int)&PTR_FUN_007e981c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577280(param_1);
    *piVar5 = (int)&PTR_FUN_007e97fc;
    break;
  case 0x189:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xed;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570800(param_1);
    break;
  case 0x18a:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xf0;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00570a80(param_1);
    break;
  case 0x18b:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x90;
    if (piVar5 != (int *)0x0) {
      uVar3 = (**(code **)(*param_1 + 4))();
      pvVar4 = operator_new(uVar3 & 0xffff);
      FUN_0042d320(pvVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x91);
      goto LAB_0056a49c;
    }
LAB_0056ad14:
    piVar5 = (int *)0x0;
    break;
  case 0x18e:
  case 399:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x10;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00573ff0(param_1);
    *piVar5 = (int)&PTR_FUN_007ea21c;
    break;
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1b8:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0xff;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056bea0(param_1);
    break;
  case 0x1ad:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x89;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00572b70(param_1);
    *piVar5 = (int)&PTR_FUN_007e9d7c;
    break;
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x86;
LAB_00569a54:
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_00571f30(param_1);
    *piVar5 = (int)&PTR_FUN_007e5370;
    break;
  case 0x1b1:
  case 0x1b2:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x87;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x88);
    *piVar5 = (int)&PTR_FUN_007e93d4;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00576fc0(param_1);
    *piVar5 = (int)&PTR_FUN_007e93b4;
    break;
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x100;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056f090(param_1);
    break;
  case 0x1c1:
    piVar5 = operator_new(0xc);
    uStack_4 = 0x99;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    FUN_0056c7a0(param_1);
    *piVar5 = (int)&PTR_FUN_007e7bc4;
    break;
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cd:
  case 0x1cf:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x102;
    goto LAB_0056b2ca;
  case 0x1c5:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x103;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_0056d210(param_1);
    break;
  case 0x1cc:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x105;
    goto LAB_0056b1ee;
  case 0x1ce:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x104;
LAB_0056b1ee:
    if (pvVar4 != (void *)0x0) {
      piVar5 = (int *)FUN_0056d350(param_1);
      break;
    }
    goto LAB_0056b492;
  case 0x1f5:
    piVar5 = operator_new(0xc);
    uStack_4 = 0xd4;
    if (piVar5 == (int *)0x0) goto LAB_0056ad14;
    uVar3 = (**(code **)(*param_1 + 4))();
    pvVar4 = operator_new(uVar3 & 0xffff);
    FUN_0042d320(pvVar4);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xd5);
    *piVar5 = (int)&PTR_FUN_007e987c;
    *(undefined1 *)((int)piVar5 + 10) = 1;
    FUN_00577580(param_1);
    *piVar5 = (int)&PTR_FUN_007e985c;
    break;
  case 0x1f7:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x106;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571060(param_1);
    break;
  case 0x1f8:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x107;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571160(param_1);
    break;
  case 0x1f9:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x108;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_005712f0(param_1);
    break;
  case 0x1fa:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x109;
    goto LAB_0056b2fb;
  case 0x1fb:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10a;
LAB_0056b2ca:
    if (pvVar4 == (void *)0x0) {
LAB_0056b492:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0056d140(param_1);
    }
    break;
  case 0x1fc:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10b;
LAB_0056b2fb:
    if (pvVar4 != (void *)0x0) {
      piVar5 = (int *)FUN_00571390(param_1);
      break;
    }
    goto LAB_0056b492;
  case 0x1fd:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10c;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_005715e0(param_1);
    break;
  case 0x1fe:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10d;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571770(param_1);
    break;
  case 0x1ff:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10e;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571850(param_1);
    break;
  case 0x200:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x10f;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571950(param_1);
    break;
  case 0x201:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x110;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571a50(param_1);
    break;
  case 0x202:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x111;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571af0(param_1);
    break;
  case 0x203:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x112;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571b90(param_1);
    break;
  case 0x204:
    pvVar4 = operator_new(0xc);
    uStack_4 = 0x113;
    if (pvVar4 == (void *)0x0) goto LAB_0056b492;
    piVar5 = (int *)FUN_00571ca0(param_1);
    break;
  default:
    uVar2 = (**(code **)(*param_1 + 8))();
    FUN_00568040(s_Recieved_unsupported_event__d__g_00856dec,uVar2);
    goto switchD_005681b0_caseD_4;
  }
  uStack_4 = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    cVar1 = FUN_0042e8e0();
    if (cVar1 == '\0') {
      uVar2 = FUN_0056bda0();
      uVar2 = (**(code **)(*piVar5 + 8))(uVar2);
      FUN_00568040(s_Recieved__d___s__00856db0,uVar2);
    }
    else {
      uVar2 = FUN_0056bda0();
      uVar2 = (**(code **)(*piVar5 + 8))(uVar2);
      FUN_00462830(uVar2);
      uVar2 = FUN_00521150();
      FUN_00462830(uVar2);
      uVar2 = FUN_00521160();
      FUN_00462830(uVar2);
      uVar2 = FUN_0056bd90();
      FUN_00462830(uVar2);
      uVar2 = FUN_00549760();
      FUN_00568040(s__d__02d__02d__02d___Recieved__d___00856dc4,uVar2);
    }
    ReleaseMutex(DAT_00dc4b68);
    ExceptionList = pvStack_c;
    return piVar5;
  }
switchD_005681b0_caseD_4:
  ReleaseMutex(DAT_00dc4b68);
  uVar2 = (**(code **)(*param_1 + 8))();
  FUN_00429a50(s_Event__d_has_no_network_support__00856e24,uVar2);
  ExceptionList = pvStack_c;
  return (int *)0x0;
}


