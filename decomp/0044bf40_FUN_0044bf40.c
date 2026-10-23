// FUN_0044bf40 @ 44bf40 size=87

undefined4 __fastcall FUN_0044bf40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  bVar4 = false;
  piVar5 = *(int **)(param_1 + 0xe892);
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    iVar3 = *piVar5;
    iVar1 = DAT_00ab27b4 + iVar3 * 0x4b2;
    piVar5 = piVar2;
    if (((*(int *)(DAT_00ab27b4 + 0x46a + iVar3 * 0x4b2) != 0) &&
        (*(int *)(iVar1 + 0x3d8) == param_1)) && (!bVar4)) {
      uVar6 = *(undefined4 *)(iVar1 + 0x12);
      bVar4 = true;
    }
  }
  return uVar6;
}


