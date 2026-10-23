// FUN_0053e503 @ 53e503 size=166

void __thiscall FUN_0053e503(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    do {
      iVar1 = FUN_00535490();
    } while (iVar1 != 1);
  } while (*(int *)(param_2 + 4) != 0xe9);
  uVar2 = FUN_0042b6c9(param_2 + 0x410);
  iVar1 = FUN_007a8730(uVar2,s_UNKNOWN_STRING_WANTED_00851128);
  if (iVar1 == 0) {
    FUN_007a74f0(param_1 + 0x57d,param_2 + 0x410);
  }
  else {
    FUN_007a74f0(param_1 + 0x57d,uVar2);
  }
  return;
}


