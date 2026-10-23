// FUN_0043fb50 @ 43fb50 size=74

void __fastcall FUN_0043fb50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    piVar3 = piVar1;
    if (*(int *)((int)piVar2 + 0x92) != *(int *)(param_1 + 0x10)) {
      if (*(char *)((int)piVar2 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar2 + 0x60))();
      *(undefined1 *)((int)piVar2 + 0x86) = 1;
    }
  }
  return;
}


