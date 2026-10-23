// FUN_006adb20 @ 6adb20 size=94

void FUN_006adb20(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  
  cVar2 = FUN_0042e980();
  if ((cVar2 != '\0') && (param_1[0x13] == 0)) {
    piVar4 = &DAT_0089cad8;
    do {
      piVar1 = (int *)*piVar4;
      if (((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x1c))(), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x498))(), cVar2 != '\0')) {
        uVar3 = (**(code **)*param_1)();
        FUN_00691c30(uVar3);
      }
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0x89d038);
  }
  return;
}


