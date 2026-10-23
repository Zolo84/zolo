// FUN_0045bc80 @ 45bc80 size=505

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0045bc80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbd49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar6 = FUN_0051b230();
  piVar4 = *(int **)(*(int *)(iVar6 + 0x46a) + 0x34);
  do {
    do {
      if (piVar4 == (int *)0x0) {
        cVar5 = FUN_00444290();
        if (cVar5 != '\0') {
          pvVar7 = operator_new(0x68);
          uStack_4 = 3;
          if (pvVar7 != (void *)0x0) {
            uVar12 = 0x29a;
            uVar8 = FUN_0042b6c9(s_NOTENOUGHROOM_0083ca14);
            FUN_0043da60(uVar8,uVar12);
          }
        }
        ExceptionList = pvStack_c;
        return (int *)0x0;
      }
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      cVar5 = (**(code **)(*piVar2 + 0x2c))();
      piVar4 = piVar1;
    } while (cVar5 == '\0');
    iVar6 = param_1;
    (**(code **)(*piVar2 + 0x14))(param_1);
    cVar5 = FUN_00516f90(iVar6);
  } while (((cVar5 == '\0') ||
           (cVar5 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))(), cVar5 == '\0')) ||
          (iVar6 = (**(code **)(piVar2[0x47] + 4))(), iVar6 != 0));
  iVar6 = (**(code **)(*piVar2 + 0x14))();
  puVar9 = operator_new(0xc);
  uStack_4 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x1a);
    uStack_4._0_1_ = 1;
    if (puVar10 == (undefined2 *)0x0) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar10[4] = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
      puVar10[7] = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      puVar10[10] = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
    }
    puVar9[1] = puVar10;
    *(undefined1 *)(puVar9 + 2) = 0;
    *(undefined1 *)((int)puVar9 + 9) = 1;
    *puVar9 = &PTR_FUN_007e5f00;
    *(undefined1 *)((int)puVar9 + 10) = 0;
    *puVar10 = 0xe8;
    iVar3 = puVar9[1];
    *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
    *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    puVar11 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar3 = puVar9[1];
    *(undefined4 *)(iVar3 + 2) = *puVar11;
    *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar11 + 1);
    iVar3 = puVar9[1];
    *puVar9 = &PTR_FUN_007e5ee0;
    *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(param_1 + 0x1c);
    iVar3 = puVar9[1];
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar6 + 0x18);
    *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar6 + 0x1c);
  }
  uStack_4 = 0xffffffff;
  FUN_00565bf0(puVar9);
  ExceptionList = pvStack_c;
  return piVar2;
}


