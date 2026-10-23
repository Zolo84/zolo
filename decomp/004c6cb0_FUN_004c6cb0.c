// FUN_004c6cb0 @ 4c6cb0 size=128

float10 __fastcall FUN_004c6cb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float local_8;
  
  iVar4 = 0;
  local_8 = 0.0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  piVar5 = *(int **)(iVar3 + 4);
  if (piVar5 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar5[2];
      iVar3 = *piVar5;
      FUN_00522770();
      piVar5 = *(int **)(iVar3 + 0x26);
      while (piVar5 != (int *)0x0) {
        piVar2 = (int *)piVar5[2];
        fVar6 = (float10)FUN_00451370(*(undefined4 *)(*piVar5 + 0x130));
        iVar4 = iVar4 + 1;
        local_8 = (float)(fVar6 + (float10)local_8);
        piVar5 = piVar2;
      }
      piVar5 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (iVar4 != 0) {
      return (float10)local_8 / (float10)iVar4;
    }
  }
  return (float10)local_8;
}


