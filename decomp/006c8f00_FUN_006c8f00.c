// FUN_006c8f00 @ 6c8f00 size=937

undefined4 __thiscall FUN_006c8f00(int param_1,int *param_2)

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
  
  puStack_8 = &LAB_007d8a58;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006c8f40:
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
  if (iVar2 < 0x4fb) {
    if (iVar2 == 0x4fa) {
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x2c) = (float)fVar6;
      goto LAB_006c8f40;
    }
    if (iVar2 < 0x4f7) {
      if (iVar2 == 0x4f6) {
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x1c) = (float)fVar6;
        goto LAB_006c8f40;
      }
      if (iVar2 < 0x4f5) {
        if (iVar2 == 0x4f4) {
          fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x14) = (float)fVar6;
        }
        else if (iVar2 == 0xec) {
          iVar2 = FUN_004af6b0(param_2 + 0x104);
          *(int *)(param_1 + 4) = iVar2;
          if ((DAT_00dc4b5e != '\0') && (iVar2 == 0)) {
            FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0086b4dc,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
        else {
          if (iVar2 != 0x433) goto switchD_006c917d_caseD_4fe;
          fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 8) = (float)fVar6;
        }
        goto LAB_006c8f40;
      }
      if (iVar2 == 0x4f5) {
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x18) = (float)fVar6;
        goto LAB_006c8f40;
      }
    }
    else {
      if (iVar2 == 0x4f7) {
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x20) = (float)fVar6;
        goto LAB_006c8f40;
      }
      if (iVar2 == 0x4f8) {
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x24) = (float)fVar6;
        goto LAB_006c8f40;
      }
      if (iVar2 == 0x4f9) {
        fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x28) = (float)fVar6;
        goto LAB_006c8f40;
      }
    }
  }
  else {
    switch(iVar2) {
    case 0x4fb:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x30) = (float)fVar6;
      goto LAB_006c8f40;
    case 0x4fc:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x34) = (float)fVar6;
      goto LAB_006c8f40;
    case 0x4fd:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x38) = (float)fVar6;
      goto LAB_006c8f40;
    case 0x4ff:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x3c) = (float)fVar6;
      goto LAB_006c8f40;
    case 0x503:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x10) = (float)fVar6;
      goto LAB_006c8f40;
    case 0x506:
      *(bool *)(param_1 + 0x40) = param_2[0x103] == 0x111;
      goto LAB_006c8f40;
    case 0x52b:
      fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xc) = (float)fVar6;
      goto LAB_006c8f40;
    }
  }
switchD_006c917d_caseD_4fe:
  FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
  while (local_1c != (int *)0x0) {
    piVar4 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar4;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
}


