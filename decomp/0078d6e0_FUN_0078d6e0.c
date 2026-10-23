// FUN_0078d6e0 @ 78d6e0 size=636

undefined4 __thiscall FUN_0078d6e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_40 [64];
  
  piVar1 = param_2 + 0x104;
  *(undefined4 *)(param_1 + 0x5cb42) = 0;
  *(undefined4 *)(param_1 + 0x5cb46) = 0;
  *(undefined4 *)(param_1 + 0x5cb4a) = 0;
  while( true ) {
    while( true ) {
      iVar2 = FUN_00535490();
      FUN_00429d50(piVar1,local_40);
      if (iVar2 != 1) break;
      iVar2 = param_2[1];
      if (iVar2 == 0x144) {
        pcVar5 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar3 = FUN_0042b6c9(piVar1);
        iVar2 = FUN_007a8730(uVar3,pcVar5);
        if (iVar2 == 0) {
          uVar3 = FUN_007a8d6d(piVar1);
          *(undefined4 *)(param_1 + 0x5c912 + *(int *)(param_1 + 0x5cb4a) * 4) = uVar3;
          *(int *)(param_1 + 0x5cb4a) = *(int *)(param_1 + 0x5cb4a) + 1;
        }
        else {
          uVar3 = FUN_0042b6c9(local_40);
          uVar3 = FUN_007a8d6d(uVar3);
          *(undefined4 *)(param_1 + 0x5c912 + *(int *)(param_1 + 0x5cb4a) * 4) = uVar3;
          *(int *)(param_1 + 0x5cb4a) = *(int *)(param_1 + 0x5cb4a) + 1;
        }
      }
      else if (iVar2 == 0x23a) {
        pcVar5 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar3 = FUN_0042b6c9(piVar1);
        iVar2 = FUN_007a8730(uVar3,pcVar5);
        if (iVar2 == 0) {
          uVar3 = FUN_007a8d6d(piVar1);
          *(undefined4 *)(param_1 + 0x5c4b2 + *(int *)(param_1 + 0x5cb42) * 4) = uVar3;
          *(int *)(param_1 + 0x5cb42) = *(int *)(param_1 + 0x5cb42) + 1;
        }
        else {
          uVar3 = FUN_0042b6c9(local_40);
          uVar3 = FUN_007a8d6d(uVar3);
          *(undefined4 *)(param_1 + 0x5c4b2 + *(int *)(param_1 + 0x5cb42) * 4) = uVar3;
          *(int *)(param_1 + 0x5cb42) = *(int *)(param_1 + 0x5cb42) + 1;
        }
      }
      else if (iVar2 == 0x23b) {
        pcVar5 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar3 = FUN_0042b6c9(piVar1);
        iVar2 = FUN_007a8730(uVar3,pcVar5);
        piVar4 = piVar1;
        if (iVar2 != 0) {
          piVar4 = (int *)FUN_0042b6c9(local_40);
        }
        uVar3 = FUN_007a8d6d(piVar4);
        *(undefined4 *)(param_1 + 0x5c6e2 + *(int *)(param_1 + 0x5cb46) * 4) = uVar3;
        *(int *)(param_1 + 0x5cb46) = *(int *)(param_1 + 0x5cb46) + 1;
      }
      else if (DAT_00dc4b5f == '\0') {
        FUN_00429a00(s_ERROR___Unknown_string___s__in_E_0087b59c,param_2 + 2,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        FUN_005349b0(s_ERROR___Unknown_string_in_EYR_de_0087b5dc);
      }
    }
    if (iVar2 == 2) break;
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
      if ((((0x8c < *(int *)(param_1 + 0x5cb42)) || (0x8c < *(int *)(param_1 + 0x5cb46))) ||
          (0x8c < *(int *)(param_1 + 0x5cb4a))) ||
         (0x8c < *(int *)(param_1 + 0x5cb4a) + *(int *)(param_1 + 0x5cb42) +
                 *(int *)(param_1 + 0x5cb46))) {
        FUN_00429a00(s_ERROR__Too_many_unit_types_defin_0087b560,*param_2 + 0x216);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      return 0;
    }
  }
  return 0;
}


