// FUN_006ecdf0 @ 6ecdf0 size=68

undefined4 __thiscall FUN_006ecdf0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x12) <= param_3) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    if (param_3 <= iVar1 + *(int *)((int)param_1 + 0x12)) {
      if (*(int *)((int)param_1 + 0xe) <= param_2) {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        if (param_2 <= iVar1 + 0x14 + *(int *)((int)param_1 + 0xe)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


