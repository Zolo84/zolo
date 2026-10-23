// FUN_006c88f0 @ 6c88f0 size=640

undefined4 __thiscall FUN_006c88f0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  float10 fVar9;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d89c8;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    while (iVar3 = FUN_00535490(), iVar3 != 1) {
      piVar7 = (int *)FUN_00534391();
      if (*piVar7 == 4) {
        FUN_005343dc();
        while (local_1c != (int *)0x0) {
          piVar7 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar7;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar7 = local_1c;
    piVar4 = local_18;
    if ((DAT_00dc4b5e != '\0') && (iVar3 = param_2[1], iVar3 != 0x500)) {
      for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
        cVar2 = (*(code *)PTR_FUN_007e3798)(*piVar7,iVar3);
        if (cVar2 != '\0') {
          if (piVar7 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar3 = param_2[1];
      piVar4 = operator_new(0xe);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = (int)local_18;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = local_14 + 1;
      bVar8 = local_14 != 0;
      piVar7 = piVar4;
      local_14 = iVar3;
      if (bVar8) {
        local_18[2] = (int)piVar4;
        piVar7 = local_1c;
      }
    }
    local_18 = piVar4;
    local_1c = piVar7;
    iVar3 = param_2[1];
    if (iVar3 == 0x500) {
      puVar5 = operator_new(0x42);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_007f725c;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        *(undefined1 *)(puVar5 + 0x10) = 0;
      }
      FUN_006c8f00(param_2);
      if (*(char *)(puVar5 + 0x10) == '\0') {
        iVar3 = *(int *)(param_1 + 0xc);
        puVar6 = operator_new(0xe);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = puVar5;
          puVar6[1] = iVar3;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0xc) = puVar6;
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(param_1 + 8) = puVar6;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar6;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x1e) = puVar5;
      }
    }
    else if (iVar3 == 0x502) {
      fVar9 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x16) = (float)fVar9;
    }
    else {
      if (iVar3 != 0x52c) {
        FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
        while (local_1c != (int *)0x0) {
          piVar7 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar7;
        }
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      fVar9 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x1a) = (float)fVar9;
    }
  } while( true );
}


