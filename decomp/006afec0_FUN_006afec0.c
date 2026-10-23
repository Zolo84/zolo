// FUN_006afec0 @ 6afec0 size=96

int __fastcall FUN_006afec0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x48);
  bVar1 = false;
  iVar4 = 0;
  if (iVar5 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + 8);
      FUN_0051c480();
      iVar3 = FUN_0050a580();
      if (iVar4 < iVar3) {
        FUN_0051c480();
        iVar4 = FUN_0050a580();
      }
      cVar2 = FUN_0051cb20();
      if (cVar2 != '\0') {
        bVar1 = true;
      }
    } while (iVar5 != 0);
    if (bVar1) {
      return DAT_00dc15fc * iVar4;
    }
  }
  return iVar4;
}


