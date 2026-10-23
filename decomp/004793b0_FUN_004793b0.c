// FUN_004793b0 @ 4793b0 size=1803

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004793b0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  undefined4 unaff_retaddr;
  undefined2 uVar15;
  undefined4 *apuStack_3c [2];
  undefined2 uStack_34;
  undefined4 uStack_32;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd07d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x14);
  if (iVar5 == 0) {
    ExceptionList = local_c;
    return 3;
  }
  piVar1 = (int *)(iVar5 + -8);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  cVar4 = (**(code **)(*piVar1 + 0x14))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*piVar1 + 0x18))();
    if (cVar4 != '\0') {
      iVar13 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x1a);
      if (iVar13 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(iVar13 + -8);
      }
      (**(code **)(*piVar6 + 0x20))
                (*(undefined4 *)(iVar5 + 0x52),*(undefined4 *)(iVar5 + 0x56),0xffffffff);
      iVar13 = *(int *)(iVar5 + 0x2c) + 1;
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      *(int *)(iVar5 + 0x2c) = iVar13;
      if (iVar13 != *(int *)(iVar5 + 0x28)) {
        ExceptionList = local_c;
        return 3;
      }
      (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(piVar1);
      (**(code **)*piVar1)(1);
      ExceptionList = local_c;
      return 3;
    }
    cVar4 = (**(code **)(*piVar1 + 0x1c))();
    if (cVar4 != '\0') {
      if (*(int *)(iVar5 + 0x52) == 0) {
        *(float *)(param_1 + 0x3a10) = (float)(int)DAT_00ad2e6c + *(float *)(param_1 + 0x3a10);
      }
      else {
        *(float *)(param_1 + 0x3a14) =
             (float)(int)(&DAT_00ad2e6c)[*(int *)(iVar5 + 0x52)] + *(float *)(param_1 + 0x3a14);
      }
      iVar13 = *(int *)(iVar5 + 0x2c) + 1;
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      *(int *)(iVar5 + 0x2c) = iVar13;
      iVar11 = *(int *)(iVar5 + 0x30) + -1;
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      *(int *)(iVar5 + 0x30) = iVar11;
      if (iVar13 != *(int *)(iVar5 + 0x28)) {
        ExceptionList = local_c;
        return 3;
      }
      if (0 < iVar11) {
        ExceptionList = local_c;
        return 3;
      }
      (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(piVar1);
      (**(code **)*piVar1)(1);
      ExceptionList = local_c;
      return 3;
    }
    iVar12 = FUN_004e9370(*(undefined4 *)(*(int *)(param_2 + 4) + 0x26));
    iVar13 = *(int *)(iVar5 + 0x52);
    iVar11 = *(int *)(iVar12 + 0x1c6 + iVar13 * 4);
    if (*(int *)(iVar11 + 0x18) == 0) {
      if (iVar13 == 6) {
        pvVar10 = operator_new(0x9c86);
        uStack_4 = 4;
        if (pvVar10 == (void *)0x0) goto LAB_00479983;
        iVar11 = FUN_004d1040();
      }
      else if (iVar13 == 7) {
        pvVar10 = operator_new(0x2e);
        uStack_4 = 5;
        if (pvVar10 == (void *)0x0) {
LAB_00479983:
          iVar11 = 0;
        }
        else {
          iVar11 = FUN_004d1390();
        }
      }
      else {
        pvVar10 = operator_new(0x1c);
        uStack_4 = 6;
        if (pvVar10 == (void *)0x0) goto LAB_00479983;
        iVar11 = FUN_004d0520();
      }
      uStack_4 = 0xffffffff;
      FUN_004d1010(*(undefined4 *)(iVar5 + 0x52));
      FUN_004ece60(*(undefined4 *)(iVar5 + 0x52),iVar11);
      *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar12 + 0x12);
    }
    apuStack_3c[0] = *(undefined4 **)(iVar11 + 0x10);
    fVar2 = *(float *)(&DAT_008eff64 + *(int *)(iVar5 + 0x52) * 4);
    fVar14 = (float10)FUN_004d0d40(*(int *)(iVar5 + 0x52));
    fVar14 = fVar14 - (float10)(float)apuStack_3c[0];
    if ((float10)fVar2 <= fVar14) {
      fVar14 = (float10)fVar2;
    }
    if (fVar14 <= (float10)_DAT_007e3380) {
      if (*(int *)(iVar5 + 0xe) != 0) {
        *(undefined4 *)(iVar5 + 0xe) = 0;
      }
    }
    else {
      fVar2 = (float)((float10)*(float *)(iVar11 + 0x10) + fVar14);
      fVar14 = (float10)FUN_004d0d40(*(undefined4 *)(iVar11 + 0x18));
      if ((float10)fVar2 <= fVar14) {
        fVar14 = (float10)fVar2;
      }
      else {
        fVar14 = (float10)FUN_004d0d40(*(undefined4 *)(iVar11 + 0x18));
      }
      *(float *)(iVar11 + 0x10) = (float)fVar14;
      if (fVar14 < (float10)_DAT_007e3380) {
        *(undefined4 *)(iVar11 + 0x10) = 0;
      }
      if (*(int *)(iVar5 + 0xe) != 0) {
        iVar13 = *(int *)(iVar5 + 0x2c) + 1;
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        *(int *)(iVar5 + 0x2c) = iVar13;
        FUN_0042dc20(*(undefined4 *)(iVar5 + 0x1c));
      }
      iVar13 = *(int *)(iVar5 + 0x30) + -1;
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      *(int *)(iVar5 + 0x30) = iVar13;
    }
    if (*(int *)(iVar5 + 0x2c) == *(int *)(iVar5 + 0x28)) {
      (**(code **)(*(int *)(iVar12 + 0x1a) + 0x18))(piVar1);
    }
    if (*(int *)(iVar5 + 0x2c) != *(int *)(iVar5 + 0x28)) {
      ExceptionList = local_c;
      return 3;
    }
    if (0 < *(int *)(iVar5 + 0x30)) {
      ExceptionList = local_c;
      return 3;
    }
    goto LAB_00479a89;
  }
  piVar6 = (int *)FUN_0044c3d0(*(undefined4 *)(iVar5 + 0x52),*(undefined4 *)(iVar5 + 0x5a));
  cVar4 = (**(code **)(*piVar6 + 0xc))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*piVar6 + 0x14))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar6 + 0x10))();
      if (cVar4 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      puVar8 = operator_new(0x300);
      uStack_4 = 2;
      apuStack_3c[0] = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
LAB_0047955d:
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004fb840();
        *puVar8 = &PTR_FUN_007e69a8;
        puVar8[2] = &PTR_LAB_007e6994;
        *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e698c;
        puVar7 = puVar8 + 0xb3;
        for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        *(undefined1 *)((int)puVar8 + 0x161) = 1;
      }
    }
    else {
      puVar8 = operator_new(0x2fc);
      uStack_4 = 1;
      apuStack_3c[0] = puVar8;
      if (puVar8 == (undefined4 *)0x0) goto LAB_0047955d;
      FUN_004fb840();
      *puVar8 = &PTR_FUN_007e6a00;
      puVar8[2] = &PTR_LAB_007e69ec;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e69e4;
      puVar8[0xb3] = 0;
      puVar7 = puVar8 + 0xb4;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar8[0xbd] = 0x7f7fffff;
      *(undefined1 *)(puVar8 + 0x58) = 1;
    }
  }
  else {
    puVar7 = operator_new(0x300);
    uStack_4 = 0;
    puVar8 = (undefined4 *)0x0;
    apuStack_3c[0] = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      FUN_004fb840();
      *puVar7 = &PTR_FUN_007e6a58;
      puVar7[2] = &PTR_LAB_007e6a44;
      *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e6a3c;
      puVar8 = puVar7 + 0xb3;
      for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)((int)puVar7 + 0x15f) = 1;
      puVar8 = puVar7;
    }
  }
  puVar8[0x17] = param_1;
  uStack_4 = 0xffffffff;
  (**(code **)(puVar8[2] + 4))(*(int *)(param_2 + 4) + 0x1a);
  uVar15 = 0;
  FUN_004fbc90(unaff_retaddr,0,0,1,0);
  uVar9 = (**(code **)(*piVar1 + 0xc))();
  FUN_00425ba0(uVar9);
  puVar8[0x4e] = *(undefined4 *)(iVar5 + 0x5a);
  iVar13 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x20);
  if ((iVar13 == 0) || (piVar6 = (int *)(iVar13 + -0x14), piVar6 == (int *)0x0)) {
    if (*(char *)((int)puVar8 + 0x15f) == '\0') {
      if (*(char *)(puVar8 + 0x58) == '\0') {
        if (*(char *)((int)puVar8 + 0x161) == '\0') {
          ExceptionList = local_c;
          return 0;
        }
        uStack_32 = DAT_0088f28e;
        uStack_2a = DAT_0088f28e;
        uStack_34 = DAT_0088f28c;
        uStack_2c = DAT_0088f28c;
        piVar6 = (int *)FUN_00446d30(*(undefined4 *)(*(int *)(param_2 + 4) + 0x26),
                                     *(int *)(param_2 + 4) + 0x20,
                                     *(undefined4 *)(DAT_00893530 + 0x14),
                                     CONCAT22(uVar15,*(undefined2 *)(DAT_00893530 + 0x18)),
                                     &uStack_2c,&uStack_34,&DAT_0088ebf8);
      }
      else {
        FUN_00446d10(&DAT_0088f28c);
        FUN_00446d10(&DAT_0088f28c);
        piVar6 = (int *)FUN_00446fc0(*(undefined4 *)(*(int *)(param_2 + 4) + 0x26),
                                     *(int *)(param_2 + 4) + 0x20,
                                     *(undefined4 *)(DAT_00893530 + 0x14),
                                     CONCAT22(uVar15,*(undefined2 *)(DAT_00893530 + 0x18)),
                                     auStack_14,auStack_1c,&DAT_0088ebf8);
      }
    }
    else {
      FUN_00446d10(&DAT_0088f28c);
      FUN_00446d10(&DAT_0088f28c);
      piVar6 = (int *)FUN_004469b0(*(undefined4 *)(*(int *)(param_2 + 4) + 0x26),
                                   *(int *)(param_2 + 4) + 0x20,*(undefined4 *)(DAT_00893530 + 0x14)
                                   ,CONCAT22(uVar15,*(undefined2 *)(DAT_00893530 + 0x18)),auStack_24
                                   ,apuStack_3c,&DAT_0088ebf8);
    }
  }
  iVar13 = *(int *)((int)piVar6 + 0x2a);
  pvVar10 = operator_new(0xe);
  uStack_4 = 3;
  if (pvVar10 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0045baf0(puVar8,iVar13,0);
  }
  iVar11 = *(int *)((int)piVar6 + 0x2e);
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)piVar6 + 0x2a) = uVar9;
  *(int *)((int)piVar6 + 0x2e) = iVar11 + 1;
  if (iVar11 == 0) {
    *(undefined4 *)((int)piVar6 + 0x26) = uVar9;
  }
  else {
    *(undefined4 *)(iVar13 + 8) = uVar9;
  }
  fVar3 = _DAT_007e4088;
  puVar8[0x1b] = piVar6;
  fVar2 = _DAT_007e4088;
  if ((float)puVar8[0x3c] < fVar3) {
    fVar2 = (float)puVar8[0x3c];
  }
  puVar8[0x3b] = fVar2;
  puVar8[0x3d] = 0;
  fVar2 = (*(float *)(*(int *)(param_1 + 0x244) + 0x86) - _DAT_007e3374) * _DAT_007e4088;
  if (fVar2 < _DAT_007e3380) {
    fVar2 = _DAT_007e3380;
  }
  puVar8[0x40] = fVar2;
  iVar13 = *(int *)(iVar5 + 0x2c) + 1;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  *(int *)(iVar5 + 0x2c) = iVar13;
  (**(code **)(*piVar6 + 0x94))();
  if (*(int *)(iVar5 + 0x2c) != *(int *)(iVar5 + 0x28)) {
    ExceptionList = local_c;
    return 3;
  }
LAB_00479a89:
  (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(piVar1);
  (**(code **)*piVar1)(1);
  ExceptionList = local_c;
  return 3;
}


