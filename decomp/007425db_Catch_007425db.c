// Catch@007425db @ 7425db size=39

undefined * Catch_007425db(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uVar2 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4);
  uVar3 = uVar2 | 4;
  if (*(int *)(*(int *)(*piVar1 + 4) + 0x28 + (int)piVar1) == 0) {
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(char)uVar3) | 4;
  }
  FUN_00798ed3(uVar3,1);
  return &DAT_00742602;
}


