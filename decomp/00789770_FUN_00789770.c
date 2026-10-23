// FUN_00789770 @ 789770 size=164

undefined4 __thiscall FUN_00789770(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  do {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (*(int *)(param_2 + 4) == 0x527) {
        iVar1 = FUN_004af6b0(param_2 + 8);
        if (iVar1 == 0) {
          FUN_005349b0(s_illegal_tag_0083f21c);
          return 0xfffffffe;
        }
        iVar2 = FUN_007a7b3c(param_2 + 0x410);
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x28c6a + (param_3 + iVar1 * 0x25) * 4) = -iVar2;
        }
        else {
          *(int *)(param_1 + 0x1c58a + (param_3 + iVar1 * 0x25) * 4) = iVar2;
        }
      }
    }
    piVar3 = (int *)FUN_00534391();
  } while (*piVar3 != 4);
  FUN_005343dc();
  return 0;
}


