// FUN_00580ff0 @ 580ff0 size=74

undefined4 __thiscall FUN_00580ff0(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1[1] == 2) || (param_1[1] == 1)) {
    uVar2 = (**(code **)(*(int *)param_1[3] + 0x1c))((int *)param_1[3]);
    param_1[1] = 0;
  }
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x24))();
    while (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x24))();
    }
  }
  return uVar2;
}


