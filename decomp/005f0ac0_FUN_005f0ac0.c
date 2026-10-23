// FUN_005f0ac0 @ 5f0ac0 size=689

void __fastcall FUN_005f0ac0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ceb3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436060();
  iVar1 = *(int *)(param_1 + 0xc0);
  piVar4 = *(int **)(iVar1 + 4);
  while (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar4;
    piVar4 = (int *)piVar4[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  puVar2 = *(undefined4 **)(DAT_00d0ca90 + 0xe8a4);
joined_r0x005f0b35:
  do {
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004353e0();
      FUN_00436130();
      ExceptionList = pvStack_c;
      return;
    }
    puVar9 = (undefined4 *)puVar2[2];
    uVar6 = *puVar2;
    pvVar3 = operator_new(0x54);
    uStack_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uStack_24 = 0;
    }
    else {
      uStack_24 = FUN_005efbe0(uVar6);
    }
    uStack_4 = 0xffffffff;
    piVar4 = (int *)FUN_004e9370();
    for (iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 4); puVar2 = puVar9, iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 8)) {
      piVar5 = (int *)FUN_004e9370();
      switch(*(undefined4 *)(param_1 + 0xbc)) {
      case 0:
        (**(code **)(*piVar5 + 0xc))();
        uVar6 = (**(code **)(*piVar4 + 0xc))();
        iVar7 = FUN_007a8730(uVar6);
        if (iVar7 < 0) {
LAB_005f0cd5:
          FUN_00592460(uStack_24);
          goto joined_r0x005f0b35;
        }
        break;
      case 1:
        iVar7 = FUN_00527630();
        iVar8 = FUN_00527630();
        if (iVar7 < iVar8) goto LAB_005f0cd5;
        break;
      case 2:
        fVar10 = (float10)FUN_004ed0e0();
        fVar11 = (float10)FUN_004ed0e0();
        if (fVar11 < (float10)(float)fVar10) goto LAB_005f0cd5;
        break;
      case 3:
        fVar10 = (float10)FUN_004ec7e0();
        fVar11 = (float10)FUN_004ec900();
        fVar12 = (float10)FUN_004ec5a0();
        fVar13 = (float10)FUN_004ec6c0();
        fVar14 = (float10)FUN_004ec7e0();
        fVar15 = (float10)FUN_004ec900();
        fVar16 = (float10)FUN_004ec5a0();
        fVar17 = (float10)FUN_004ec6c0();
        if (fVar17 + (float10)(float)(fVar16 + (float10)(float)(fVar15 + (float10)(float)fVar14)) <
            (float10)(float)(fVar13 + (float10)(float)(fVar12 + (float10)(float)(fVar11 + (float10)(
                                                  float)fVar10)))) goto LAB_005f0cd5;
        break;
      case 4:
        if ((*(int *)((int)piVar4 + 0x1aa) != 0) && (*(int *)((int)piVar5 + 0x1aa) == 0))
        goto LAB_005f0cd5;
      }
    }
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar7 = *(int *)(iVar1 + 8);
    puVar9 = operator_new(0xe);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9[1] = iVar7;
      *puVar9 = uStack_24;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar8 = *(int *)(iVar1 + 0xc);
    *(undefined4 **)(iVar1 + 8) = puVar9;
    *(int *)(iVar1 + 0xc) = iVar8 + 1;
    if (iVar8 == 0) {
      *(undefined4 **)(iVar1 + 4) = puVar9;
    }
    else {
      *(undefined4 **)(iVar7 + 8) = puVar9;
    }
  } while( true );
}


