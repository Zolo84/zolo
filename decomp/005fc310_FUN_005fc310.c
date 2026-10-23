// FUN_005fc310 @ 5fc310 size=553

void __fastcall FUN_005fc310(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cf5e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ee358;
  param_1[2] = &PTR_LAB_007ee354;
  piVar3 = (int *)0x0;
  local_4 = 1;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xaa) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xaa))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xae) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xae))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xb2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xb2))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xb6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xb6))(1);
  }
  iVar1 = param_1[0x27];
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
  iVar1 = param_1[0x26];
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
  if ((int *)param_1[0x27] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  if ((int *)param_1[0x26] != piVar3) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  if (*(int **)((int)param_1 + 0xd2) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xd2))(1);
  }
  if (*(int **)((int)param_1 + 0xd6) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xd6))(1);
  }
  if (*(int **)((int)param_1 + 0xda) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xda))(1);
  }
  if (*(int **)((int)param_1 + 0xde) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xde))(1);
  }
  if (*(int **)((int)param_1 + 0xe2) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xe2))(1);
  }
  if (*(int **)((int)param_1 + 0xe6) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xe6))(1);
  }
  if (*(int **)((int)param_1 + 0xba) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xba))(1);
  }
  if (*(int **)((int)param_1 + 0xbe) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xbe))(1);
  }
  if (*(int **)((int)param_1 + 0xc2) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xc2))(1);
  }
  if (*(int **)((int)param_1 + 0xc6) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xc6))(1);
  }
  if (*(int **)((int)param_1 + 0xca) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xca))(1);
  }
  if (*(int **)((int)param_1 + 0xce) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xce))(1);
  }
  *(undefined ***)((int)param_1 + 0x82) = &PTR_LAB_007ee3a0;
  piVar4 = *(int **)((int)param_1 + 0x86);
  while (piVar4 != piVar3) {
    piVar2 = (int *)piVar4[2];
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  *(int **)((int)param_1 + 0x86) = piVar3;
  *(int **)((int)param_1 + 0x8a) = piVar3;
  *(int **)((int)param_1 + 0x8e) = piVar3;
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


