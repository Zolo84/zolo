// FUN_006af650 @ 6af650 size=70

void FUN_006af650(int *param_1,code *param_2)

{
  do {
    if (*(int *)((int)param_1 + 6) != 0) {
      FUN_006af650(*(int *)((int)param_1 + 6),param_2);
    }
    if (*param_1 != 0) {
      (*param_2)(*param_1);
    }
    if (*(int *)((int)param_1 + 0xe) != 0) {
      FUN_006af650(*(int *)((int)param_1 + 0xe),param_2);
    }
    param_1 = *(int **)((int)param_1 + 10);
  } while (param_1 != (int *)0x0);
  return;
}


