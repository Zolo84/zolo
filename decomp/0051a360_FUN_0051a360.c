// FUN_0051a360 @ 51a360 size=88

undefined4 __fastcall FUN_0051a360(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    iVar4 = *(int *)((int)param_1 + 0x26);
    bVar1 = false;
    if (iVar4 != 0) {
      do {
        iVar4 = *(int *)(iVar4 + 8);
        iVar3 = FUN_004fbe90();
        if (iVar3 != 1) {
          bVar1 = true;
        }
        iVar3 = FUN_004fbe90();
        if (iVar3 == 2) {
          return 2;
        }
      } while (iVar4 != 0);
      if (bVar1) {
        return 0;
      }
    }
  }
  return 1;
}


