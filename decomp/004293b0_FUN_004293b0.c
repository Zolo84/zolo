// FUN_004293b0 @ 4293b0 size=91

void __thiscall FUN_004293b0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = ((uint)*(ushort *)(param_2 + 4) * 0x10000 + *(int *)(param_2 + 6)) % (uint)param_1[1];
  piVar2 = operator_new(8);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(param_1[2] + uVar3 * 4);
    *piVar2 = param_2;
    piVar2[1] = iVar1;
    *(int **)(param_1[2] + uVar3 * 4) = piVar2;
    *param_1 = *param_1 + 1;
    return;
  }
  *(undefined4 *)(param_1[2] + uVar3 * 4) = 0;
  *param_1 = *param_1 + 1;
  return;
}


