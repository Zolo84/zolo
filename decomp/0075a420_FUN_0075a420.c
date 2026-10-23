// FUN_0075a420 @ 75a420 size=291

undefined4 __thiscall FUN_0075a420(int param_1,int param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x7e);
  if (((iVar5 != 5) && (iVar5 != 7)) && (iVar5 != 8)) {
    return 0;
  }
  puVar3 = (undefined2 *)FUN_0044df10();
  piVar4 = (int *)FUN_004582e0(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
  cVar2 = (**(code **)(*piVar4 + 0x24))();
  if (cVar2 != '\0') {
    iVar5 = *(int *)(param_1 + 0x7e);
    if ((iVar5 == 5) && (param_2 != -0x3650)) {
      for (piVar4 = *(int **)(param_2 + 0x3654); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*(int *)(*(int *)(*piVar4 + 0x18) + 0x7e) == 5) {
          return 0;
        }
      }
    }
    if ((iVar5 == 7) && (param_2 != -0x3650)) {
      for (piVar4 = *(int **)(param_2 + 0x3654); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*(int *)(*(int *)(*piVar4 + 0x18) + 0x7e) == 7) {
          return 0;
        }
      }
    }
    if ((iVar5 == 8) && (param_2 != -0x3650)) {
      for (piVar4 = *(int **)(param_2 + 0x3654); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*(int *)(*(int *)(*piVar4 + 0x18) + 0x7e) == 8) {
          return 0;
        }
      }
    }
    iVar5 = FUN_0075a150();
    puVar3 = *(undefined2 **)(iVar5 + 4);
    do {
      if (puVar3 == (undefined2 *)0x0) {
        return 1;
      }
      puVar1 = *(undefined2 **)(puVar3 + 5);
      piVar4 = (int *)FUN_004582e0(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
      cVar2 = (**(code **)(*piVar4 + 0x24))();
      puVar3 = puVar1;
    } while (cVar2 == '\0');
  }
  return 0;
}


