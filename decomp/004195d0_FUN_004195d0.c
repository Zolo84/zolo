// FUN_004195d0 @ 4195d0 size=116

void __thiscall FUN_004195d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_14 [4];
  int local_4;
  
  piVar1 = (int *)(param_2 + 0x10);
  piVar4 = local_14;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar3 = (uint)(local_14[0] +
                (local_14[1] + (local_14[2] + (local_14[3] + local_4 * 4) * 4) * 4) * 8) %
          (uint)param_1[1];
  piVar1 = operator_new(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = *(int *)(param_1[2] + uVar3 * 4);
    *piVar1 = param_2;
    piVar1[1] = iVar2;
  }
  *(int **)(param_1[2] + uVar3 * 4) = piVar1;
  *param_1 = *param_1 + 1;
  return;
}


