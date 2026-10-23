// FUN_005c5320 @ 5c5320 size=460

void __fastcall FUN_005c5320(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cc96b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_005c5030();
  if (iVar6 != 0) {
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
    iVar10 = 0;
    *(undefined4 *)(iVar12 + 4) = 0;
    *(undefined4 *)(iVar12 + 8) = 0;
    *(undefined4 *)(iVar12 + 0xc) = 0;
    do {
      cVar5 = FUN_00512b20(iVar6,iVar10,uVar1);
      if ((cVar5 != '\0') && (iVar12 = 1, 1 < DAT_00877690)) {
        do {
          iVar7 = FUN_004e9370(iVar12);
          if ((*(char *)(iVar7 + 0x180) == '\0') &&
             (cVar5 = FUN_00512b20(iVar6,iVar10,iVar12), cVar5 != '\0')) {
            pvVar8 = operator_new(0x38);
            uVar11 = 0;
            uStack_4 = 0;
            if (pvVar8 != (void *)0x0) {
              uVar11 = FUN_005c0ca0(iVar10,0);
            }
            iVar12 = *(int *)(param_1 + 0x8c);
            uStack_4 = 0xffffffff;
            iVar7 = *(int *)(iVar12 + 8);
            puVar9 = operator_new(0xe);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = uVar11;
              puVar9[1] = iVar7;
              puVar9[2] = 0;
              *(undefined1 *)(puVar9 + 3) = 0;
            }
            iVar3 = *(int *)(iVar12 + 0xc);
            *(undefined4 **)(iVar12 + 8) = puVar9;
            *(int *)(iVar12 + 0xc) = iVar3 + 1;
            if (iVar3 == 0) {
              *(undefined4 **)(iVar12 + 4) = puVar9;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar9;
            }
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00877690);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x22);
    iVar6 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    if (iVar6 != 0) {
      piVar4 = *(int **)(*(int **)(param_1 + 0x8c))[1];
      iVar6 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
      iVar12 = (**(code **)(*piVar4 + 0x18))();
      iVar6 = iVar6 * iVar12;
      if (499 < iVar6) {
        iVar6 = 500;
      }
      *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) = iVar6;
    }
    FUN_004353e0();
    FUN_00435fd0();
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  ExceptionList = local_c;
  return;
}


