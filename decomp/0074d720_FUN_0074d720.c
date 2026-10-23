// FUN_0074d720 @ 74d720 size=90

undefined1 * __thiscall FUN_0074d720(undefined1 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) goto LAB_0074d771;
  uVar4 = *(uint *)piVar1[8];
  if (uVar4 == 0) {
LAB_0074d75c:
    uVar4 = (**(code **)(*piVar1 + 4))(param_2);
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 + uVar4 <= uVar4) goto LAB_0074d75c;
    *(int *)piVar1[0xc] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    *pbVar3 = param_2;
    uVar4 = (uint)param_2;
  }
  if (uVar4 != 0xffffffff) {
    return param_1;
  }
LAB_0074d771:
  *param_1 = 1;
  return param_1;
}


