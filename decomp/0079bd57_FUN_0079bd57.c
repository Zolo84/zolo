// FUN_0079bd57 @ 79bd57 size=63

undefined4 __thiscall FUN_0079bd57(int *param_1,int *param_2)

{
  if ((char)param_1[1] == '\0') {
    Peek();
  }
  if ((char)param_2[1] == '\0') {
    Peek();
  }
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else if (*param_2 == 0) {
    return 0;
  }
  return 1;
}


