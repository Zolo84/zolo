// FUN_004721d0 @ 4721d0 size=1767

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004721d0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  void *pvVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  float10 fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char *local_28;
  char *local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar6 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bcdb8;
  local_c = ExceptionList;
  iVar1 = (&DAT_0089cad8)[param_3];
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0xc) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x39c8);
  iVar3 = *(int *)(param_1 + 0x120);
  ExceptionList = &local_c;
  fVar17 = (float10)FUN_00586a70();
  if ((float10)fVar2 - (float10)_DAT_00877564 * (float10)*(float *)(iVar3 + 0xb0a) <= fVar17) {
    ExceptionList = local_c;
    return;
  }
  iVar3 = *(int *)(param_1 + 6);
  if ((&DAT_00dc0fd4)[iVar3] == 0) {
    iVar8 = FUN_00586940();
    if ((iVar8 != 0) && (param_3 != iVar3)) {
      ExceptionList = local_c;
      return;
    }
    if ((0 < DAT_00dc18d8) && (cVar7 = FUN_0044b280(), cVar7 != '\0')) {
      if (DAT_00dc18d8 == 1) {
        if (param_2 == 1) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 3) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 5) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 6) {
          ExceptionList = local_c;
          return;
        }
      }
      else {
        if (param_2 == 1) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 3) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 5) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 6) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 4) {
          ExceptionList = local_c;
          return;
        }
        if (param_2 == 8) {
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  param_3 = _rand();
  if (param_3 == 0) {
    param_3 = 1;
  }
  iVar9 = FUN_004a5c40(param_2,iVar6);
  iVar10 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
  iVar8 = iVar9;
  if (iVar10 == 0) {
joined_r0x004724d8:
    if (iVar8 < 1) {
      ExceptionList = local_c;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x14)) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 1:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x18)) {
        ExceptionList = local_c;
        return;
      }
      iVar8 = FUN_004a6280();
      if (iVar8 == 10) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 2:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x20)) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 3:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x24)) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 4:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x28)) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 5:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x2c)) {
        ExceptionList = local_c;
        return;
      }
      iVar8 = *(int *)((&DAT_0089cad8)[iVar6] + 0x4652);
      goto joined_r0x004724d8;
    case 6:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x30)) {
        ExceptionList = local_c;
        return;
      }
      iVar8 = FUN_004a6380();
      if (iVar8 == 0) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 7:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x34)) {
        ExceptionList = local_c;
        return;
      }
      break;
    case 8:
      iVar8 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      if ((float)iVar9 < *(float *)(iVar8 + 0x38)) {
        ExceptionList = local_c;
        return;
      }
    }
  }
  bVar4 = param_3 % 100 < iVar9;
  iVar8 = _rand();
  bVar5 = DAT_00dc17ac < iVar8 % 100 + 1;
  if (DAT_00dc1908 != '\0') {
    fVar2 = *(float *)(param_1 + 0x39c8) -
            _DAT_00877564 * *(float *)(*(int *)(param_1 + 0x120) + 0xb0a);
    if (param_2 == 9) {
      if (iVar6 == iVar3) {
        dVar20 = (double)fVar2;
        dVar19 = (double)*(float *)(param_1 + 0x39c8);
        fVar17 = (float10)FUN_00586a70(9,0,iVar1);
        dVar18 = (double)fVar17;
        uVar11 = FUN_00451250(iVar3);
        uVar11 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar11,dVar18,dVar19,dVar20);
        uVar11 = FUN_00585d60(9,0,0,uVar11);
        FUN_00429710(s___s_S___s_Home____Level___d__Cos_0083cc84,uVar11);
        goto LAB_004726f1;
      }
    }
    else if (param_2 == 10) {
      dVar20 = (double)fVar2;
      dVar19 = (double)*(float *)(param_1 + 0x39c8);
      fVar17 = (float10)FUN_00586a70(10,0,iVar1);
      dVar18 = (double)fVar17;
      uVar11 = FUN_00451250(iVar3);
      uVar11 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar11,dVar18,dVar19,dVar20);
      uVar11 = FUN_00585d60(10,0,0,uVar11);
      FUN_00429710(s___s_S___s_Home_Chance___d___Leve_0083cc38,uVar11);
      goto LAB_004726f1;
    }
    local_28 = s_Undetected_0083cc2c;
    if (!bVar5) {
      local_28 = s_Detected_0083cc20;
    }
    local_24 = s_Succeeded_0083cc14;
    if (!bVar4) {
      local_24 = s_Failed_0083cc0c;
    }
    dVar20 = (double)fVar2;
    dVar19 = (double)*(float *)(param_1 + 0x39c8);
    fVar17 = (float10)FUN_00586a70(param_2,0,iVar1);
    dVar18 = (double)fVar17;
    uVar11 = FUN_00451250(iVar6);
    uVar12 = FUN_00451250(iVar3);
    uVar11 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))
                       (iVar9,local_24,local_28,uVar12,uVar11,dVar18,dVar19,dVar20);
    uVar11 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar11);
    uVar11 = FUN_00585d60(param_2,0,0,uVar11);
    FUN_00429710(s___s_S___s_T___s_Chance___d__s__s_0083cbac,uVar11);
  }
  if (10 < param_2) {
    if (iVar6 == iVar3) {
      puVar13 = operator_new(0xc);
      uStack_4 = 0x14;
      if (puVar13 != (undefined4 *)0x0) {
        pvVar14 = operator_new(0x1a);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x15);
        if (pvVar14 != (void *)0x0) {
          FUN_0042d6c0();
        }
        FUN_0042d320();
        *puVar13 = &PTR_FUN_007e62c0;
        *(undefined1 *)((int)puVar13 + 10) = 0;
        *(undefined2 *)puVar13[1] = 0x1c2;
        iVar1 = puVar13[1];
        *(undefined4 *)(iVar1 + 8) = DAT_0088f26c;
        *(undefined2 *)(iVar1 + 0xc) = DAT_0088f270;
        puVar15 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar1 = puVar13[1];
        *(undefined4 *)(iVar1 + 2) = *puVar15;
        *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar15 + 1);
        *puVar13 = &PTR_FUN_007e6020;
        *(int *)(puVar13[1] + 0xe) = iVar6;
        *(int *)(puVar13[1] + 0x12) = iVar3;
        *(undefined1 *)(puVar13[1] + 0x16) = 1;
        *(undefined1 *)(puVar13[1] + 0x17) = 0;
        *(undefined1 *)(puVar13[1] + 0x18) = 1;
      }
    }
    else {
      puVar13 = operator_new(0xc);
      uStack_4 = 0x16;
      if (puVar13 != (undefined4 *)0x0) {
        puVar16 = operator_new(0x1a);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x17);
        if (puVar16 == (undefined2 *)0x0) {
          puVar16 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d6c0();
        }
        puVar13[1] = puVar16;
        *(undefined1 *)(puVar13 + 2) = 0;
        *(undefined1 *)((int)puVar13 + 9) = 1;
        *puVar13 = &PTR_FUN_007e62c0;
        *(undefined1 *)((int)puVar13 + 10) = 0;
        *puVar16 = 0x1c2;
        iVar1 = puVar13[1];
        *(undefined4 *)(iVar1 + 8) = DAT_0088f26c;
        *(undefined2 *)(iVar1 + 0xc) = DAT_0088f270;
        puVar15 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar1 = puVar13[1];
        *(undefined4 *)(iVar1 + 2) = *puVar15;
        *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar15 + 1);
        *puVar13 = &PTR_FUN_007e6020;
        *(int *)(puVar13[1] + 0xe) = iVar6;
        *(int *)(puVar13[1] + 0x12) = iVar3;
        *(bool *)(puVar13[1] + 0x16) = bVar4;
        *(bool *)(puVar13[1] + 0x17) = bVar5;
        *(undefined1 *)(puVar13[1] + 0x18) = 1;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_00565bf0();
    ExceptionList = local_c;
    return;
  }
LAB_004726f1:
                    /* WARNING: Could not recover jumptable at 0x004726f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_00472ecc)[param_2])();
  return;
}


