// FUN_006aa310 @ 6aa310 size=80

void __thiscall FUN_006aa310(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(int **)(param_2 + 0x486) = param_1;
  (**(code **)(*param_1 + 0x1e0))(param_2);
  cVar1 = (**(code **)(*param_1 + 0xe8))();
  if ((cVar1 != '\0') && (*(int **)(param_2 + 0x486) == param_1)) {
    uVar2 = (**(code **)(*param_1 + 0xec))();
    uVar3 = 9;
    (**(code **)(*param_1 + 0xe0))(9,uVar2);
    FUN_00697e60(uVar3,uVar2);
  }
  return;
}


