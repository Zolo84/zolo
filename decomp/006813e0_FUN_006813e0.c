// FUN_006813e0 @ 6813e0 size=171

undefined4 __thiscall FUN_006813e0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_004e9370(param_2);
  cVar1 = FUN_004e9500(*(undefined4 *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x290)) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + 4 + *(int *)(iVar2 + 0x298)) != 4) {
        iVar3 = FUN_004e9370(*(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x298)));
        if ((((*(int *)(iVar3 + 0x3d8) != 0) && (*(int *)(iVar3 + 0x254) != 8)) &&
            (*(int *)(iVar3 + 0x254) != 9)) &&
           (cVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar3 + 0x3d8) + 6)), cVar1 != '\0')) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *(int *)(iVar2 + 0x290));
  }
  return 0;
}


