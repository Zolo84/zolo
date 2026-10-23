// FUN_0066a430 @ 66a430 size=131

undefined4 __thiscall FUN_0066a430(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = FUN_00428ee0((short)(param_2 + 4));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -0x14;
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  iVar4 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
  if (iVar4 == iVar3) {
    piVar1 = *(int **)(iVar2 + 0x26);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      piVar5 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x28))
                                (&param_2,*(undefined2 *)(*piVar1 + 0xc),
                                 (short)((uint)*(undefined4 *)(*piVar1 + 0xe) >> 0x10));
      if (*piVar5 == 0) break;
      piVar1 = (int *)piVar1[2];
    }
  }
  return 0;
}


