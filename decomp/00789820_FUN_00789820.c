// FUN_00789820 @ 789820 size=173

undefined4 __thiscall FUN_00789820(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0xec) {
        if (*param_1 == 0) {
          iVar1 = FUN_004af6b0(param_2 + 0x410);
          *param_1 = iVar1;
        }
        else {
          iVar1 = FUN_004af6b0(param_2 + 0x410);
          param_1[1] = iVar1;
        }
      }
      else if (iVar1 == 0xfd) {
        if (*(int *)(param_2 + 0x40c) == 3) {
          FUN_0054f130(param_2);
        }
        else {
          FUN_005349b0(s_No_Left_Curly_00857a20);
        }
      }
      else if (iVar1 == 0x1f1) {
        iVar1 = FUN_007a7b3c(param_2 + 0x410);
        param_1[2] = iVar1;
      }
    }
    piVar2 = (int *)FUN_00534391();
  } while (*piVar2 != 4);
  FUN_005343dc();
  return 0;
}


