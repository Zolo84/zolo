// FUN_004c0b40 @ 4c0b40 size=16

void __thiscall FUN_004c0b40(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 10);
  *param_2 = iVar1;
  return;
}


