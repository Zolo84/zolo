// FUN_006a9890 @ 6a9890 size=981

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a9890(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 *apuStack_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5b0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*param_1 + 0xe0))();
  if (*(char *)(iVar4 + 0xe) != '\0') {
    fVar10 = (float10)(**(code **)(*param_1 + 0x150))();
    if (fVar10 != (float10)_DAT_007e3380) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
      iVar4 = *piVar5;
      fVar10 = (float10)(**(code **)(*param_1 + 0x150))();
      (**(code **)(iVar4 + 0x154))((float)fVar10);
    }
    fVar10 = (float10)(**(code **)(*param_1 + 0x15c))();
    if (fVar10 != (float10)_DAT_007e3380) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
      iVar4 = *piVar5;
      fVar10 = (float10)(**(code **)(*param_1 + 0x15c))();
      (**(code **)(iVar4 + 0x160))((float)fVar10);
    }
    fVar10 = (float10)(**(code **)(*param_1 + 0x180))();
    if (fVar10 != (float10)_DAT_007e3380) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
      iVar4 = *piVar5;
      fVar10 = (float10)(**(code **)(*param_1 + 0x180))();
      (**(code **)(iVar4 + 0x184))((float)fVar10);
    }
    fVar10 = (float10)(**(code **)(*param_1 + 0x168))();
    if (fVar10 != (float10)_DAT_007e3380) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
      iVar4 = *piVar5;
      fVar10 = (float10)(**(code **)(*param_1 + 0x168))();
      (**(code **)(iVar4 + 0x16c))((float)fVar10);
    }
    fVar10 = (float10)(**(code **)(*param_1 + 0x174))();
    if (fVar10 != (float10)_DAT_007e3380) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
      iVar4 = *piVar5;
      fVar10 = (float10)(**(code **)(*param_1 + 0x174))();
      (**(code **)(iVar4 + 0x178))((float)fVar10);
    }
    iVar4 = (**(code **)(*param_1 + 0x1a4))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_1 + 0x1a4))();
      uVar6 = (**(code **)(*param_1 + 0xe0))();
      bVar2 = true;
      piVar5 = *(int **)(iVar4 + 4);
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        iVar4 = *piVar5;
        piVar5 = piVar1;
        if (*(char *)(iVar4 + 0x17d) == '\0') {
          if ((bVar2) && (cVar3 = FUN_006a9f80(uVar6,iVar4), cVar3 != '\0')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x1c4))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_1 + 0x1c4))();
      uVar6 = (**(code **)(*param_1 + 0xe0))();
      bVar2 = true;
      piVar5 = *(int **)(iVar4 + 4);
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        iVar4 = *piVar5;
        piVar5 = piVar1;
        if (*(char *)(iVar4 + 0x17d) == '\0') {
          if ((bVar2) && (cVar3 = FUN_006a9f80(uVar6,iVar4), cVar3 != '\0')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x1d0))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_1 + 0x1d0))();
      uVar6 = (**(code **)(*param_1 + 0xe0))();
      puVar7 = *(undefined4 **)(iVar4 + 4);
      while (puVar7 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)puVar7[2];
        FUN_006aa440(uVar6,*puVar7);
        puVar7 = puVar9;
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x1dc))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_1 + 0x1dc))();
      (**(code **)(*param_1 + 0xe0))();
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        puVar7 = (undefined4 *)FUN_005162a0(apuStack_18,0);
        uVar6 = *(undefined4 *)*puVar7;
        (**(code **)(*param_1 + 0x1e4))(uVar6);
        FUN_006aa310(uVar6);
      }
    }
    iVar4 = (**(code **)(*param_1 + 0xe0))();
    if (*(char *)(iVar4 + 0xe) != '\0') {
      for (piVar5 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508); piVar5 != (int *)0x0;
          piVar5 = (int *)piVar5[2]) {
        if (*(int **)(*piVar5 + 500) == param_1) {
          uVar6 = (**(code **)(*param_1 + 0xe0))();
          FUN_00524610(uVar6);
        }
      }
    }
  }
  (**(code **)(*param_1 + 400))();
  puVar7 = operator_new(0xc);
  uStack_4 = 0;
  apuStack_18[0] = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x18);
    uStack_4._0_1_ = 1;
    if (puVar8 == (undefined2 *)0x0) {
      puVar8 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar8[7] = 0;
      *(undefined4 *)(puVar8 + 8) = 0;
    }
    puVar7[1] = puVar8;
    *(undefined1 *)(puVar7 + 2) = 0;
    *(undefined1 *)((int)puVar7 + 9) = 1;
    *puVar7 = &PTR_FUN_007e53b8;
    *(undefined1 *)((int)puVar7 + 10) = 0;
    *puVar8 = 0xad;
    iVar4 = puVar7[1];
    *(int *)(iVar4 + 8) = param_1[1];
    *(short *)(iVar4 + 0xc) = (short)param_1[2];
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar4 = puVar7[1];
    *(undefined4 *)(iVar4 + 2) = *puVar9;
    *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar9 + 1);
    iVar4 = puVar7[1];
    *puVar7 = &PTR_FUN_007e5398;
    *(int *)(iVar4 + 0xe) = param_1[1];
    *(short *)(iVar4 + 0x12) = (short)param_1[2];
    *(undefined4 *)(puVar7[1] + 0x14) = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_00565c50(puVar7);
  ExceptionList = pvStack_c;
  return;
}


