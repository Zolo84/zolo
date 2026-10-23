// FUN_00669640 @ 669640 size=123

void __thiscall FUN_00669640(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)param_2[1];
  *(undefined1 *)(param_2 + 4) = 1;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)*piVar1;
    iVar4 = (**(code **)(*piVar2 + 0x1e8))();
    if ((*(char *)(iVar4 + 0x38 + param_1) == '\0') &&
       ((**(code **)(*param_2 + 0x1c))(piVar1), piVar2 != (int *)0x0)) {
      (**(code **)*piVar2)(1);
    }
  }
  *(undefined1 *)(param_2 + 4) = 0;
  iVar4 = param_2[1];
  while (iVar4 != 0) {
    if (*(char *)(iVar4 + 0xc) == '\0') {
      iVar4 = *(int *)(iVar4 + 8);
    }
    else {
      iVar3 = *(int *)(iVar4 + 8);
      (**(code **)(*param_2 + 0x1c))(iVar4);
      iVar4 = iVar3;
    }
  }
  return;
}


