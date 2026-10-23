// FUN_00428ad0 @ 428ad0 size=44

int FUN_00428ad0(short *param_1)

{
  if (*param_1 == 2) {
    if (DAT_00be19d0 != 0) {
      return DAT_00be19d0 + 8;
    }
  }
  else if (*param_1 == 3) {
    return (&DAT_0089cad8)[*(int *)(param_1 + 1)];
  }
  return 0;
}


