// FUN_0042c470 @ 42c470 size=384

void __thiscall FUN_0042c470(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ba09b;
  local_10 = ExceptionList;
  if (*param_2 == 0) {
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x12);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_0042c850(0,*param_3,0,0,0);
    }
    local_8 = 0xffffffff;
    *param_2 = local_24;
    if (param_3[1] == '\0') {
      *(undefined4 *)*param_2 = param_4;
      *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    }
    else {
      FUN_0042c470(*param_2 + 0xe,param_3 + 1,param_4);
    }
  }
  else {
    ExceptionList = &local_10;
    iVar2 = FUN_007a76c0((int)*param_3);
    iVar3 = FUN_007a76c0((int)*(char *)(*param_2 + 4));
    if (iVar2 == iVar3) {
      if (param_3[1] == '\0') {
        *(undefined4 *)*param_2 = param_4;
        *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
      }
      else {
        FUN_0042c470(*param_2 + 0xe,param_3 + 1,param_4);
      }
    }
    else if (iVar2 - iVar3 < 1) {
      FUN_0042c470(*param_2 + 6,param_3,param_4);
    }
    else {
      FUN_0042c470(*param_2 + 10,param_3,param_4);
    }
  }
  ExceptionList = local_10;
  return;
}


