// FUN_0069b1c0 @ 69b1c0 size=102

void __thiscall FUN_0069b1c0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(**(code **)(*param_2 + 0xec))();
  iVar3 = (**(code **)(*piVar2 + 0x1f0))();
  uVar1 = *(undefined4 *)(iVar3 + 0x8c);
  piVar2 = (int *)(**(code **)(*param_2 + 0xec))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x1f0))();
  uVar4 = (**(code **)(*piVar2 + 0x1e8))();
  FUN_006a9d40(param_2);
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    (**(code **)(*param_1 + 0x20c))(uVar4,uVar1);
  }
  return;
}


