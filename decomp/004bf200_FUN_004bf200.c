// FUN_004bf200 @ 4bf200 size=131

undefined4 __fastcall FUN_004bf200(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x84) + 0x2c);
  do {
    do {
      if (piVar3 == (int *)0x0) {
        piVar3 = *(int **)(*(int *)(param_1 + 0x80) + 0x2c);
        do {
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          piVar1 = (int *)piVar3[2];
          iVar2 = *piVar3;
          piVar3 = piVar1;
        } while (((&DAT_0089cad8)[iVar2] == 0) ||
                ((cVar4 = FUN_00444290(), cVar4 == '\0' && (cVar4 = FUN_00444270(), cVar4 == '\0')))
                );
        return 1;
      }
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      piVar3 = piVar1;
    } while ((&DAT_0089cad8)[iVar2] == 0);
    cVar4 = FUN_00444290();
    if (cVar4 != '\0') {
      return 1;
    }
    cVar4 = FUN_00444270();
  } while (cVar4 == '\0');
  return 1;
}


