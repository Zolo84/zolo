// FUN_005feea0 @ 5feea0 size=365

void __fastcall FUN_005feea0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cf758;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ee494;
  param_1[2] = &PTR_LAB_007ee490;
  piVar3 = (int *)0x0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  iVar1 = param_1[0x273b];
  piVar4 = *(int **)(iVar1 + 4);
  while (piVar4 != (int *)0x0) {
    piVar3 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar3;
  }
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)(iVar1 + 8) = piVar3;
  *(int **)(iVar1 + 0xc) = piVar3;
  iVar1 = param_1[0x273c];
  piVar4 = *(int **)(iVar1 + 4);
  if (*(int **)(iVar1 + 4) != piVar3) {
    do {
      piVar2 = (int *)piVar4[2];
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      FUN_00796cd8(piVar4);
      piVar3 = (int *)0x0;
      piVar4 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)(iVar1 + 8) = piVar3;
  *(int **)(iVar1 + 0xc) = piVar3;
  if ((int *)param_1[0x273b] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x273b])(1);
  }
  if ((int *)param_1[0x273c] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x273c])(1);
  }
  if (*(int **)((int)param_1 + 0x86) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0x86))(1);
  }
  if (*(int **)((int)param_1 + 0x8a) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0x8a))(1);
  }
  if ((int *)param_1[0x273f] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x273f])(1);
  }
  if ((int *)param_1[0x2740] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x2740])(1);
  }
  if ((int *)param_1[0x2741] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x2741])(1);
  }
  if ((int *)param_1[0x2742] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x2742])(1);
  }
  if ((int *)param_1[0x2743] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x2743])(1);
  }
  if ((int *)param_1[0x2744] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x2744])(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


