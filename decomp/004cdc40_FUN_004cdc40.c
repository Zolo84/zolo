// FUN_004cdc40 @ 4cdc40 size=45

undefined4 __fastcall FUN_004cdc40(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_c = 0;
  }
  else {
    local_c = **(undefined4 **)(param_1 + 4);
  }
  return local_c;
}


