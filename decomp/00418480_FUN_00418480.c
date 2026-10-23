// FUN_00418480 @ 418480 size=172

int __fastcall FUN_00418480(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_28 [4];
  int local_18;
  int local_14 [4];
  int local_4;
  
  piVar2 = (int *)(param_1 + 0x10);
  piVar3 = local_28;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  piVar2 = *(int **)(*(int *)(DAT_0088ec00 + 8) +
                    ((uint)(local_28[0] +
                           (local_28[1] + (local_28[2] + (local_28[3] + local_18 * 4) * 4) * 4) * 8)
                    % *(uint *)(DAT_0088ec00 + 4)) * 4);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar3 = (int *)(*piVar2 + 0x10);
    piVar4 = local_14;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((((local_14[1] == local_28[1]) && (local_14[0] == local_28[0])) &&
        (local_14[2] == local_28[2])) && ((local_14[3] == local_28[3] && (local_4 == local_18))))
    break;
    piVar2 = (int *)piVar2[1];
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  return *piVar2;
}


