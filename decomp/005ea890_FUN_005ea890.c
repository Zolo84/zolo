// FUN_005ea890 @ 5ea890 size=638

void __fastcall FUN_005ea890(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce74b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436060();
  iVar4 = *(int *)(param_1 + 0xd4);
  piVar12 = (int *)0x0;
  piVar2 = *(int **)(iVar4 + 4);
  while (piVar2 != (int *)0x0) {
    piVar12 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
    }
    FUN_00796cd8();
    piVar2 = piVar12;
  }
  *(int **)(iVar4 + 4) = piVar12;
  *(int **)(iVar4 + 8) = piVar12;
  *(int **)(iVar4 + 0xc) = piVar12;
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
  if (0 < DAT_00877690) {
    do {
      iVar4 = FUN_004e9370();
      if ((*(int **)(iVar4 + 0x1aa) != (int *)0x0) &&
         (iVar5 = (**(code **)(**(int **)(iVar4 + 0x1aa) + 4))(), iVar5 != 0)) {
        piVar2 = *(int **)(*(int *)(iVar4 + 0x1aa) + 4);
joined_r0x005ea944:
        if (piVar2 != (int *)0x0) {
          piVar1 = (int *)piVar2[2];
          iVar4 = *piVar2;
          cVar3 = FUN_004bf200();
          piVar2 = piVar1;
          if ((cVar3 != '\0') && (cVar3 = FUN_004bf180(), cVar3 != '\0')) {
            pvVar6 = operator_new(0xca);
            uStack_4 = 0;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005e98d0();
            }
            uStack_4 = 0xffffffff;
            for (iVar5 = *(int *)(*(int *)(param_1 + 0xd4) + 4); iVar5 != 0;
                iVar5 = *(int *)(iVar5 + 8)) {
              iVar8 = FUN_00428ee0();
              if (iVar8 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = iVar8 + -8;
              }
              switch(*(undefined4 *)(param_1 + 0xbc)) {
              case 0:
                piVar1 = *(int **)(iVar4 + 0x78);
                (**(code **)(**(int **)(iVar8 + 0x78) + 0xc))();
                uVar9 = (**(code **)(*piVar1 + 0xc))();
                iVar8 = FUN_007a8730(uVar9);
                if (-1 < iVar8) goto switchD_005ea9e4_default;
                goto LAB_005eaa60;
              case 1:
                iVar10 = 1;
                break;
              case 2:
                iVar10 = 3;
                break;
              case 3:
                iVar10 = 2;
                break;
              case 4:
                iVar10 = *(int *)(iVar4 + 0x74);
                if (((((iVar10 == 4) || (iVar10 == 5)) || (iVar10 == 6)) &&
                    ((iVar8 = *(int *)(iVar8 + 0x74), iVar8 != 4 && (iVar8 != 5)))) && (iVar8 != 6))
                goto LAB_005eaa60;
              default:
                goto switchD_005ea9e4_default;
              }
              if ((*(int *)(iVar4 + 0x74) == iVar10) && (*(int *)(iVar8 + 0x74) != iVar10)) {
LAB_005eaa60:
                FUN_00592460(uVar7);
                goto joined_r0x005ea944;
              }
switchD_005ea9e4_default:
            }
            iVar4 = *(int *)(param_1 + 0xd4);
            iVar5 = *(int *)(iVar4 + 8);
            puVar11 = operator_new(0xe);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              *puVar11 = uVar7;
              puVar11[1] = iVar5;
              puVar11[2] = 0;
              *(undefined1 *)(puVar11 + 3) = 0;
            }
            iVar8 = *(int *)(iVar4 + 0xc);
            *(undefined4 **)(iVar4 + 8) = puVar11;
            *(int *)(iVar4 + 0xc) = iVar8 + 1;
            if (iVar8 == 0) {
              *(undefined4 **)(iVar4 + 4) = puVar11;
            }
            else {
              *(undefined4 **)(iVar5 + 8) = puVar11;
            }
          }
          goto joined_r0x005ea944;
        }
      }
      piVar12 = (int *)((int)piVar12 + 1);
    } while ((int)piVar12 < DAT_00877690);
  }
  FUN_004353e0();
  FUN_00436130();
  ExceptionList = pvStack_c;
  return;
}


