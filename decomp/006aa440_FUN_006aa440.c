// FUN_006aa440 @ 6aa440 size=93

void __thiscall FUN_006aa440(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_retaddr;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_3);
  *(int **)(param_3 + 0x486) = unaff_retaddr;
  (**(code **)(*unaff_retaddr + 0x1d4))(param_3);
  cVar1 = (**(code **)(*unaff_retaddr + 0xe8))();
  if ((cVar1 != '\0') && (*(int **)(param_3 + 0x486) == unaff_retaddr)) {
    uVar2 = (**(code **)(*unaff_retaddr + 0xec))();
    uVar3 = 8;
    (**(code **)(*unaff_retaddr + 0xe0))(8,uVar2);
    FUN_00697e60(uVar3,uVar2);
  }
  return;
}


