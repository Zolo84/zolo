// FUN_00527980 @ 527980 size=51

undefined4 __fastcall FUN_00527980(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    do {
      piVar1 = piVar2 + 2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(*piVar2 + 0xc);
      }
      else if (iVar4 != *(int *)(*piVar2 + 0xc)) {
        return 0;
      }
      piVar2 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (iVar4 != 0) {
      uVar3 = FUN_004e9370(iVar4);
      return uVar3;
    }
  }
  return 0;
}


