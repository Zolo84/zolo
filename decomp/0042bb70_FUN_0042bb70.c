// FUN_0042bb70 @ 42bb70 size=199

undefined4 __fastcall FUN_0042bb70(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  cVar3 = FUN_0042c390();
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    iVar5 = FUN_0042c300();
    cVar3 = FUN_0042c2c0();
    if (cVar3 == '\0') {
      iVar1 = *(int *)(iVar5 + 4);
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = iVar1;
      }
      if (iVar5 == *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = iVar2;
      }
      if (iVar5 == *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = iVar1;
      }
      FUN_00796cd8(iVar5);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    else {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}


