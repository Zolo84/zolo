// FUN_0041d010 @ 41d010 size=370

void FUN_0041d010(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  if (((param_2 == (int *)0x0) || (*(undefined4 *)((int)param_2 + 0x13c2) = 0, param_3 == 0)) ||
     (param_4 < 0)) {
    if (param_1 != (int *)0x0) {
      *param_1 = -2;
    }
    if (param_2 != (int *)0x0) {
      *(undefined4 *)((int)param_2 + 0x13c2) = 0xfffffffe;
    }
    return;
  }
  if ((char)param_2[0x4e4] == '\0') {
    if (param_1 != (int *)0x0) {
      *param_1 = -1;
    }
    *(undefined4 *)((int)param_2 + 0x13c2) = 0xffffffff;
    return;
  }
  if ((*(byte *)(*param_2 + 0xc) & 0x20) == 0) {
    if (param_4 == 0) {
      if (param_1 != (int *)0x0) {
        *param_1 = 0;
      }
      *(undefined4 *)((int)param_2 + 0x13c2) = 0;
      return;
    }
    *(int *)((int)param_2 + 0x1396) = param_4;
    *(int *)((int)param_2 + 0x1392) = param_3;
    while( true ) {
      *(undefined4 *)((int)param_2 + 0x13a6) = 5000;
      *(int **)((int)param_2 + 0x13a2) = param_2 + 1;
      iVar1 = FUN_0041b8a0((int *)((int)param_2 + 0x1392),0);
      if (iVar1 != 1) {
        if (param_1 != (int *)0x0) {
          *param_1 = iVar1;
        }
        *(int *)((int)param_2 + 0x13c2) = iVar1;
        return;
      }
      if ((*(uint *)((int)param_2 + 0x13a6) < 5000) &&
         ((iVar2 = 5000 - *(uint *)((int)param_2 + 0x13a6),
          iVar1 = FUN_007a6a0f(param_2 + 1,1,iVar2,*param_2), iVar2 != iVar1 ||
          ((*(byte *)(*param_2 + 0xc) & 0x20) != 0)))) break;
      if (*(int *)((int)param_2 + 0x1396) == 0) {
        if (param_1 != (int *)0x0) {
          *param_1 = 0;
        }
        *(undefined4 *)((int)param_2 + 0x13c2) = 0;
        return;
      }
    }
    if (param_1 != (int *)0x0) {
      *param_1 = -6;
    }
    *(undefined4 *)((int)param_2 + 0x13c2) = 0xfffffffa;
    return;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -6;
  }
  *(undefined4 *)((int)param_2 + 0x13c2) = 0xfffffffa;
  return;
}


