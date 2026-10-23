// FUN_00589830 @ 589830 size=937

undefined4 __thiscall FUN_00589830(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  undefined2 local_28;
  undefined4 local_26;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c9578;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00589871:
  do {
    while (iVar3 = FUN_00535490(), iVar3 != 1) {
      piVar5 = (int *)FUN_00534391();
      if (*piVar5 == 4) {
        FUN_005343dc();
        if ((DAT_0088f28e == *(int *)(param_1 + 0xe)) && (DAT_0088f28c == *(short *)(param_1 + 0xc))
           ) {
          FUN_00428eb0(&local_28);
          local_28 = 0x1268;
          (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
        }
        local_20 = &PTR_LAB_007e378c;
        piVar5 = local_1c;
        while (piVar5 != (int *)0x0) {
          piVar1 = (int *)piVar5[2];
          FUN_00796cd8(piVar5);
          piVar5 = piVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar5 = local_1c;
    if ((DAT_00dc4b5e != '\0') && (iVar3 = param_2[1], iVar3 != 0xec)) {
      for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        cVar2 = (*(code *)local_20[3])(*piVar5,iVar3);
        if (cVar2 != '\0') {
          if (piVar5 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      piVar1 = local_18;
      iVar3 = param_2[1];
      local_18 = operator_new(0xe);
      if (local_18 == (int *)0x0) {
        local_18 = (int *)0x0;
      }
      else {
        *local_18 = iVar3;
        local_18[1] = (int)piVar1;
        local_18[2] = 0;
        *(undefined1 *)(local_18 + 3) = 0;
      }
      iVar3 = local_14 + 1;
      bVar6 = local_14 != 0;
      piVar5 = local_18;
      local_14 = iVar3;
      if (bVar6) {
        piVar1[2] = (int)local_18;
        piVar5 = local_1c;
      }
    }
    local_1c = piVar5;
    iVar3 = param_2[1];
    if (0x232 < iVar3) {
      if (iVar3 < 0x2a3) {
        if (iVar3 == 0x2a2) {
          fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x46) = (float)fVar7;
          goto LAB_00589871;
        }
        if (iVar3 == 0x233) {
          fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x32) = (float)fVar7;
          goto LAB_00589871;
        }
        if (iVar3 == 0x234) {
          fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x36) = (float)fVar7;
          goto LAB_00589871;
        }
        if (iVar3 == 0x235) {
          fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x2e) = (float)fVar7;
          goto LAB_00589871;
        }
      }
      else {
        if (iVar3 == 0x382) {
          fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x42) = (float)fVar7;
          goto LAB_00589871;
        }
        if (iVar3 == 0x523) {
          local_28 = 0;
          local_26 = 0;
          FUN_00427ed0(param_2);
          (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
          goto LAB_00589871;
        }
      }
switchD_00589962_caseD_ed:
      FUN_005349b0(s_Illegal_thingie_008579c0);
      local_20 = &PTR_LAB_007e378c;
      piVar5 = local_1c;
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        FUN_00796cd8(piVar5);
        piVar5 = piVar1;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    if (iVar3 != 0x232) {
      switch(iVar3) {
      case 0xec:
        if (*(int *)(param_1 + 0x16) == 0) {
          uVar4 = FUN_004af6b0(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x16) = uVar4;
        }
        else {
          uVar4 = FUN_004af6b0(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x1a) = uVar4;
        }
        goto LAB_00589871;
      default:
        goto switchD_00589962_caseD_ed;
      case 0xf6:
        fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x3e) = (float)fVar7;
        goto LAB_00589871;
      case 0x132:
        if (param_2[0x103] == 3) {
          FUN_0054f130(param_2);
          goto LAB_00589871;
        }
        break;
      case 0x141:
        if (param_2[0x103] == 0x147) {
          *(undefined4 *)(param_1 + 0x1e) = 0;
        }
        else if (param_2[0x103] == 0x14c) {
          *(undefined4 *)(param_1 + 0x1e) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x1e) = 2;
        }
        goto LAB_00589871;
      case 0x156:
        if (param_2[0x103] == 3) {
          FUN_0054f130(param_2);
          goto LAB_00589871;
        }
        break;
      case 0x166:
        *(bool *)(param_1 + 0x4b) = param_2[0x103] == 0x111;
        goto LAB_00589871;
      }
      FUN_005349b0(s_No_Left_Curly_00857a20);
      goto LAB_00589871;
    }
    fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
    *(float *)(param_1 + 0x3a) = (float)fVar7;
  } while( true );
}


