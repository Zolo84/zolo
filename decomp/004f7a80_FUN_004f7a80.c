// FUN_004f7a80 @ 4f7a80 size=1435

undefined4 __thiscall FUN_004f7a80(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c0d18;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_004f7ac0:
  while (iVar2 = FUN_00535490(), iVar2 != 1) {
    if (iVar2 == 2) {
      while (local_1c != (int *)0x0) {
        piVar6 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar6;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar6 = (int *)FUN_00534391();
    if (*piVar6 == 4) {
      FUN_005343dc();
      while (local_1c != (int *)0x0) {
        piVar6 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar6;
      }
      ExceptionList = local_c;
      return 0;
    }
    if (iVar2 == -1) {
      while (local_1c != (int *)0x0) {
        piVar6 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar6;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar6 = local_1c;
  piVar3 = local_18;
  if (DAT_00dc4b5e != '\0') {
    iVar2 = param_2[1];
    for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar6,iVar2);
      if (cVar1 != '\0') {
        if (piVar6 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    iVar2 = param_2[1];
    piVar3 = operator_new(0xe);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = iVar2;
      piVar3[1] = (int)local_18;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar2 = local_14 + 1;
    bVar7 = local_14 != 0;
    piVar6 = piVar3;
    local_14 = iVar2;
    if (bVar7) {
      local_18[2] = (int)piVar3;
      piVar6 = local_1c;
    }
  }
  local_18 = piVar3;
  local_1c = piVar6;
  iVar2 = param_2[1];
  if (iVar2 < 0x1b4) {
    if (iVar2 == 0x1b3) {
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x14) = (float)fVar8;
      goto LAB_004f7ac0;
    }
    switch(iVar2) {
    case 0xbf:
      uVar5 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      goto LAB_004f7ac0;
    case 0xc0:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xc) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc1:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x18) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc2:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x60) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc3:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 100) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc4:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x6c) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc5:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x68) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc6:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x1c) = (float)fVar8;
      goto LAB_004f7ac0;
    case 199:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x20) = (float)fVar8;
      goto LAB_004f7ac0;
    case 200:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x48) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xc9:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x44) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xca:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x4c) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xcb:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x50) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xcc:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x30) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xcd:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x54) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xce:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x58) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xcf:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x5c) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xd0:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x2c) = (float)fVar8;
      goto LAB_004f7ac0;
    case 0xd1:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x24) = (float)fVar8;
      goto LAB_004f7ac0;
    }
  }
  else {
    if (0x583 < iVar2) {
      switch(iVar2) {
      case 0x584:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xc6) = (float)fVar8;
        break;
      default:
        goto switchD_004f7ba1_default;
      case 0x586:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xce) = (float)fVar8;
        break;
      case 0x587:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xca) = (float)fVar8;
        break;
      case 0x66b:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x70) = (float)fVar8;
        break;
      case 0x677:
        if (param_2[0x103] == 3) {
          FUN_005056b0(param_2);
        }
        else {
          FUN_005349b0(s_no_left_curly_0083f20c);
        }
      }
      goto LAB_004f7ac0;
    }
    if (iVar2 == 0x583) {
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xc2) = (float)fVar8;
      goto LAB_004f7ac0;
    }
    if (0x361 < iVar2) {
      if (iVar2 == 0x580) {
        *(bool *)(param_1 + 0xbc) = param_2[0x103] == 0x111;
      }
      else {
        if (iVar2 != 0x582) goto switchD_004f7ba1_default;
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xbe) = (float)fVar8;
      }
      goto LAB_004f7ac0;
    }
    if (iVar2 == 0x361) {
      *(bool *)(param_1 + 0xbd) = param_2[0x103] == 0x111;
      goto LAB_004f7ac0;
    }
    if (iVar2 == 0x1dd) {
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x28) = (float)fVar8;
      goto LAB_004f7ac0;
    }
    if (iVar2 == 0x354) {
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x34) = (float)fVar8;
      goto LAB_004f7ac0;
    }
    if (iVar2 == 0x355) {
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x38) = (float)fVar8;
      goto LAB_004f7ac0;
    }
  }
switchD_004f7ba1_default:
  iVar2 = FUN_004fdae0(param_2 + 1);
  iVar4 = FUN_004fe160(param_2 + 1);
  if (iVar2 == 0x8c) {
    if (iVar4 == 0x8c) {
      FUN_005349b0(s_Unknown_Type_in_LandDivision_008494b0);
    }
    else {
      *(int *)(param_1 + 0xb4) = iVar4;
      uVar5 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
    }
  }
  else {
    *(int *)(param_1 + 0xb4) = iVar2;
    uVar5 = FUN_007a7b3c(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0xb8) = uVar5;
  }
  goto LAB_004f7ac0;
}


