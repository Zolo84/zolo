// FUN_006bb780 @ 6bb780 size=843

undefined4 __thiscall FUN_006bb780(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  float10 fVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d74e8;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006bb7c0:
  do {
    while (iVar2 = FUN_00535490(), iVar2 != 1) {
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        FUN_005343dc();
        while (local_1c != (int *)0x0) {
          piVar4 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar4;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar4 = local_1c;
    piVar3 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar2 = param_2[1];
      for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar4,iVar2);
        if (cVar1 != '\0') {
          if (piVar4 != (int *)0x0) {
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
      bVar5 = local_14 != 0;
      piVar4 = piVar3;
      local_14 = iVar2;
      if (bVar5) {
        local_18[2] = (int)piVar3;
        piVar4 = local_1c;
      }
    }
    local_18 = piVar3;
    local_1c = piVar4;
    iVar2 = param_2[1];
    if (0x93 < iVar2) {
      if (iVar2 != 0x24c) {
switchD_006bb899_default:
        FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
        while (local_1c != (int *)0x0) {
          piVar4 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar4;
        }
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x10) = (float)fVar6;
      goto LAB_006bb7c0;
    }
    if (iVar2 == 0x93) {
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x48) = (float)fVar6;
    }
    else {
      switch(iVar2) {
      case 0x56:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 4) = (float)fVar6;
        break;
      case 0x57:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 8) = (float)fVar6;
        break;
      case 0x58:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xc) = (float)fVar6;
        break;
      case 0x59:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x14) = (float)fVar6;
        break;
      case 0x5a:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x18) = (float)fVar6;
        break;
      case 0x5b:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x1c) = (float)fVar6;
        break;
      case 0x5c:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x20) = (float)fVar6;
        break;
      case 0x5d:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x24) = (float)fVar6;
        break;
      case 0x5e:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x28) = (float)fVar6;
        break;
      case 0x5f:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x2c) = (float)fVar6;
        break;
      case 0x60:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x30) = (float)fVar6;
        break;
      case 0x61:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x34) = (float)fVar6;
        break;
      case 0x62:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x38) = (float)fVar6;
        break;
      case 99:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x3c) = (float)fVar6;
        break;
      case 100:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x40) = (float)fVar6;
        break;
      case 0x65:
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x44) = (float)fVar6;
        break;
      default:
        goto switchD_006bb899_default;
      }
    }
  } while( true );
}


