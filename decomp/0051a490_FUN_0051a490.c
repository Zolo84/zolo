// FUN_0051a490 @ 51a490 size=34

undefined4 __fastcall FUN_0051a490(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x26);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar3 + 2;
    iVar2 = *piVar3;
    piVar3 = (int *)*piVar1;
  } while (*(char *)(iVar2 + 0x157) == '\0');
  return CONCAT31((int3)((uint)*piVar1 >> 8),1);
}


