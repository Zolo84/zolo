// FUN_005d9da0 @ 5d9da0 size=479

void __fastcall FUN_005d9da0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cda3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar6 = (int *)FUN_005c5030();
  if (piVar6 != (int *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x94);
    iVar12 = *(int *)(param_1 + 0x8c);
    piVar4 = *(int **)(iVar12 + 4);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      FUN_00796cd8(piVar4);
      piVar4 = piVar2;
    }
    iVar11 = 0;
    *(undefined4 *)(iVar12 + 4) = 0;
    *(undefined4 *)(iVar12 + 8) = 0;
    *(undefined4 *)(iVar12 + 0xc) = 0;
    do {
      cVar5 = FUN_00512b20(piVar6,iVar11,uVar1);
      if ((cVar5 != '\0') && (iVar12 = 1, 1 < DAT_00877690)) {
        do {
          iVar7 = FUN_004e9370(iVar12);
          if ((*(char *)(iVar7 + 0x180) == '\0') &&
             (cVar5 = FUN_00512b20(piVar6,iVar11,iVar12), cVar5 != '\0')) {
            pvVar8 = operator_new(0x38);
            uStack_4 = 0;
            if (pvVar8 == (void *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)(*piVar6 + 0x2c))();
              uVar9 = FUN_005c0ca0(iVar11,uVar9);
            }
            iVar12 = *(int *)(param_1 + 0x8c);
            uStack_4 = 0xffffffff;
            iVar7 = *(int *)(iVar12 + 8);
            puVar10 = operator_new(0xe);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = uVar9;
              puVar10[1] = iVar7;
              puVar10[2] = 0;
              *(undefined1 *)(puVar10 + 3) = 0;
            }
            iVar3 = *(int *)(iVar12 + 0xc);
            *(undefined4 **)(iVar12 + 8) = puVar10;
            *(int *)(iVar12 + 0xc) = iVar3 + 1;
            if (iVar3 == 0) {
              *(undefined4 **)(iVar12 + 4) = puVar10;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar10;
            }
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00877690);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x22);
    iVar12 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    if (iVar12 != 0) {
      piVar6 = *(int **)(param_1 + 0x8c);
      iVar12 = (**(code **)(**(int **)piVar6[1] + 0x18))();
      iVar11 = (**(code **)(*piVar6 + 4))();
      iVar12 = iVar12 * iVar11;
      if (499 < iVar12) {
        iVar12 = 500;
      }
      *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) = iVar12;
    }
    FUN_004353e0();
    FUN_00435fd0();
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  ExceptionList = local_c;
  return;
}


