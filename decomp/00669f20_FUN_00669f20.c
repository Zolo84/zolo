// FUN_00669f20 @ 669f20 size=197

undefined4 __fastcall FUN_00669f20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  int iStack_4;
  
  uVar7 = (undefined2)(param_1 + 4);
  iStack_4 = param_1;
  iVar2 = FUN_00428ee0(uVar7);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -0x14;
  }
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
  if (iVar2 != 0) {
    FUN_00428ee0(uVar7);
    iVar3 = FUN_00500d50();
    iVar2 = FUN_00428ee0(uVar7);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x14;
    }
    iVar4 = (**(code **)(*(int *)(iVar3 + 8) + 4))();
    iVar5 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
    if (iVar5 == iVar4) {
      piVar1 = *(int **)(iVar2 + 0x26);
      while( true ) {
        if (piVar1 == (int *)0x0) {
          return 1;
        }
        piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 8) + 0x28))
                                  (&iStack_4,*(undefined2 *)(*piVar1 + 0xc),
                                   (short)((uint)*(undefined4 *)(*piVar1 + 0xe) >> 0x10));
        if (*piVar6 == 0) break;
        piVar1 = (int *)piVar1[2];
      }
    }
    return 0;
  }
  return 0;
}


