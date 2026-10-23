// FUN_00404a40 @ 404a40 size=85

void __thiscall FUN_00404a40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2;
    if (param_1[1] < param_2) {
      iVar1 = param_1[1] + -1;
    }
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (param_1[2] < param_3) {
    param_3 = param_1[2] + -1;
  }
  (**(code **)(*param_1 + 4))(iVar1,param_3);
  FUN_004049a0(iVar1,param_3,param_2);
  (**(code **)(*param_1 + 0xc))();
  return;
}


