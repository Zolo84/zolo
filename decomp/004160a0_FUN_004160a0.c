// FUN_004160a0 @ 4160a0 size=104

void __thiscall FUN_004160a0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_100 [64];
  
  iVar1 = param_1[1];
  puVar4 = (undefined4 *)(param_2 + 0x25e);
  puVar5 = local_100;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = FUN_004090f0(iVar1);
  piVar2 = operator_new(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1[2] + iVar1 * 4);
    *piVar2 = param_2;
    piVar2[1] = iVar3;
  }
  *(int **)(param_1[2] + iVar1 * 4) = piVar2;
  *param_1 = *param_1 + 1;
  return;
}


