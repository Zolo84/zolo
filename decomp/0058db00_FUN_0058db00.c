// FUN_0058db00 @ 58db00 size=817

undefined4 __thiscall FUN_0058db00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  float unaff_EBX;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 unaff_retaddr;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_34;
  undefined4 *local_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c9ac8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0058ee40(param_2);
  local_34 = 0;
  iVar10 = 100;
  iVar7 = (**(code **)(**(int **)((int)param_1 + 0x12e) + 0x28))(&local_28);
  iVar7 = *(int *)(iVar7 + 4) + 0x18;
  piVar2 = (int *)param_1[0x47];
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar2 = (int *)*piVar2;
    local_34 = piVar2[0x6d] + -1;
    if (unaff_EBX < *(float *)((int)piVar2 + 0x1ca)) {
      unaff_EBX = *(float *)((int)piVar2 + 0x1ca);
    }
    if (0x334 < iVar10) {
      iVar10 = 100;
      iVar7 = iVar7 + 0x14;
    }
    uVar9 = *(undefined4 *)((int)param_1 + 0x136);
    *(int *)((int)piVar2 + 0x1c2) = *(int *)((int)param_1 + 0x132) + 3;
    *(undefined4 *)((int)piVar2 + 0x1c6) = uVar9;
    (**(code **)(*piVar2 + 0x18))(iVar10,iVar7);
    iVar10 = iVar10 + 0x9d;
    piVar2 = piVar1;
  }
  fVar12 = (float10)(**(code **)(*param_1 + 0x50))();
  if ((float10)unaff_EBX < fVar12) {
    fVar12 = (float10)(**(code **)(*param_1 + 0x50))();
    unaff_EBX = (float)fVar12;
  }
  iVar10 = FUN_00415be0();
  puVar11 = (undefined4 *)param_1[0x47];
  while (puVar11 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar11[2];
    piVar2 = (int *)*puVar11;
    cVar6 = FUN_00433910();
    if (cVar6 != '\0') {
      FUN_0058d670(0,local_34,(float)(iVar10 + -0x2f) / unaff_EBX);
    }
    (**(code **)(*piVar2 + 0x10))(unaff_retaddr);
    puVar11 = puVar3;
  }
  (**(code **)(**(int **)((int)param_1 + 0x12e) + 0x10))(unaff_retaddr);
  (**(code **)(**(int **)((int)param_1 + 0x12a) + 0x10))(unaff_retaddr);
  local_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  iStack_20 = 0;
  uStack_1c = 0;
  uStack_10 = 0;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  puStack_8 = (undefined1 *)0x0;
  iVar10 = 5;
  do {
    pvVar8 = operator_new(0x100);
    iVar7 = *param_1;
    uVar9 = __ftol();
    (**(code **)(iVar7 + 0x4c))(pvVar8,uVar9);
    bVar4 = true;
    puVar11 = local_28;
    if (local_28 == (undefined4 *)0x0) {
LAB_0058dcef:
      uVar15 = 0;
      uVar9 = (&DAT_00857fd4)[(int)puStack_8];
      uVar14 = 0xffff;
      uVar13 = DAT_00bd1bac;
      iVar7 = FUN_004129c4(pvVar8);
      FUN_004133fd(pvVar8,100 - iVar7,uVar9,uVar13,uVar14,uVar15);
    }
    else {
      do {
        puVar3 = (undefined4 *)puVar11[2];
        iVar7 = FUN_007a8730(pvVar8,*puVar11);
        if (iVar7 == 0) {
          bVar4 = false;
        }
        puVar11 = puVar3;
      } while (puVar3 != (undefined4 *)0x0);
      if (bVar4) goto LAB_0058dcef;
    }
    puVar11 = puStack_24;
    puStack_24 = operator_new(0xe);
    if (puStack_24 == (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x0;
    }
    else {
      *puStack_24 = pvVar8;
      puStack_24[1] = puVar11;
      puStack_24[2] = 0;
      *(undefined1 *)(puStack_24 + 3) = 0;
    }
    puVar3 = puStack_24;
    if (iStack_20 != 0) {
      puVar11[2] = puStack_24;
      puVar3 = local_28;
    }
    local_28 = puVar3;
    iStack_20 = iStack_20 + 1;
    uVar9 = __ftol();
    FUN_007a630a(pvVar8,s___777_d_00858078,uVar9);
    puVar5 = puStack_8;
    FUN_004132d0(pvVar8,(&DAT_00857fe8)[(int)puStack_8],*(int *)((int)param_1 + 0x136) + 7,
                 DAT_00bd1bac,0xffff,0);
    puStack_8 = (undefined1 *)((int)puVar5 + 1);
    iVar10 = iVar10 + -1;
    puVar11 = local_28;
    if (iVar10 < 1) {
      while (puVar11 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar11[2];
        FUN_00796cd8(*puVar11);
        FUN_00796cd8(puVar11);
        puVar11 = puVar3;
      }
      ExceptionList = pvStack_18;
      return 0;
    }
  } while( true );
}


