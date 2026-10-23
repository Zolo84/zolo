// FUN_00542380 @ 542380 size=140

undefined4 __thiscall FUN_00542380(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  do {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      iVar1 = FUN_004fdae0(param_2 + 4);
      iVar2 = FUN_004fe160(param_2 + 4);
      if (iVar1 == 0x8c) {
        if (iVar2 == 0x8c) {
          FUN_005349b0(s_Parse_error_in_country_division_u_00851918);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x48a0 + iVar2 * 4) + 8))(param_2);
        }
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x4670 + iVar1 * 4) + 8))(param_2);
      }
    }
    if (iVar1 == 2) {
      return 0;
    }
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      return 0;
    }
  } while (iVar1 != -1);
  return 0;
}


