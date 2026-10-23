// FUN_004ccdd8 @ 4ccdd8 size=106

undefined4 __fastcall FUN_004ccdd8(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 4);
  do {
    if (local_8 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)local_8[2];
    iVar2 = *local_8;
    local_8 = piVar1;
  } while ((iVar2 == 0) || (cVar3 = FUN_004ca33c(), cVar3 == '\0'));
  return 1;
}


