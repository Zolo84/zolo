// FUN_004e4af0 @ 4e4af0 size=98

void __thiscall FUN_004e4af0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00428ee0(param_4);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(iVar2 + -8);
  }
  (**(code **)(**(int **)(param_1 + 0x1aa) + 0x18))(puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1aa) + 8))();
  if (cVar1 != '\0') {
    if (*(undefined4 **)(param_1 + 0x1aa) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1aa))(1);
    }
    *(undefined4 *)(param_1 + 0x1aa) = 0;
  }
  return;
}


