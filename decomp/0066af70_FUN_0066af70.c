// FUN_0066af70 @ 66af70 size=341

void __thiscall FUN_0066af70(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  cVar4 = FUN_0066b510(*(int *)(param_2 + 0x120) + 0x2da);
  bVar7 = cVar4 == '\0';
  iVar6 = 0;
  for (piVar1 = *(int **)(param_2 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)*piVar1;
    cVar4 = (**(code **)(*piVar2 + 0x30))();
    if (cVar4 != '\0') {
      for (iVar5 = *(int *)((int)piVar2 + 0x26); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        if (bVar7) {
          FUN_00500d60(0);
        }
        iVar6 = iVar6 + 1;
      }
    }
  }
  if (bVar7) {
    piVar1 = *(int **)(param_1 + 10);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[2];
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 8))(1);
      }
      FUN_00796cd8(piVar1);
      piVar1 = piVar2;
    }
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    FUN_0066b150(param_2);
  }
  else {
    iVar5 = (**(code **)(*(int *)(param_1 + 0x18) + 4))();
    if (iVar6 == iVar5) {
      return;
    }
  }
  piVar1 = *(int **)(param_1 + 0x44);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_00796cd8(piVar1);
    piVar1 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_0066abb0(param_2);
  if (bVar7) {
    for (puVar3 = *(undefined4 **)(param_2 + 0x4508); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      cVar4 = (**(code **)(*(int *)*puVar3 + 0x30))();
      if (cVar4 != '\0') {
        iVar6 = FUN_004ef820();
        iVar5 = FUN_004ef800();
        if (iVar6 != 0) {
          FUN_0066f030();
        }
        if (iVar5 != 0) {
          FUN_0066f030();
        }
      }
    }
  }
  return;
}


