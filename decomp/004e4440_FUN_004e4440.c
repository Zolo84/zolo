// FUN_004e4440 @ 4e4440 size=231

void __fastcall FUN_004e4440(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) &&
     (*(int *)(param_1 + 0x3d4) != 0)) {
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x290) / 2;
    if ((*(int *)(param_1 + 0x482) != 0) &&
       (iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x482) + 0x28) + 4))(), iVar2 < 2)) {
      iVar2 = *(int *)(param_1 + 0x2a0);
      *(int *)(param_1 + 0x2a0) = iVar2 + 1;
      if (0 < *(int *)(param_1 + 0x290)) {
        *(int *)(param_1 + 0x2a0) = iVar2 + 2;
      }
    }
    iVar2 = *(int *)(param_1 + 0x290);
    if (0 < iVar2) {
      piVar4 = *(int **)(param_1 + 0x298);
      do {
        iVar1 = *(int *)(DAT_00ab27b4 + 0x3d8 + *piVar4 * 0x4b2);
        if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x3d8))) {
          uVar3 = __ftol();
          *(undefined4 *)(param_1 + 0x2a0) = uVar3;
        }
        piVar4 = piVar4 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


