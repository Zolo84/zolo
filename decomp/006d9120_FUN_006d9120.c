// FUN_006d9120 @ 6d9120 size=108

undefined4 __fastcall FUN_006d9120(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  bVar3 = true;
  iVar2 = *(int *)(param_1 + 0x2220e);
  piVar4 = *(int **)(*(int *)(DAT_00ab27b4 + 0x1c2 + *(int *)(iVar2 + 0x18) * 0x4b2) + 4);
  if (piVar4 != (int *)0x0) {
    do {
      piVar1 = piVar4 + 2;
      if (*(int *)(*piVar4 + 0x248) != param_1) {
        bVar3 = false;
      }
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (!bVar3) {
      return 1;
    }
  }
  if (iVar2 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar2);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


