// FUN_006cd140 @ 6cd140 size=60

uint __thiscall FUN_006cd140(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint in_EAX;
  
  piVar1 = *(int **)(param_1 + 8);
  do {
    if (piVar1 == (int *)0x0) {
LAB_006cd164:
      return in_EAX & 0xffffff00;
    }
    in_EAX = FUN_007a8730(param_2,*piVar1);
    if (in_EAX == 0) {
      if (*piVar1 != 0) {
        return (uint)*(byte *)(*piVar1 + 0x200);
      }
      goto LAB_006cd164;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}


