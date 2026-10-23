// FUN_004a0270 @ 4a0270 size=501

uint __thiscall FUN_004a0270(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (((param_3 < 0) || (9 < param_3)) ||
     (in_EAX = CONCAT31((int3)(in_EAX >> 8),(&DAT_00d56f2c)[param_2 * 3]),
     (&DAT_00d56f2c)[param_2 * 3] == '\0')) goto LAB_004a02d6;
  uVar2 = FUN_0044d810();
  switch(uVar2) {
  case 0:
    if (param_2 == 3) {
      bVar6 = SBORROW4(param_3,5);
      bVar5 = param_3 + -5 < 0;
      bVar4 = param_3 == 5;
      break;
    }
    if (param_2 != 2) goto switchD_004a029f_default;
    bVar6 = SBORROW4(param_3,1);
    bVar5 = param_3 + -1 < 0;
    bVar4 = param_3 == 1;
LAB_004a02bf:
    if (bVar4 || bVar6 != bVar5) goto switchD_004a029f_default;
    uVar2 = 2;
    goto LAB_004a02c7;
  case 1:
    if (param_2 != 3) {
LAB_004a041d:
      if (param_2 != 2) goto switchD_004a029f_default;
      bVar6 = SBORROW4(param_3,2);
      bVar5 = param_3 + -2 < 0;
      bVar4 = param_3 == 2;
      goto LAB_004a02bf;
    }
    bVar6 = SBORROW4(param_3,5);
    bVar5 = param_3 + -5 < 0;
    bVar4 = param_3 == 5;
    break;
  case 2:
    if (param_2 != 3) {
      if (param_2 != 2) goto switchD_004a029f_default;
      bVar6 = SBORROW4(param_3,4);
      bVar5 = param_3 + -4 < 0;
      bVar4 = param_3 == 4;
      goto LAB_004a02bf;
    }
    if ((5 < param_3) && (in_EAX = FUN_0044dc80(3), (int)in_EAX <= param_3)) goto LAB_004a02d6;
    if (0 < param_3) goto switchD_004a029f_default;
    uVar2 = 3;
    goto LAB_004a03ea;
  case 3:
    if (param_2 == 3) {
      if ((8 < param_3) && (in_EAX = FUN_0044dc80(3), (int)in_EAX <= param_3)) goto LAB_004a02d6;
      if (1 < param_3) goto switchD_004a029f_default;
      uVar2 = 3;
    }
    else {
      if (param_2 != 2) goto switchD_004a029f_default;
      if (param_3 < 8) {
        if (1 < param_3) goto switchD_004a029f_default;
        bVar5 = SBORROW4(param_3,2);
        bVar4 = param_3 + -2 < 0;
      }
      else {
        in_EAX = FUN_0044dc80(2);
        if ((int)in_EAX <= param_3) goto LAB_004a02d6;
        bVar5 = SBORROW4(param_3,2);
        bVar4 = param_3 + -2 < 0;
      }
LAB_004a03e6:
      if (bVar5 == bVar4) goto switchD_004a029f_default;
      uVar2 = 2;
    }
    goto LAB_004a03ea;
  case 4:
    if (param_2 != 3) {
LAB_004a038e:
      if (param_2 != 2) goto switchD_004a029f_default;
      bVar5 = SBORROW4(param_3,7);
      bVar4 = param_3 + -7 < 0;
      goto LAB_004a03e6;
    }
    bVar4 = SBORROW4(param_3,5);
    iVar1 = param_3 + -5;
    goto LAB_004a0384;
  case 5:
    if (param_2 != 3) goto LAB_004a038e;
    if ((7 < param_3) && (in_EAX = FUN_0044dc80(3), (int)in_EAX <= param_3)) goto LAB_004a02d6;
    bVar4 = SBORROW4(param_3,3);
    iVar1 = param_3 + -3;
LAB_004a0384:
    if (bVar4 == iVar1 < 0) goto switchD_004a029f_default;
    uVar2 = 3;
LAB_004a03ea:
    uVar3 = FUN_0044dc80(uVar2);
    if (param_3 <= (int)uVar3) {
      return uVar3 & 0xffffff00;
    }
    goto switchD_004a029f_default;
  case 6:
    if (param_2 != 3) {
      if (param_2 != 2) goto switchD_004a029f_default;
      if ((8 < param_3) && (in_EAX = FUN_0044dc80(2), (int)in_EAX <= param_3)) goto LAB_004a02d6;
      bVar5 = SBORROW4(param_3,4);
      bVar4 = param_3 + -4 < 0;
      goto LAB_004a03e6;
    }
    bVar6 = SBORROW4(param_3,5);
    bVar5 = param_3 + -5 < 0;
    bVar4 = param_3 == 5;
    break;
  case 7:
    if (param_2 != 3) {
      if (param_2 != 2) goto switchD_004a029f_default;
      bVar6 = SBORROW4(param_3,5);
      bVar5 = param_3 + -5 < 0;
      bVar4 = param_3 == 5;
      goto LAB_004a02bf;
    }
    bVar6 = SBORROW4(param_3,5);
    bVar5 = param_3 + -5 < 0;
    bVar4 = param_3 == 5;
    break;
  case 8:
    if (param_2 != 3) goto LAB_004a041d;
    bVar6 = SBORROW4(param_3,3);
    bVar5 = param_3 + -3 < 0;
    bVar4 = param_3 == 3;
    break;
  case 9:
    if (param_2 == 3) {
      bVar6 = SBORROW4(param_3,1);
      bVar5 = param_3 + -1 < 0;
      bVar4 = param_3 == 1;
      break;
    }
    if ((param_2 != 2) || (param_3 < 2)) goto switchD_004a029f_default;
    in_EAX = FUN_0044dc80(2);
    goto joined_r0x004a044e;
  default:
    goto switchD_004a029f_default;
  }
  if (!bVar4 && bVar6 == bVar5) {
    uVar2 = 3;
LAB_004a02c7:
    in_EAX = FUN_0044dc80(uVar2);
joined_r0x004a044e:
    if ((int)in_EAX <= param_3) {
LAB_004a02d6:
      return in_EAX & 0xffffff00;
    }
  }
switchD_004a029f_default:
  uVar3 = (**(code **)(**(int **)(param_1 + 0x244) + 8))();
  return uVar3;
}


