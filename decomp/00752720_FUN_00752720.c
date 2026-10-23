// FUN_00752720 @ 752720 size=1299

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00752720(int param_1,void *param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 extraout_var;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 auStack_34 [8];
  undefined1 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfde2;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  pvVar2 = param_2;
  uVar8 = _DAT_00d4c328;
  do {
    ExceptionList = ppvVar3;
    if (pvVar2 == (void *)0xffffffff) {
      _DAT_00d4c328 = uVar8;
      ExceptionList = local_c;
      return 0;
    }
    _DAT_00d4c328 = uVar8;
    switch(pvVar2) {
    case (void *)0x1:
      if (param_3 == 0) {
LAB_0075294d:
        FUN_00750040();
LAB_00752954:
        FUN_00751000();
      }
      else if (param_3 == 1) {
        param_2 = operator_new(0x68);
        uStack_4 = 0;
        if (param_2 == (void *)0x0) goto LAB_007528cb;
        puVar4 = *(undefined4 **)(param_1 + 0x4a);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = &DAT_007f0c98;
        }
        uVar10 = 4;
        uVar6 = FUN_0042b6c9(s_EN_GAME_EXISTS_00874c08);
        FUN_0043dce0(puVar4,uVar6,uVar10);
        uStack_4 = 0xffffffff;
      }
      else if (param_3 == 2) {
        param_2 = operator_new(0x68);
        uStack_4 = 1;
        if (param_2 != (void *)0x0) {
          puVar4 = *(undefined4 **)(param_1 + 0x4a);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = &DAT_007f0c98;
          }
          uVar10 = 4;
          uVar6 = FUN_0042b6c9(s_EN_GAME_LIMIT_REACHED_00874c48);
          FUN_0043dce0(puVar4,uVar6,uVar10);
        }
        uStack_4 = 0xffffffff;
        FUN_004367a0(s_the_game_limit_at_the_server_has_00874c18,_DAT_00d4c328 & 0xffff);
      }
      break;
    case (void *)0x3:
      if (param_3 == 0) goto LAB_00752954;
      if (param_3 == 2) {
        param_2 = operator_new(0x68);
        uStack_4 = 2;
        if (param_2 != (void *)0x0) {
          puVar4 = *(undefined4 **)(param_1 + 0x4a);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = &DAT_007f0c98;
          }
          pcVar9 = s_EN_GAME_FULL_00874bd8;
LAB_007528b8:
          uVar10 = 4;
          uVar6 = FUN_0042b6c9(pcVar9);
          FUN_0043dce0(puVar4,uVar6,uVar10);
        }
      }
      else {
        if (param_3 != 3) break;
        param_2 = operator_new(0x68);
        uStack_4 = 3;
        if (param_2 != (void *)0x0) {
          puVar4 = *(undefined4 **)(param_1 + 0x4a);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = &DAT_007f0c98;
          }
          pcVar9 = s_EN_GAME_JOINED_FAILED_NOT_EXIST_00874be8;
          goto LAB_007528b8;
        }
      }
