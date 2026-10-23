// FUN_00415ab0 @ 415ab0 size=95

void __thiscall FUN_00415ab0(int *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)((int)param_1 + 0x22);
  *(int *)((int)param_1 + 0x22) = param_2 % *(int *)((int)param_1 + 0x26);
  iVar1 = *(int *)((int)param_1 + 0x52) + param_2 / *(int *)((int)param_1 + 0x26);
  if ((*(int *)((int)param_1 + 0x4e) <= iVar1) &&
     (*(undefined1 *)((int)param_1 + 0x67) = 1, *(char *)((int)param_1 + 0xd) != '\0')) {
    (**(code **)(*param_1 + 0x38))(0);
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    return;
  }
  (**(code **)(*param_1 + 0x38))(iVar1 % *(int *)((int)param_1 + 0x4e));
  return;
}


