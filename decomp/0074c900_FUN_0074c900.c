// FUN_0074c900 @ 74c900 size=72

uint __thiscall FUN_0074c900(int *param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)param_1[8];
  if (uVar3 != 0) {
    iVar1 = *(int *)param_1[0xc];
    if (uVar3 < iVar1 + uVar3) {
      *(int *)param_1[0xc] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[8];
      *(byte **)param_1[8] = pbVar2 + 1;
      *pbVar2 = param_2;
      return (uint)param_2;
    }
  }
  uVar3 = (**(code **)(*param_1 + 4))(param_2);
  return uVar3;
}


