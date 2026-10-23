// FUN_0041b8a0 @ 41b8a0 size=367

int FUN_0041b8a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (param_1 == 0) {
    return -2;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    return -2;
  }
  iVar2 = *piVar1;
  if (iVar2 != param_1) {
    return -2;
  }
  iVar3 = piVar1[1];
  do {
    if (3 < iVar3 - 1U) {
      return 0;
    }
    switch(iVar3 - 1U) {
    case 0:
      return -1;
    case 1:
      if (param_2 == 0) {
        cVar4 = FUN_0041ba20(param_1);
        return (-(uint)(cVar4 != '\0') & 3) - 2;
      }
      if (param_2 == 1) {
        iVar3 = *(int *)(param_1 + 4);
        piVar1[1] = 3;
        piVar1[3] = iVar3;
      }
      else {
        if (param_2 != 2) {
          return -2;
        }
        iVar3 = *(int *)(param_1 + 4);
        piVar1[1] = 4;
        piVar1[3] = iVar3;
      }
      iVar3 = piVar1[1];
      break;
    case 2:
      if (param_2 != 1) {
        return -1;
      }
      if (piVar1[3] == *(int *)(iVar2 + 4)) {
        FUN_0041ba20(param_1);
        if (((piVar1[3] == 0) && ((0xff < (uint)piVar1[0xd] || (piVar1[0xe] < 1)))) &&
           (piVar1[0x13] <= piVar1[0x14])) {
          piVar1[1] = 2;
          return 1;
        }
        return 2;
      }
      return -1;
    case 3:
      if (param_2 != 2) {
        return -1;
      }
      if (piVar1[3] != *(int *)(iVar2 + 4)) {
        return -1;
      }
      cVar4 = FUN_0041ba20(param_1);
      if (cVar4 == '\0') {
        return -1;
      }
      if ((piVar1[3] == 0) &&
         (((0xff < (uint)piVar1[0xd] || (piVar1[0xe] < 1)) && (piVar1[0x13] <= piVar1[0x14])))) {
        piVar1[1] = 1;
        return 4;
      }
      return 3;
    }
  } while( true );
}


