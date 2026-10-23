// FUN_0066b0e0 @ 66b0e0 size=98

void FUN_0066b0e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  
  for (piVar1 = *(int **)(param_1 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    piVar2 = (int *)*piVar1;
    cVar4 = (**(code **)(*piVar2 + 0x30))();
    if (cVar4 != '\0') {
      for (iVar3 = *(int *)((int)piVar2 + 0x26); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        puVar5 = (undefined2 *)FUN_00447250();
        FUN_0049a190(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
      }
    }
  }
  return;
}


