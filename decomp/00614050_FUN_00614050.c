// FUN_00614050 @ 614050 size=113

int __fastcall FUN_00614050(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = 0;
  iVar4 = 1;
  piVar5 = &DAT_0089cadc;
  do {
    if (*piVar5 != 0) {
      iVar2 = FUN_00451250(*(undefined4 *)(*(int *)(param_1 + 0x90) + 6));
      if ((0 < iVar2) && (iVar4 != *(int *)(DAT_00d0ca90 + 6))) {
        cVar1 = FUN_004512e0(*(undefined4 *)(*(int *)(param_1 + 0x90) + 6));
        if (cVar1 == '\0') {
          iVar2 = FUN_00451250(*(undefined4 *)(*(int *)(param_1 + 0x90) + 6));
          iVar3 = iVar3 + iVar2;
        }
      }
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar5 < 0x89d038);
  return iVar3;
}


