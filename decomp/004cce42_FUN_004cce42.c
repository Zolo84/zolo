// FUN_004cce42 @ 4cce42 size=98

undefined4 __thiscall FUN_004cce42(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  do {
    if (local_8 == 0) {
      return 0;
    }
    local_8 = *(int *)(local_8 + 8);
    iVar1 = FUN_004c9f81();
  } while (iVar1 != param_2);
  return 1;
}


