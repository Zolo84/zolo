// FUN_0045aa50 @ 45aa50 size=103

void __thiscall FUN_0045aa50(int *param_1,int *param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_20 [8];
  undefined2 local_18;
  
  while( true ) {
    if (param_3 == 0) {
      *param_2 = 0;
      return;
    }
    local_18 = param_4;
    iVar1 = *param_1;
    FUN_0045aac0(auStack_20);
    cVar2 = (**(code **)(iVar1 + 0xc))();
    if (cVar2 != '\0') break;
    param_3 = *(int *)(param_3 + 10);
  }
  *param_2 = param_3;
  return;
}


