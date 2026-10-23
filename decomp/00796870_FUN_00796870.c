// FUN_00796870 @ 796870 size=376

void __thiscall FUN_00796870(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_1c;
  
  if (*param_2 == 0) {
    local_1c = operator_new(0x12);
    if (local_1c == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      cVar1 = *param_3;
      *local_1c = 0;
      *(char *)(local_1c + 1) = cVar1;
      *(undefined4 *)((int)local_1c + 6) = 0;
      *(undefined4 *)((int)local_1c + 10) = 0;
      *(undefined4 *)((int)local_1c + 0xe) = 0;
    }
    *param_2 = (int)local_1c;
    if (param_3[1] == '\0') {
      *(undefined4 *)*param_2 = param_4;
      *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    }
    else {
      FUN_00796870(*param_2 + 0xe,param_3 + 1,param_4);
    }
  }
  else {
    iVar2 = FUN_007a76c0((int)*param_3);
    iVar3 = FUN_007a76c0((int)*(char *)(*param_2 + 4));
    if (iVar2 == iVar3) {
      if (param_3[1] == '\0') {
        *(undefined4 *)*param_2 = param_4;
        *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
      }
      else {
        FUN_00796870(*param_2 + 0xe,param_3 + 1,param_4);
      }
    }
    else if (iVar2 - iVar3 < 1) {
      FUN_00796870(*param_2 + 6,param_3,param_4);
    }
    else {
      FUN_00796870(*param_2 + 10,param_3,param_4);
    }
  }
  return;
}


