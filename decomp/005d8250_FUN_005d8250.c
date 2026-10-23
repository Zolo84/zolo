// FUN_005d8250 @ 5d8250 size=183

undefined4 __thiscall FUN_005d8250(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0042b6c9(s_LEADER_PROMOTE_DRO_0085b6a4);
    return uVar2;
  }
  if (*(char *)(param_1 + 0xfc) == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0042b6c9(s_LEAD_SORT_SKILL_0085b694);
      return uVar2;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0xe4) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0042b6c9(s_LEAD_SORT_RANK_0085b684);
      return uVar2;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0xe8) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0042b6c9(s_LEAD_SORT_NAME_0085b674);
      return uVar2;
    }
  }
  return 0;
}


