// FUN_0060ccd0 @ 60ccd0 size=984

void __fastcall FUN_0060ccd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d0398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef2b0;
  param_1[2] = &PTR_LAB_007ef2ac;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef2a8;
  piVar1 = (int *)0x0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x44] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x44])(1);
  }
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x41])(1);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x47])(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  piVar3 = param_1 + 0x35;
  iVar2 = 0xc;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x45])(1);
  }
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x46])(1);
  }
  if ((undefined4 *)param_1[0x43] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x43])(1);
  }
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x34])(1);
  }
  if (param_1[0x48] != 0) {
    FUN_00436030();
    iVar2 = param_1[0x48];
    piVar3 = *(int **)(iVar2 + 4);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
      FUN_00796cd8(piVar3);
      piVar3 = piVar1;
    }
    *(int **)(iVar2 + 4) = piVar1;
    *(int **)(iVar2 + 8) = piVar1;
    *(int **)(iVar2 + 0xc) = piVar1;
  }
  if ((int *)param_1[0x48] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x48])(1);
  }
  if (*(int **)((int)param_1 + 0x222) != piVar1) {
    (**(code **)**(int **)((int)param_1 + 0x222))(1);
  }
  if (*(int **)((int)param_1 + 0x21e) != piVar1) {
    (**(code **)**(int **)((int)param_1 + 0x21e))(1);
  }
  if ((int *)param_1[0x8a] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8a])(1);
  }
  if ((int *)param_1[0x8b] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8b])(1);
  }
  if ((int *)param_1[0x8c] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8c])(1);
  }
  if ((int *)param_1[0x8d] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8d])(1);
  }
  if ((int *)param_1[0x8e] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8e])(1);
  }
  if ((int *)param_1[0x8f] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x8f])(1);
  }
  if ((int *)param_1[0x90] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x90])(1);
  }
  if ((int *)param_1[0x91] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x91])(1);
  }
  if ((int *)param_1[0x92] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x92])(1);
  }
  if ((int *)param_1[0x93] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x93])(1);
  }
  if ((int *)param_1[0x94] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x94])(1);
  }
  if ((int *)param_1[0x95] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x95])(1);
  }
  if ((int *)param_1[0x96] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x96])(1);
  }
  if ((int *)param_1[0x97] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x97])(1);
  }
  if ((int *)param_1[0x98] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x98])(1);
  }
  if ((int *)param_1[0x99] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x99])(1);
  }
  if ((int *)param_1[0x9a] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9a])(1);
  }
  if ((int *)param_1[0x9b] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9b])(1);
  }
  if ((int *)param_1[0x9c] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9c])(1);
  }
  if ((int *)param_1[0x9d] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9d])(1);
  }
  if ((int *)param_1[0x9e] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9e])(1);
  }
  if ((int *)param_1[0x9f] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0x9f])(1);
  }
  if ((int *)param_1[0xa0] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0xa0])(1);
  }
  if ((int *)param_1[0xa1] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0xa1])(1);
  }
  if ((int *)param_1[0xa2] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0xa2])(1);
  }
  if ((int *)param_1[0xa3] != piVar1) {
    (*(code *)**(undefined4 **)param_1[0xa3])(1);
  }
  param_1[0x8a] = piVar1;
  param_1[0x8b] = piVar1;
  param_1[0x8c] = piVar1;
  param_1[0x8d] = piVar1;
  param_1[0x8e] = piVar1;
  param_1[0x8f] = piVar1;
  param_1[0x90] = piVar1;
  param_1[0x91] = piVar1;
  param_1[0x92] = piVar1;
  param_1[0x93] = piVar1;
  param_1[0x94] = piVar1;
  param_1[0x95] = piVar1;
  param_1[0x96] = piVar1;
  param_1[0x97] = piVar1;
  param_1[0x98] = piVar1;
  param_1[0x99] = piVar1;
  param_1[0x9a] = piVar1;
  param_1[0x9b] = piVar1;
  param_1[0x9c] = piVar1;
  param_1[0x9d] = piVar1;
  param_1[0x9e] = piVar1;
  param_1[0x9f] = piVar1;
  param_1[0xa0] = piVar1;
  param_1[0xa1] = piVar1;
  param_1[0xa2] = piVar1;
  param_1[0xa3] = piVar1;
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


