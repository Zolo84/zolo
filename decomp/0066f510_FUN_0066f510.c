// FUN_0066f510 @ 66f510 size=77

void __thiscall FUN_0066f510(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_8 [8];
  
  cVar1 = (**(code **)(*param_2 + 0xe8))();
  piVar3 = param_1;
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0xec))();
    piVar3 = *(int **)(iVar2 + 0x40);
  }
  param_1[0x10] = (int)piVar3;
  *(int **)((int)param_1 + 0x12) = param_2;
  iVar2 = *param_1;
  uVar4 = FUN_00428430(auStack_8);
  (**(code **)(iVar2 + 4))(uVar4);
  return;
}


