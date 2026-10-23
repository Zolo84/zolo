// FUN_00407b10 @ 407b10 size=315

void __thiscall
FUN_00407b10(int *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_6 + 4))(param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar5 = 0;
  iVar4 = (param_1[1] - param_2) * param_1[3];
  param_2 = param_1[3] * param_2;
  iVar3 = param_3;
  if (param_3 < param_1[2]) {
    do {
      iVar5 = iVar5 + 1;
      if (param_4[2] < iVar5) break;
      FUN_00429630(iVar1,iVar3 * param_1[6] + param_2 + iVar2,iVar4);
      FUN_00429630(iVar4 + iVar1,iVar3 * param_1[6] + iVar2,param_2);
      iVar1 = iVar1 + param_4[6];
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar5 = iVar5 + 1;
      if (param_4[2] < iVar5) break;
      FUN_00429630(iVar1,iVar3 * param_1[6] + param_2 + iVar2,iVar4);
      FUN_00429630(iVar4 + iVar1,iVar3 * param_1[6] + iVar2,param_2);
      iVar1 = iVar1 + param_4[6];
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_4 + 0xc))();
  return;
}


