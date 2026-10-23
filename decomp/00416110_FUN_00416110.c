// FUN_00416110 @ 416110 size=156

undefined4 __thiscall FUN_00416110(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_100 [64];
  
  iVar3 = param_1[1];
  puVar7 = (undefined4 *)(param_2 + 0x25e);
  puVar8 = local_100;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar3 = FUN_004090f0(iVar3);
  piVar1 = (int *)(param_1[2] + iVar3 * 4);
  piVar2 = (int *)*piVar1;
  piVar6 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    while (piVar4 = piVar2, *piVar4 != param_2) {
      piVar2 = (int *)piVar4[1];
      piVar6 = piVar4;
      if ((int *)piVar4[1] == (int *)0x0) {
        return 0;
      }
    }
    if (piVar4 != (int *)0x0) {
      if (piVar6 == (int *)0x0) {
        *piVar1 = piVar4[1];
      }
      else {
        piVar6[1] = piVar4[1];
      }
      FUN_00796cd8(piVar4);
      iVar3 = *param_1;
      *param_1 = iVar3 + -1;
      return CONCAT31((int3)((uint)(iVar3 + -1) >> 8),1);
    }
  }
  return 0;
}


