// FUN_0053ea00 @ 53ea00 size=120

void __thiscall FUN_0053ea00(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  
  if (param_2 != (int *)0x0) {
    if (param_2[1] == 2) {
      param_2[2] = param_2[2] + 1;
      cVar3 = (**(code **)(*param_2 + 0x44))();
      if (cVar3 == '\0') {
        for (puVar1 = (undefined4 *)param_2[4]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[2]) {
          FUN_00425600(*puVar1);
        }
        (**(code **)(param_2[3] + 0x10))();
        iVar2 = param_2[2];
        param_2[2] = iVar2 + -1;
        if (iVar2 + -1 < 1) {
          (**(code **)*param_2)(1);
          return;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x84))(param_2);
    }
  }
  return;
}


