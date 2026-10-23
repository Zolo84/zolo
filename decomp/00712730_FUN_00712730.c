// FUN_00712730 @ 712730 size=58

uint __fastcall FUN_00712730(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint in_EAX;
  
  piVar2 = *(int **)(param_1 + 0x1272);
  do {
    if (piVar2 == (int *)0x0) {
      return in_EAX & 0xffffff00;
    }
    piVar4 = *(int **)(*piVar2 + 4);
    while (piVar4 != (int *)0x0) {
      piVar1 = piVar4 + 2;
      iVar3 = *piVar4;
      piVar4 = (int *)*piVar1;
      if (*(int *)(iVar3 + 4) == 0x2c) {
        return CONCAT31((int3)((uint)*piVar1 >> 8),1);
      }
    }
    piVar2 = (int *)piVar2[2];
    in_EAX = 0;
  } while( true );
}


