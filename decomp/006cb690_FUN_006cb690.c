// FUN_006cb690 @ 6cb690 size=146

uint __fastcall FUN_006cb690(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_retaddr;
  undefined1 local_8 [8];
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x28))(local_8);
  if (*piVar1 < *unaff_retaddr) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x28))(&stack0xfffffff4);
    iVar2 = FUN_00415bd0();
    piVar1 = (int *)(iVar2 + *piVar1);
    if (*unaff_retaddr < (int)piVar1) {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x28))(&stack0xfffffff0);
      if (piVar1[1] < unaff_retaddr[1]) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x28))(&stack0xffffffec);
        iVar3 = FUN_00415be0();
        piVar1 = (int *)unaff_retaddr[1];
        if ((int)piVar1 < *(int *)(iVar2 + 4) + iVar3) {
          return CONCAT31((int3)((uint)piVar1 >> 8),1);
        }
      }
    }
  }
  return (uint)piVar1 & 0xffffff00;
}