LAB_007528cb:
      uStack_4 = 0xffffffff;
      break;
    case (void *)0x5:
      if ((param_3 == 3) || (param_3 == 4)) {
        iVar5 = FUN_0042b6c9(s_EN_GAME_JOINED_FAILED_NOT_EXIST_00874be8);
        if (iVar5 != 0) {
          FUN_004367a0(iVar5,uVar8);
        }
      }
      else if ((param_3 == 5) && (iVar5 = FUN_0042b6c9(s_EN_GAME_LEAVE_HOST_00874bc4), iVar5 != 0))
      {
        FUN_004367a0(iVar5,uVar8);
      }
      break;
    case (void *)0x7:
      if (param_3 == 0) goto LAB_0075294d;
      break;
    case (void *)0xb:
      if (param_3 == 3) {
        param_2 = operator_new(0x68);
        uStack_4 = 4;
        if (param_2 == (void *)0x0) goto LAB_007528cb;
        puVar4 = *(undefined4 **)(param_1 + 0x4a);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = &DAT_007f0c98;
        }
        FUN_0043dce0(puVar4,s_launch_failed_the_game_does_not_e_00874b9c,4);
        uStack_4 = 0xffffffff;
      }
      break;
    case (void *)0xd:
      if (param_3 == 0) goto LAB_0075294d;
      if (param_3 == 0xc) {
        param_2 = operator_new(0x68);
        uStack_4 = 5;
        if (param_2 != (void *)0x0) {
          puVar4 = *(undefined4 **)(param_1 + 0x4a);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = &DAT_007f0c98;
          }
          uVar10 = 4;
          uVar6 = FUN_0042b6c9(s_EN_USER_EXISTS_CHANNEL_00874b84);
          FUN_0043dce0(puVar4,uVar6,uVar10);
        }
        uStack_4 = 0xffffffff;
        (*(code *)**(undefined4 **)(param_1 + 0x8c))();
        if (*(int *)(param_1 + 0x88) != 0) {
          if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
          }
          piVar7 = *(int **)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x88) = 0;
          if (*(char *)((int)piVar7 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar7 + 0x60))();
          *(undefined1 *)((int)piVar7 + 0x86) = 1;
          (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
          ExceptionList = local_c;
          return 0xffffffff;
        }
        (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
      }
      break;
    case (void *)0x13:
      goto switchD_00752769_caseD_13;
    case (void *)0x14:
      FUN_00751000();
switchD_00752769_caseD_13:
      FUN_00751000();
switchD_00752769_caseD_15:
      uVar8 = _DAT_00d4c328;
      uStack_24 = 0;
      uStack_2c = param_2._0_1_;
      puStack_28 = (undefined4 *)0x0;
      uStack_20 = 0;
      uStack_4 = 6;
      if (param_3 == 10) {
        (*(code *)**(undefined4 **)(param_1 + 0x8c))();
        iVar5 = *(int *)(param_1 + 0x88) + 0x20e;
        uVar6 = FUN_0042b6c9(s_EN_RPC_UPDATE_MESSAGE_GAME_LAUNC_00874b1c);
        uVar6 = FUN_0074a620(auStack_1c,uVar6,iVar5);
        uStack_4._0_1_ = 7;
        FUN_00674710(uVar6,0,DAT_007f33d8);
        uStack_4 = CONCAT31(uStack_4._1_3_,6);
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_00796cd8((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
        puVar4 = &DAT_007f0c98;
        if (puStack_28 != (undefined4 *)0x0) {
          puVar4 = puStack_28;
        }
        if (puVar4 != (undefined4 *)0x0) {
          uVar8 = CONCAT22(extraout_var,DAT_00d4c328);
          goto LAB_00752b5b;
        }
      }
      else if ((param_3 == 0xb) &&
              (puVar4 = (undefined4 *)FUN_0042b6c9(s_EN_RPC_UPDATE_MESSAGE_GAME_FORCE_00874b40),
              puVar4 != (undefined4 *)0x0)) {
LAB_00752b5b:
        FUN_004367a0(puVar4,uVar8);
      }
      uStack_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_00796cd8((int)puStack_28 + -1);
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar1 + -1;
        }
      }
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      break;
    case (void *)0x15:
      goto switchD_00752769_caseD_15;
    case (void *)0x17:
      FUN_004367a0(s_Chatt_message_was_returned_00874b68,uVar8 & 0xffff);
    }
    (*(code *)**(undefined4 **)(param_1 + 0x8c))();
    piVar7 = (int *)FUN_00747770(auStack_34);
    pvVar2 = (void *)*piVar7;
    param_3 = piVar7[1];
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
    ppvVar3 = ExceptionList;
    uVar8 = _DAT_00d4c328;
  } while( true );
}


