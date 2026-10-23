// FUN_006aa000 @ 6aa000 size=381

void __thiscall FUN_006aa000(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_2;
  piVar4 = (int *)param_2[0x7d];
  cVar2 = (**(code **)(*param_2 + 0x28))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*piVar5 + 0x30))();
    if (cVar2 == '\0') {
      if ((piVar4 != (int *)0x0) && (piVar4 != param_1)) {
        iVar1 = *piVar4;
        uVar3 = (**(code **)(*piVar5 + 0x14))();
        (**(code **)(iVar1 + 0x1cc))(uVar3);
      }
      if ((*(char *)((int)param_1 + 0xf) == '\0') && ((char)param_1[4] == '\0')) {
        FUN_00524610(param_1);
        piVar4 = (int *)(**(code **)(*param_1 + 0x1c4))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&param_2,piVar5);
        if (*piVar4 != 0) {
          return;
        }
        (**(code **)(*param_1 + 0x1c4))(piVar5);
        FUN_004e2e70(piVar5);
        return;
      }
    }
    else {
      if ((piVar4 != (int *)0x0) && (piVar4 != param_1)) {
        iVar1 = *piVar4;
        uVar3 = (**(code **)(*piVar5 + 0x18))();
        (**(code **)(iVar1 + 0x1bc))(uVar3);
      }
      if ((*(char *)((int)param_1 + 0xf) == '\0') && ((char)param_1[4] == '\0')) {
        FUN_00524610(param_1);
        piVar4 = (int *)(**(code **)(*param_1 + 0x1b4))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&param_2,piVar5);
        if (*piVar4 != 0) {
          return;
        }
        (**(code **)(*param_1 + 0x1b4))(piVar5);
        FUN_004e2e70(piVar5);
        return;
      }
    }
  }
  else {
    if ((piVar4 != (int *)0x0) && (piVar4 != param_1)) {
      iVar1 = *piVar4;
      uVar3 = (**(code **)(*piVar5 + 0x10))();
      (**(code **)(iVar1 + 0x1ac))(uVar3);
    }
    if ((*(char *)((int)param_1 + 0xf) == '\0') && ((char)param_1[4] == '\0')) {
      FUN_00524610(param_1);
      piVar4 = (int *)(**(code **)(*param_1 + 0x1a4))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&param_2,piVar5);
      if (*piVar4 != 0) {
        return;
      }
      (**(code **)(*param_1 + 0x1a4))(piVar5);
      FUN_004e2e70(piVar5);
      return;
    }
  }
  FUN_00524610(0);
  return;
}


