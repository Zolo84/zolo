// FUN_006adac0 @ 6adac0 size=92

void FUN_006adac0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0042e980();
  if (((cVar1 != '\0') && (*(int *)(param_1 + 0x4c) == 0)) && (param_2[0x13] == 2)) {
    piVar2 = (int *)FUN_004c9f81();
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0x1c))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar2 + 0x498))();
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*param_2 + 4))();
          FUN_00691c90(uVar3);
        }
      }
    }
  }
  return;
}


