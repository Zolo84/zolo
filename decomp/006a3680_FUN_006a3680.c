// FUN_006a3680 @ 6a3680 size=48

void __thiscall FUN_006a3680(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if ((param_2 == *(int *)((int)param_1 + 10)) || (param_3 == *(int *)((int)param_1 + 10))) {
    cVar1 = (**(code **)(*param_1 + 0x22c))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 200))();
    }
  }
  return;
}


