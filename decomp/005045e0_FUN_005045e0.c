// FUN_005045e0 @ 5045e0 size=67

int __fastcall FUN_005045e0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x6c) == 0) || (iVar1 = FUN_00522770(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0x58)];
    }
    if (iVar1 == 0) {
      return DAT_00d0ca90;
    }
  }
  else {
    iVar1 = FUN_00522770();
  }
  if (iVar1 == 0) {
    return DAT_00d0ca90;
  }
  return iVar1;
}


