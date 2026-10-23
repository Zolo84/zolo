// FUN_006d9090 @ 6d9090 size=125

undefined4 __fastcall FUN_006d9090(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 8))();
  if (cVar2 == '\0') {
    FUN_0052ac00();
  }
  piVar3 = *(int **)(*(int *)((int)param_1 + 0x21e5a) + 4);
  if (piVar3 != (int *)0x0) {
    while (*(int *)(*piVar3 + 0xc) != *(int *)(*(int *)((int)param_1 + 0x2220e) + 0x18)) {
      piVar3 = (int *)piVar3[2];
      if (piVar3 == (int *)0x0) {
        return 1;
      }
    }
    (**(code **)(*param_1 + 0x49c))(*piVar3);
    iVar1 = *(int *)((int)param_1 + 0x2220e);
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)((int)param_1 + 0x2220e) = 0;
  }
  return 1;
}


