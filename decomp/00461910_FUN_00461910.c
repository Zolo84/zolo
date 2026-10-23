// FUN_00461910 @ 461910 size=373

void FUN_00461910(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  for (piVar1 = *(int **)(*(int *)(*param_2 + 0x22) + 4); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    uVar2 = (&DAT_0089cad8)[*(int *)((int)param_1 + 10)];
    uVar3 = (&DAT_0089cad8)[*piVar1];
    FUN_004623c0(*piVar1);
    FUN_004623c0(*(undefined4 *)((int)param_1 + 10));
    *(undefined1 *)(param_2[1] + 8 + *(int *)((int)param_1 + 10) * 0x15d) = 0;
    iVar4 = (&DAT_0089cad8)[*piVar1];
    piVar6 = *(int **)((&DAT_0089cad8)[*(int *)((int)param_1 + 10)] + 0xe8a4);
    while (piVar6 != (int *)0x0) {
      piVar5 = (int *)piVar6[2];
      iVar7 = *(int *)(DAT_00ab27b4 + 0x3d4 + *piVar6 * 0x4b2);
      piVar6 = piVar5;
      if ((iVar7 == iVar4) && (*(char *)(iVar7 + 0x24c) == '\0')) {
        FUN_004e7300(iVar4,1);
      }
    }
    iVar4 = (&DAT_0089cad8)[*(int *)((int)param_1 + 10)];
    piVar6 = *(int **)((&DAT_0089cad8)[*piVar1] + 0xe8a4);
    while (piVar6 != (int *)0x0) {
      piVar5 = (int *)piVar6[2];
      iVar7 = *(int *)(DAT_00ab27b4 + 0x3d4 + *piVar6 * 0x4b2);
      piVar6 = piVar5;
      if ((iVar7 == iVar4) && (*(char *)(iVar7 + 0x24c) == '\0')) {
        FUN_004e7300(iVar4,1);
      }
    }
    FUN_006ad630(0x16,&LAB_00466b60,uVar2,uVar3);
  }
  iVar4 = *(int *)((int)param_1 + 10);
  iVar7 = FUN_00584c90();
  (**(code **)(**(int **)(*param_1 + 0x22) + 0x18))(iVar4);
  if (iVar7 == iVar4) {
    FUN_00584cb0();
  }
  return;
}


