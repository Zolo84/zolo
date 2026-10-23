// FUN_0075dac0 @ 75dac0 size=227

uint FUN_0075dac0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x250) == 1) {
    cVar1 = FUN_004ea7d0();
    if (cVar1 != '\0') {
      return (uint)(param_1 == 8);
    }
    if (*(int *)(param_2 + 0x250) == 1) {
      cVar1 = FUN_004ea7f0();
      if (cVar1 != '\0') {
        return (uint)(param_1 == 2);
      }
    }
  }
  if ((*(int *)(param_2 + 0x250) == 2) || (*(int *)(param_2 + 0x250) == 4)) {
    cVar1 = FUN_004ea7d0();
    if (cVar1 != '\0') {
      return (uint)(param_1 == 9);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x250);
  if ((uVar2 == 2) || (uVar2 == 4)) {
    uVar2 = FUN_004ea7f0();
    if ((char)uVar2 != '\0') {
      return (uint)(param_1 == 4);
    }
  }
  if (*(int *)(param_2 + 0x250) == 3) {
    uVar2 = FUN_004ea7d0();
    if ((char)uVar2 != '\0') {
      return (uint)(param_1 == 10);
    }
    if (*(int *)(param_2 + 0x250) == 3) {
      uVar2 = FUN_004ea7f0();
      if ((char)uVar2 != '\0') {
        return (uint)(param_1 == 5);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


