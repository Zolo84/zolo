// FUN_00611380 @ 611380 size=418

void __fastcall FUN_00611380(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_007d0546;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (param_1[0x48] != 0) {
    ExceptionList = &pvStack_c;
    FUN_00436030();
    iVar2 = param_1[0x48];
    piVar1 = *(int **)(iVar2 + 4);
    while (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[2];
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      FUN_00796cd8(piVar1);
      piVar1 = piVar4;
    }
    *(int **)(iVar2 + 4) = piVar4;
    *(int **)(iVar2 + 8) = piVar4;
    *(int **)(iVar2 + 0xc) = piVar4;
    if ((int *)param_1[0x48] != piVar4) {
      (*(code *)**(undefined4 **)param_1[0x48])(1);
    }
  }
  piVar1 = operator_new(0x72);
  if (piVar1 == piVar4) {
    iVar2 = 0;
  }
  else {
    piStack_4 = piVar4;
    iVar2 = FUN_00434930(0xdc,300,piVar4,piVar4);
  }
  param_1[0x48] = iVar2;
  piStack_4 = (int *)0xffffffff;
  if (*(int *)(DAT_00d0ca90 + 0x21e66) == 0x16) {
    piVar1 = (int *)(&DAT_0089cad8)[param_1[0x32]];
  }
  else {
    iVar2 = FUN_004e9370(DAT_008477ac);
    piVar1 = *(int **)(iVar2 + 0x3d8);
    if (((piVar1 != piVar4) && (DAT_008477ac != piVar4)) &&
       (piVar3 = (int *)FUN_0044e1b0(), DAT_008477ac == piVar3)) {
      piVar1 = *(int **)(DAT_00ab27b4 + 0x3d4 + (int)DAT_008477ac * 0x4b2);
    }
  }
  if ((int *)param_1[0x41] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x41])(1);
  }
  piVar3 = operator_new(0xae);
  piStack_4 = (int *)0x1;
  if (piVar3 == piVar4) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006160f0(*(undefined4 *)(DAT_00d0ca90 + 6));
  }
  piStack_4 = (int *)0xffffffff;
  param_1[0x41] = iVar2;
  (**(code **)(*param_1 + 0x74))(piVar1);
  FUN_00611fb0(piVar4);
  DAT_008477ac = piVar4;
  ExceptionList = piVar3;
  return;
}


