// FUN_004ee6d0 @ 4ee6d0 size=19

int __fastcall FUN_004ee6d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


