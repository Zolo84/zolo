// FUN_0048e8e0 @ 48e8e0 size=72

undefined4 FUN_0048e8e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00428460(*(int *)(param_1 + 4) + 0xe);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -0xc;
    if (iVar2 != 0) {
      *(int *)(iVar1 + 0x2e) = *(int *)(iVar1 + 0x2e) + *(int *)(*(int *)(param_1 + 4) + 0x14);
    }
  }
  if (*(int *)(iVar2 + 0x3a) < 0) {
    *(undefined4 *)(iVar2 + 0x3a) = 0;
  }
  return 3;
}


