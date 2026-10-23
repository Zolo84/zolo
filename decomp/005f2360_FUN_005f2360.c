// FUN_005f2360 @ 5f2360 size=326

void __fastcall FUN_005f2360(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a) + 6);
  if ((&DAT_0089cad8)[iVar1] == 0) {
    return;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x42) + 0x12da) + iVar1 * 0x2c + 0x2c) == '\0') {
    piVar3 = (int *)FUN_006436d0(0x13);
    *(int **)(param_1 + 0x36) = piVar3;
    (**(code **)(*piVar3 + 0x50))();
    cVar2 = (**(code **)(**(int **)(param_1 + 0x42) + 0x450))(iVar1,0);
    if (cVar2 != '\0') goto LAB_005f241e;
    piVar3 = *(int **)(param_1 + 0x36);
    if (*(char *)((int)piVar3 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar3 + 0x60))();
  }
  else {
    piVar3 = (int *)FUN_006436d0(0x14);
    *(int **)(param_1 + 0x36) = piVar3;
    (**(code **)(*piVar3 + 0x50))();
    cVar2 = FUN_004a2450(iVar1);
    if (cVar2 != '\0') goto LAB_005f241e;
    piVar3 = *(int **)(param_1 + 0x36);
    if (*(char *)((int)piVar3 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar3 + 0x60))();
  }
  *(undefined1 *)((int)piVar3 + 0x86) = 1;
LAB_005f241e:
  cVar2 = FUN_0042e9a0();
  if (cVar2 != '\0') {
    piVar3 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar3 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar3 + 0x60))();
    *(undefined1 *)((int)piVar3 + 0x86) = 1;
    piVar3 = *(int **)(param_1 + 0x32);
    if (*(char *)((int)piVar3 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar3 + 0x60))();
    *(undefined1 *)((int)piVar3 + 0x86) = 1;
    piVar3 = *(int **)(param_1 + 0x36);
    if (*(char *)((int)piVar3 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar3 + 0x60))();
    *(undefined1 *)((int)piVar3 + 0x86) = 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x2e) + 0x68) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x32) + 0x68) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x36) + 0x68) = 1;
  return;
}


