// FUN_004b8840 @ 4b8840 size=131

void __fastcall FUN_004b8840(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x84) != 0)) {
    for (piVar1 = *(int **)(*(int *)(param_1 + 0x80) + 0x2c); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      iVar3 = (&DAT_0089cad8)[*piVar1];
      for (piVar2 = *(int **)(*(int *)(param_1 + 0x84) + 0x2c); piVar2 != (int *)0x0;
          piVar2 = (int *)piVar2[2]) {
        if (((iVar3 != 0) && ((&DAT_0089cad8)[*piVar2] != 0)) &&
           (iVar5 = FUN_005862f0(*piVar2), iVar4 = DAT_00893530, iVar5 != 0)) {
          *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(DAT_00893530 + 0x14);
          *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(iVar4 + 0x18);
        }
      }
    }
  }
  return;
}


