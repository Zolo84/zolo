// FUN_006e8ff0 @ 6e8ff0 size=611

undefined4 __thiscall FUN_006e8ff0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  char acStack_18 [4];
  char acStack_14 [4];
  char acStack_10 [4];
  char acStack_c [2];
  char cStack_a;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar2 = param_2;
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x10))(param_2);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x12) + 0x10))(param_2);
    if (*(int *)(param_1 + 0x1e) != -1) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x28))(&stack0xffffffd4);
      uVar8 = 0;
      uVar7 = 0xffff;
      iVar4 = unaff_EDI + 0x18;
      uVar6 = DAT_00bd1bac;
      iVar1 = FUN_00415bd0(iVar4,DAT_00bd1bac,0xffff,0);
      iVar2 = iVar1 / 2 + iVar2;
      uVar3 = FUN_0042b6c9(s_MESSAGE_HEADER_0086f1f4);
      FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
      FUN_00413509(uVar3,iVar2,iVar4,uVar6,uVar7,uVar8);
      (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_2);
      uVar8 = 0;
      iVar1 = unaff_ESI + 0x151;
      uVar7 = 0xffff;
      iVar2 = unaff_EDI + 0x30;
      uVar6 = DAT_00bd1bac;
      uVar3 = FUN_0042b6c9(s_DO_NOT_DISPLAY_0086d59c);
      FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00413483(uVar3,iVar2,iVar1,uVar6,uVar7,uVar8);
      acStack_18[0] = s_DISPLAY_IN_LOG_0086d58c[0];
      acStack_18[1] = s_DISPLAY_IN_LOG_0086d58c[1];
      acStack_18[2] = s_DISPLAY_IN_LOG_0086d58c[2];
      acStack_18[3] = s_DISPLAY_IN_LOG_0086d58c[3];
      acStack_14[0] = s_DISPLAY_IN_LOG_0086d58c[4];
      acStack_14[1] = s_DISPLAY_IN_LOG_0086d58c[5];
      acStack_14[2] = s_DISPLAY_IN_LOG_0086d58c[6];
      acStack_14[3] = s_DISPLAY_IN_LOG_0086d58c[7];
      acStack_c[0] = s_DISPLAY_IN_LOG_0086d58c[0xc];
      acStack_c[1] = s_DISPLAY_IN_LOG_0086d58c[0xd];
      cStack_a = s_DISPLAY_IN_LOG_0086d58c[0xe];
      uStack_20 = DAT_0086d584;
      acStack_10[0] = s_DISPLAY_IN_LOG_0086d58c[8];
      acStack_10[1] = s_DISPLAY_IN_LOG_0086d58c[9];
      acStack_10[2] = s_DISPLAY_IN_LOG_0086d58c[10];
      acStack_10[3] = s_DISPLAY_IN_LOG_0086d58c[0xb];
      puStack_1c = PTR_LAB_0086d588;
      uStack_24 = DAT_0086d580;
      pcVar5 = acStack_18;
      if ((*(int *)(param_1 + 0x1e) != -1) &&
         (*(int *)(&DAT_00d36354 + *(int *)(param_1 + 0x1e) * 0x1a) == 4)) {
        pcVar5 = (char *)&uStack_24;
      }
      uVar8 = 0;
      iVar2 = unaff_ESI + 0x162;
      uVar7 = 0xffff;
      iVar1 = unaff_EDI + 0x30;
      uVar6 = DAT_00bd1bac;
      uVar3 = FUN_0042b6c9(pcVar5);
      FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00413483(uVar3,iVar1,iVar2,uVar6,uVar7,uVar8);
      uVar8 = 0;
      iVar2 = unaff_ESI + 0x173;
      uVar7 = 0xffff;
      iVar1 = unaff_EDI + 0x30;
      uVar6 = DAT_00bd1bac;
      uVar3 = FUN_0042b6c9(s_DISPLAY_IN_BOX_0086d570);
      FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00413483(uVar3,iVar1,iVar2,uVar6,uVar7,uVar8);
      uVar8 = 0;
      iVar2 = unaff_ESI + 0x184;
      uVar7 = 0xffff;
      iVar1 = unaff_EDI + 0x30;
      uVar6 = DAT_00bd1bac;
      uVar3 = FUN_0042b6c9(s_DISPLAY_PAUSE_0086d560);
      FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00413483(uVar3,iVar1,iVar2,uVar6,uVar7,uVar8);
    }
    (**(code **)(**(int **)(param_1 + 0x22) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x26) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x2a) + 0x10))(param_2);
    return 0;
  }
  return 0;
}


