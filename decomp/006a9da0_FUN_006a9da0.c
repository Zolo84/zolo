// FUN_006a9da0 @ 6a9da0 size=119

void __thiscall FUN_006a9da0(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)((int)param_1 + 0x12);
  if (piVar1 != param_2) {
    *(int **)((int)param_1 + 0x12) = param_2;
    cVar2 = (**(code **)(*param_1 + 0xe8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0xe8))();
      if (cVar2 == '\0') {
        uVar4 = (**(code **)(*param_1 + 0xec))();
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0xec))();
        uVar4 = *(undefined4 *)(iVar3 + 0x40);
      }
      iVar3 = (**(code **)(*param_1 + 0xec))();
      *(undefined4 *)(iVar3 + 0x40) = uVar4;
    }
    (**(code **)(*param_2 + 0x108))(param_1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x120))(param_1);
    }
  }
  return;
}


