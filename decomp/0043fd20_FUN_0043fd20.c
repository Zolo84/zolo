// FUN_0043fd20 @ 43fd20 size=80

void __fastcall FUN_0043fd20(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  cVar4 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  if (cVar4 == '\0') {
    piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      piVar3 = piVar1;
      if (*(int *)(iVar2 + 0x92) != *(int *)(param_1 + 0x10)) {
        FUN_00433930();
      }
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x92);
    FUN_00433950();
  }
  return;
}


