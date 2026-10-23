// FUN_004b4640 @ 4b4640 size=666

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4640(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  undefined **ppuStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  void *pvStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be598;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x68))();
  iVar8 = param_1[0x19] + 1;
  param_1[0x19] = iVar8;
  if ((param_1[0x1d] == 5) || (param_1[0x1d] == 7)) {
    if (_DAT_00dc1678 < (float)iVar8) {
      (**(code **)(*param_1 + 0x58))();
      ExceptionList = pvStack_c;
      return;
    }
  }
  else if (_DAT_00dc1680 < (float)iVar8) {
    (**(code **)(*param_1 + 0x58))();
    ExceptionList = pvStack_c;
    return;
  }
  if ((*(int *)(param_1[0x1e] + 0x3d8) != 0) &&
     (cVar6 = FUN_0044b280(*(undefined4 *)(param_1[0x20] + 0x4a)), cVar6 != '\0')) {
    fVar10 = (float10)FUN_004ed1a0();
    if ((float10)_DAT_007e3380 < fVar10) {
      puStack_1c = (undefined4 *)0x0;
      puStack_18 = (undefined4 *)0x0;
      pvStack_14 = (void *)0x0;
      uStack_10 = 0;
      ppuStack_20 = &PTR_LAB_007e4b94;
      uStack_4 = 0;
      iVar8 = (**(code **)(*(int *)param_1[0x20] + 0xc))();
      piVar3 = *(int **)(iVar8 + 4);
      while (piVar3 != (int *)0x0) {
        piVar1 = (int *)piVar3[2];
        puVar4 = *(undefined4 **)(*piVar3 + 0x26);
        puVar2 = puStack_1c;
        while (puStack_1c = puVar2, piVar3 = piVar1, puVar4 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar4[2];
          piVar3 = (int *)*puVar4;
          puVar4 = puVar2;
          if (((param_1[0x1d] != 7) && (param_1[0x1d] != 8)) ||
             (cVar6 = (**(code **)(*piVar3 + 0x14))(), puVar2 = puStack_1c, cVar6 != '\0')) {
            puVar5 = puStack_18;
            puStack_18 = operator_new(0xe);
            if (puStack_18 == (undefined4 *)0x0) {
              puStack_18 = (undefined4 *)0x0;
            }
            else {
              *puStack_18 = piVar3;
              puStack_18[1] = puVar5;
              puStack_18[2] = 0;
              *(undefined1 *)(puStack_18 + 3) = 0;
            }
            iVar8 = (int)pvStack_14 + 1;
            bVar9 = pvStack_14 != (void *)0x0;
            puVar2 = puStack_18;
            pvStack_14 = (void *)iVar8;
            if (bVar9) {
              puVar5[2] = puStack_18;
              puVar2 = puStack_1c;
            }
          }
        }
      }
      if ((param_1[0x1d] == 7) || (param_1[0x1d] == 8)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      FUN_004e6ff0(&ppuStack_20,uVar7);
      FUN_004bc8f0(3);
      (*(code *)ppuStack_20[4])();
      uStack_4 = 0xffffffff;
      ppuStack_20 = &PTR_LAB_007e4b94;
      puVar4 = puStack_1c;
      while (puVar4 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar4[2];
        FUN_00796cd8(puVar4);
        puVar4 = puVar2;
      }
      puStack_1c = (undefined4 *)0x0;
      puStack_18 = (undefined4 *)0x0;
      pvStack_14 = (void *)0x0;
    }
    cVar6 = (**(code **)(*param_1 + 0x88))();
    if (cVar6 != '\0') {
      FUN_004b4b80();
    }
  }
  FUN_004b4570();
  (**(code **)(*(int *)param_1[0x20] + 0x1c))(param_1[0x21]);
  (**(code **)(*(int *)param_1[0x21] + 0x1c))(param_1[0x20]);
  FUN_004bc8f0(0);
  FUN_004bc8f0(0);
  cVar6 = (**(code **)(*param_1 + 0x80))();
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x58))();
    ExceptionList = pvStack_14;
    return;
  }
  (**(code **)(*param_1 + 0x5c))();
  ExceptionList = pvStack_14;
  return;
}


