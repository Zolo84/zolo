// FUN_004049a0 @ 4049a0 size=158

void __thiscall FUN_004049a0(int *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = (ushort *)(**(code **)(*param_1 + 4))(param_2,param_3);
  if ((uint)*puVar1 == (int)DAT_0088cee8) {
    iVar2 = param_3 + -1;
    do {
      *puVar1 = (ushort)param_2;
      if (0 < param_2) {
        FUN_004049a0(param_2 + -1,param_3,param_2);
      }
      if (-1 < iVar2) {
        FUN_004049a0(param_2,iVar2,param_2);
      }
      if (param_2 < param_1[1] + -1) {
        FUN_004049a0(param_2 + 1,param_3,param_2);
      }
      if (param_1[2] + -1 <= param_3) {
        return;
      }
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 1;
      puVar1 = (ushort *)(**(code **)(*param_1 + 4))(param_2,param_3);
    } while ((uint)*puVar1 == (int)DAT_0088cee8);
  }
  return;
}


