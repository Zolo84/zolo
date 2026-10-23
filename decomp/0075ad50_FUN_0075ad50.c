// FUN_0075ad50 @ 75ad50 size=197

void __fastcall FUN_0075ad50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x13a)) {
    do {
      __ftol();
      iVar1 = __ftol();
      if (iVar4 != 0) {
        if (iVar3 < 8) {
          iVar4 = iVar3;
          if (iVar3 < 0) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 7;
        }
        iVar2 = FUN_0075a0f0(iVar4);
        local_8 = (-(uint)(*(char *)(iVar2 + 0x1e) != '\0') & 100) + 100;
        if ((iVar1 <= local_8) && (local_8 = iVar1, iVar1 < 0)) {
          local_8 = 0;
        }
        *(float *)(param_1 + 0x24 + iVar4 * 4) = (float)local_8;
      }
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x18);
    } while (iVar3 < *(int *)(iVar4 + 0x13a));
  }
  return;
}


