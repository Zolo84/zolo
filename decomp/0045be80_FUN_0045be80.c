// FUN_0045be80 @ 45be80 size=504

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0045be80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbd89;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = (**(code **)(*param_1 + 0x84))();
  piVar3 = *(int **)(iVar5 + 4);
  do {
    do {
      if (piVar3 == (int *)0x0) {
        cVar4 = FUN_00444290();
        if (cVar4 != '\0') {
          pvVar6 = operator_new(0x68);
          uStack_4 = 3;
          if (pvVar6 != (void *)0x0) {
            uVar12 = 0x29a;
            uVar7 = FUN_0042b6c9(s_NOTENOUGHROOM_0083ca14);
            FUN_0043da60(uVar7,uVar12);
          }
        }
        ExceptionList = pvStack_c;
        return (int *)0x0;
      }
      piVar11 = (int *)piVar3[2];
      piVar1 = (int *)*piVar3;
      cVar4 = (**(code **)(*piVar1 + 0x30))();
      piVar3 = piVar11;
    } while (cVar4 == '\0');
    piVar11 = param_1;
    (**(code **)(*piVar1 + 0x18))(param_1);
    cVar4 = FUN_004ef9b0(piVar11);
  } while (((cVar4 == '\0') ||
           (cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))(), cVar4 == '\0')) ||
          (iVar5 = (**(code **)(piVar1[0x47] + 4))(), iVar5 != 0));
  iVar5 = (**(code **)(*piVar1 + 0x18))();
  puVar8 = operator_new(0xc);
  uStack_4 = 0;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar9 = operator_new(0x1a);
    uStack_4._0_1_ = 1;
    if (puVar9 == (undefined2 *)0x0) {
      puVar9 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar9[4] = 0;
      *(undefined4 *)(puVar9 + 5) = 0;
      puVar9[7] = 0;
      *(undefined4 *)(puVar9 + 8) = 0;
      puVar9[10] = 0;
      *(undefined4 *)(puVar9 + 0xb) = 0;
    }
    puVar8[1] = puVar9;
    *(undefined1 *)(puVar8 + 2) = 0;
    *(undefined1 *)((int)puVar8 + 9) = 1;
    *puVar8 = &PTR_FUN_007e5f00;
    *(undefined1 *)((int)puVar8 + 10) = 0;
    *puVar9 = 0xe9;
    iVar2 = puVar8[1];
    *(undefined4 *)(iVar2 + 8) = _DAT_0088f24c;
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f24e._2_2_;
    puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar8[1];
    *(undefined4 *)(iVar2 + 2) = *puVar10;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar10 + 1);
    iVar2 = puVar8[1];
    *puVar8 = &PTR_FUN_007e5ee0;
    *(int *)(iVar2 + 0xe) = param_1[6];
    *(short *)(iVar2 + 0x12) = (short)param_1[7];
    iVar2 = puVar8[1];
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(iVar5 + 0x1c);
  }
  uStack_4 = 0xffffffff;
  FUN_00565bf0(puVar8);
  ExceptionList = pvStack_c;
  return piVar1;
}


