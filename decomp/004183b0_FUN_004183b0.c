// FUN_004183b0 @ 4183b0 size=207

void __thiscall FUN_004183b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_28 [4];
  int local_18;
  int local_14 [4];
  int local_4;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
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
  do {
    if (piVar2 == (int *)0x0) {
LAB_0041846b:
      FUN_00419480(0);
      return;
    }
    piVar3 = (int *)(*piVar2 + 0x10);
    piVar4 = local_14;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((((local_14[1] == local_28[1]) && (local_14[0] == local_28[0])) &&
        (local_14[2] == local_28[2])) && ((local_14[3] == local_28[3] && (local_4 == local_18)))) {
      if (piVar2 != (int *)0x0) {
        FUN_00419480(*piVar2);
        return;
      }
      goto LAB_0041846b;
    }
    piVar2 = (int *)piVar2[1];
  } while( true );
}


