// FUN_007015c0 @ 7015c0 size=90

void __fastcall FUN_007015c0(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_0070f220();
  }
  iVar1 = *(int *)(param_1 + 0x1d51e);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_0070f220();
  }
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    FUN_00577db0(0xa0,&DAT_0088f228,&LAB_00701620);
  }
  return;
}


