// FUN_00414630 @ 414630 size=70

void FUN_00414630(int *param_1,code *param_2)

{
  do {
    if (*(int *)((int)param_1 + 6) != 0) {
      FUN_00414630(*(int *)((int)param_1 + 6),param_2);
    }
    if (*param_1 != 0) {
      (*param_2)(*param_1);
    }
    if (*(int *)((int)param_1 + 0xe) != 0) {
      FUN_00414630(*(int *)((int)param_1 + 0xe),param_2);
    }
    param_1 = *(int **)((int)param_1 + 10);
  } while (param_1 != (int *)0x0);
  return;
}


