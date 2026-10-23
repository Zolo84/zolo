// FUN_00529f20 @ 529f20 size=145

int * __thiscall FUN_00529f20(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  piVar3 = (int *)0x0;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    piVar1 = (int *)piVar4[1];
    piVar4 = (int *)*piVar4;
    cVar2 = (**(code **)(*piVar4 + 0x30))();
    if ((cVar2 == '\0') || (*(char *)((int)piVar4 + 0x17e) != '\0')) {
LAB_00529f5f:
      (**(code **)(*piVar4 + 0xac))();
      if ((*(int *)((int)piVar4 + 0x14e) == param_2) &&
         (((piVar3 == (int *)0x0 ||
           ((*(char *)((int)piVar3 + 0x17e) == '\0' && (*(char *)((int)piVar4 + 0x17e) != '\0'))))
          && (cVar2 = FUN_00523a00(DAT_00d0ca90), cVar2 != '\0')))) {
        piVar3 = piVar4;
      }
    }
    else {
      (**(code **)(*piVar4 + 0x18))();
      cVar2 = FUN_004f0aa0();
      if (cVar2 == '\0') goto LAB_00529f5f;
    }
    piVar4 = piVar1;
    if (piVar1 == (int *)0x0) {
      return piVar3;
    }
  } while( true );
}


