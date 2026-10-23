// FUN_004becb0 @ 4becb0 size=52

void __fastcall FUN_004becb0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x5e) != 0) {
    cVar1 = FUN_0042dd70(*(int *)(param_1 + 0x5e) + 4);
    if (cVar1 != '\0') {
      FUN_00796cd8(*(undefined4 *)(param_1 + 0x5e));
      *(undefined4 *)(param_1 + 0x5e) = 0;
    }
  }
  return;
}


