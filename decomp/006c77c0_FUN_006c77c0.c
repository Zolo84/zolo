// FUN_006c77c0 @ 6c77c0 size=1357

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006c77c0(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d8893;
  local_c = ExceptionList;
  bVar2 = false;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    while (iVar4 = FUN_00535490(), iVar4 != 1) {
      piVar9 = (int *)FUN_00534391();
      if (*piVar9 == 4) {
        FUN_005343dc();
        while (local_1c != (int *)0x0) {
          piVar9 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar9;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar9 = local_1c;
    piVar5 = local_18;
    if ((DAT_00dc4b5e != '\0') && (iVar4 = param_2[1], iVar4 != 0x4de)) {
      for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
        cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar9,iVar4);
        if (cVar3 != '\0') {
          if (piVar9 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar4 = param_2[1];
      piVar5 = operator_new(0xe);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
        piVar5[1] = (int)local_18;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar4 = local_14 + 1;
      bVar10 = local_14 != 0;
      piVar9 = piVar5;
      local_14 = iVar4;
      if (bVar10) {
        local_18[2] = (int)piVar5;
        piVar9 = local_1c;
      }
    }
    local_18 = piVar5;
    local_1c = piVar9;
    switch(param_2[1]) {
    case 0x4c0:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x10) = (float)fVar11;
      break;
    case 0x4c1:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x14) = (float)fVar11;
      break;
    case 0x4c2:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x18) = (float)fVar11;
      break;
    case 0x4c3:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x1c) = (float)fVar11;
      break;
    case 0x4c4:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x20) = (float)fVar11;
      break;
    case 0x4c5:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x24) = (float)fVar11;
      break;
    case 0x4c6:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x28) = (float)fVar11;
      break;
    case 0x4c7:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x2c) = (float)fVar11;
      break;
    case 0x4c8:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x30) = (float)fVar11;
      break;
    case 0x4c9:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x34) = (float)fVar11;
      break;
    case 0x4ca:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x38) = (float)fVar11;
      break;
    case 0x4cb:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x3c) = (float)fVar11;
      break;
    case 0x4cc:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x40) = (float)fVar11;
      break;
    case 0x4cd:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x44) = (float)fVar11;
      break;
    case 0x4ce:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x48) = (float)fVar11;
      break;
    case 0x4cf:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x50) = (float)fVar11;
      break;
    case 0x4d0:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x4c) = (float)fVar11;
      break;
    case 0x4d1:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x54) = (float)fVar11;
      break;
    case 0x4d2:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x58) = (float)fVar11;
      break;
    case 0x4d3:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x5c) = (float)fVar11;
      break;
    case 0x4d4:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x60) = (float)fVar11;
      break;
    case 0x4d5:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 100) = (float)fVar11;
      break;
    case 0x4d6:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x68) = (float)fVar11;
      break;
    case 0x4d7:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x6c) = (float)fVar11;
      break;
    case 0x4d8:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x70) = (float)fVar11;
      break;
    case 0x4d9:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x74) = (float)fVar11;
      break;
    case 0x4da:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x78) = (float)(fVar11 * (float10)_DAT_007e4088);
      break;
    case 0x4db:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 4) = (float)fVar11;
      break;
    case 0x4dc:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 8) = (float)fVar11;
      break;
    case 0x4dd:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xc) = (float)fVar11;
      break;
    case 0x4de:
      if (!bVar2) {
        piVar9 = *(int **)(param_1 + 0x80);
        while (piVar9 != (int *)0x0) {
          piVar5 = (int *)piVar9[2];
          if ((int *)*piVar9 != (int *)0x0) {
            (**(code **)(*(int *)*piVar9 + 8))(1);
          }
          FUN_00796cd8(piVar9);
          piVar9 = piVar5;
        }
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
        bVar2 = true;
      }
      pvVar6 = operator_new(0xba);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00667790();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00669270(param_2);
      iVar4 = *(int *)(param_1 + 0x84);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar7;
        puVar8[1] = iVar4;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x88);
      *(undefined4 **)(param_1 + 0x84) = puVar8;
      *(int *)(param_1 + 0x88) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(param_1 + 0x80) = puVar8;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar8;
      }
      iVar4 = DAT_00893530;
      *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(DAT_00893530 + 0x14);
      *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(iVar4 + 0x18);
      break;
    default:
      FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
      while (local_1c != (int *)0x0) {
        piVar9 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar9;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
  } while( true );
}


