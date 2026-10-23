// FUN_00645b70 @ 645b70 size=72

bool __fastcall FUN_00645b70(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00428ee0(param_1 + 0xb8);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    if ((&DAT_0089cad8)[*(int *)(param_1 + 0xbe)] == 0) {
      return false;
    }
    cVar1 = FUN_00586640();
    return cVar1 != '\x01';
  }
  return false;
}


