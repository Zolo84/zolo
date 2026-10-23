// FUN_0040cbd0 @ 40cbd0 size=84

void __thiscall FUN_0040cbd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 + *(int *)((int)param_1 + 0x22);
  iVar1 = param_2 / *(int *)((int)param_1 + 0x26);
  *(int *)((int)param_1 + 0x22) = param_2 % *(int *)((int)param_1 + 0x26);
  if (0 < iVar1) {
    iVar1 = *(int *)((int)param_1 + 0x52) + iVar1;
    iVar2 = *(int *)((int)param_1 + 0x4e) + -1;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    (**(code **)(*param_1 + 0x38))(iVar1);
  }
  if (*(int *)((int)param_1 + 0x52) == *(int *)((int)param_1 + 0x4e) + -1) {
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined4 *)((int)param_1 + 0x22) = 0;
  }
  return;
}


