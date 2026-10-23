// FUN_006a8320 @ 6a8320 size=122

void FUN_006a8320(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = DAT_00d615e4;
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    piVar5 = *(int **)(*(int *)(*(int *)(iVar1 + 0x22) + 0x22) + 4);
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[2];
      uVar4 = (&DAT_0089cad8)[*piVar5];
      piVar6 = *(int **)(*(int *)(*(int *)(iVar1 + 0x26) + 0x22) + 4);
      while (piVar5 = piVar3, piVar6 != (int *)0x0) {
        piVar5 = (int *)piVar6[2];
        FUN_006ad630(0x17,&LAB_00498dc0,uVar4,(&DAT_0089cad8)[*piVar6]);
        piVar6 = piVar5;
      }
    }
  }
  return;
}


