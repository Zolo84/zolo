// FUN_004f0910 @ 4f0910 size=185

undefined4 __thiscall FUN_004f0910(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  cVar5 = FUN_00523ab0(*(undefined4 *)(param_1 + 0x248),0);
  if (cVar5 != '\0') {
    return 1;
  }
  piVar1 = *(int **)(param_2 + 0x26);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(char *)(iVar2 + 0x161) == '\0');
    piVar4 = *(int **)(param_1 + 0x26);
    while (piVar4 != (int *)0x0) {
      piVar3 = (int *)piVar4[2];
      iVar7 = *piVar4;
      piVar4 = piVar3;
      if (*(char *)(iVar7 + 0x160) != '\0') {
        iVar7 = (int)ROUND(*(float *)(iVar7 + 0x2d0) * *(float *)(iVar2 + 0x2dc)) / 2;
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar6 = _rand();
        if (iVar6 % 1000 < iVar7) {
          return 1;
        }
      }
    }
  } while( true );
}


