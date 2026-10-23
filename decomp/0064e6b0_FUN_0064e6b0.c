// FUN_0064e6b0 @ 64e6b0 size=771

void __fastcall FUN_0064e6b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int unaff_EBX;
  bool bVar7;
  undefined **ppuVar8;
  int iVar9;
  char *pcVar10;
  undefined **ppuStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2c40;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  switch(*(undefined4 *)(DAT_00bdc100 + 10)) {
  case 0:
    pcVar10 = s_GAME_END_QUIT_00866764;
    goto LAB_0064e6e7;
  case 1:
    pcVar10 = s_GAME_END_ELIMINATED_00866750;
LAB_0064e6e7:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_0042b6c9(pcVar10);
  default:
    goto switchD_0064e6db_caseD_2;
  case 3:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_005857e0();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    break;
  case 4:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_00585800();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    break;
  case 5:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_005857e0();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    break;
  case 6:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_00585800();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    break;
  case 7:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_005857e0();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    break;
  case 8:
    ExceptionList = &pvStack_c;
    DAT_00d0ba8c = FUN_00585800();
    cVar5 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
  }
  if (cVar5 == '\0') {
switchD_0064e6db_caseD_2:
    FUN_006ff200(9);
    FUN_006f50a0(DAT_00d0ba8c);
    FUN_006f50b0(*(undefined4 *)(param_1 + 6));
  }
  else {
    FUN_006ff200(8);
    FUN_006f8200(DAT_00d0ba8c);
    FUN_006f8210(*(undefined4 *)(param_1 + 6));
  }
  (**(code **)(*DAT_00d43154 + 0x10))(0);
  FUN_00583f10();
  FUN_00583f10();
  piStack_2c = (int *)0x0;
  piStack_28 = (int *)0x0;
  iStack_24 = 0;
  puStack_8 = (undefined1 *)0x0;
  FUN_00418f40();
  ppuStack_30 = &PTR_FUN_007e36fc;
  puStack_8 = (undefined1 *)0x1;
  piVar2 = *(int **)(DAT_00d13360 + 0x16);
  while (piVar3 = piStack_28, piVar4 = piStack_2c, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar6 = *piVar2;
    ppuVar8 = ppuStack_30;
    iVar9 = iVar6;
    FUN_00416560(piVar4);
    (*(code *)PTR_FUN_007e3728)(&stack0xffffffcc,ppuVar8,iVar9);
    piVar2 = piVar1;
    piStack_2c = piVar4;
    piStack_28 = piVar3;
    if (unaff_EBX == 0) {
      piStack_28 = operator_new(0xe);
      if (piStack_28 == (int *)0x0) {
        piStack_28 = (int *)0x0;
      }
      else {
        *piStack_28 = iVar6;
        piStack_28[1] = (int)piVar3;
        piStack_28[2] = 0;
        *(undefined1 *)(piStack_28 + 3) = 0;
      }
      iVar6 = iStack_24 + 1;
      bVar7 = iStack_24 != 0;
      piStack_2c = piStack_28;
      iStack_24 = iVar6;
      if (bVar7) {
        piVar3[2] = (int)piStack_28;
        piStack_2c = piVar4;
      }
    }
  }
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  (**(code **)(*(int *)(DAT_00d13360 + 0x12) + 0x14))();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004161c0();
  ExceptionList = pvStack_10;
  return;
}


