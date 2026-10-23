// FUN_00710400 @ 710400 size=476

undefined4 FUN_00710400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 local_800 [2048];
  
  *(undefined1 *)(param_2 + 0x2c) = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar2 = FUN_00535490();
            iVar1 = param_1 + 0x410;
            FUN_00429d50(iVar1,local_800);
            if (iVar2 == 1) break;
            if (iVar2 == 2) {
              return 0;
            }
            piVar7 = (int *)FUN_00534391();
            if (*piVar7 == 4) {
              FUN_005343dc();
              return 0;
            }
          }
          iVar2 = *(int *)(param_1 + 4);
          if (iVar2 < 0x3dd) break;
          if (iVar2 != 0x3f8) goto LAB_007105ac;
          pvVar4 = operator_new(0x272);
          if (pvVar4 == (void *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)FUN_007028b0();
          }
          (**(code **)*puVar5)(param_1);
          iVar1 = *(int *)(param_2 + 8);
          puVar6 = operator_new(0xe);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = puVar5;
            puVar6[1] = iVar1;
            puVar6[2] = 0;
            *(undefined1 *)(puVar6 + 3) = 0;
          }
          iVar2 = *(int *)(param_2 + 0xc);
          *(undefined4 **)(param_2 + 8) = puVar6;
          *(int *)(param_2 + 0xc) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(param_2 + 4) = puVar6;
          }
          else {
            *(undefined4 **)(iVar1 + 8) = puVar6;
          }
        }
        if (iVar2 != 0x3dc) break;
        (**(code **)(*(int *)(param_2 + 0x1a) + 0x40))(param_1);
        *(undefined1 *)(param_2 + 0x2c) = 1;
      }
      if (iVar2 != 0xe9) break;
      FUN_007a77fa(*(undefined4 *)(param_2 + 0x16));
      pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar3 = FUN_0042b6c9(local_800);
      iVar2 = FUN_007a8730(uVar3,pcVar8);
      if (iVar2 == 0) {
        uVar3 = FUN_007a8d6d(iVar1);
        *(undefined4 *)(param_2 + 0x16) = uVar3;
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_WARNING___Invalid_String_ID__act_0087294c,iVar1);
        }
      }
      else {
        uVar3 = FUN_0042b6c9(local_800);
        uVar3 = FUN_007a8d6d(uVar3);
        *(undefined4 *)(param_2 + 0x16) = uVar3;
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a00(s_INFO___Valid_String_ID__action_n_0087297c,local_800);
        }
      }
    }
    if (iVar2 != 0x347) break;
    uVar3 = FUN_007a7b3c(iVar1);
    *(undefined4 *)(param_2 + 0x12) = uVar3;
  }
LAB_007105ac:
  FUN_005349b0(s_unknown_lhs_in_command_008722d0);
  return 0xfffffffe;
}


