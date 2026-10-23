// FUN_005274d0 @ 5274d0 size=85

undefined4 __fastcall FUN_005274d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  
  piVar4 = *(int **)(param_1 + 4);
  do {
    do {
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      cVar5 = (**(code **)(*piVar2 + 0x70))();
      piVar4 = piVar1;
    } while (cVar5 != '\0');
    piVar1 = *(int **)((int)piVar2 + 0x26);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[2];
      iVar3 = *piVar1;
      cVar5 = FUN_00504570(0);
      piVar1 = piVar2;
      if ((cVar5 != '\0') && (*(char *)(iVar3 + 0x15e) == '\0')) {
        return 0;
      }
    }
  } while( true );
}


