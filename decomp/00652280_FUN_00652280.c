// FUN_00652280 @ 652280 size=121

void __thiscall FUN_00652280(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 0x24))(param_2);
  FUN_0052b480(param_2);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 4))();
    if (iVar2 < 1) {
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 4))();
      if (iVar2 < 2) {
        uVar3 = 5;
      }
      else {
        uVar3 = 6;
      }
    }
    FUN_0064c090(uVar3);
  }
  if (*(int **)(param_1 + 0x13d26) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x13d26) + 0x18))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x13d30) + 0x18))(param_2);
  return;
}


