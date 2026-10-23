// FUN_0058b260 @ 58b260 size=972

undefined4 __thiscall FUN_0058b260(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  undefined2 local_28;
  undefined4 local_26;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c98d4;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
LAB_0058b2a7:
  do {
    while (iVar3 = FUN_00535490(), iVar3 != 1) {
      piVar5 = (int *)FUN_00534391();
      if (*piVar5 == 4) {
        FUN_005343dc();
        if ((DAT_0088f28e == *(int *)(param_1 + 0xe)) && (DAT_0088f28c == *(short *)(param_1 + 0xc))
           ) {
          FUN_00428eb0(&local_28);
          local_28 = 0x1268;
          (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
        }
        if ((*(int *)(param_1 + 0x22) == 0) || (*(int *)(param_1 + 0x26) == 0)) {
          FUN_00429a50(s_War_specified_without_both_attac_00857ed4);
        }
        local_20 = &PTR_LAB_007e378c;
        piVar5 = local_1c;
        while (piVar5 != (int *)0x0) {
          piVar1 = (int *)piVar5[2];
          FUN_00796cd8(piVar5);
          piVar5 = piVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar5 = local_1c;
    if (DAT_00dc4b5e != '\0') {
      iVar3 = param_2[1];
      for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        cVar2 = (*(code *)local_20[3])(*piVar5,iVar3);
        if (cVar2 != '\0') {
          if (piVar5 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      piVar1 = local_18;
      iVar3 = param_2[1];
      local_18 = operator_new(0xe);
      if (local_18 == (int *)0x0) {
        local_18 = (int *)0x0;
      }
      else {
        *local_18 = iVar3;
        local_18[1] = (int)piVar1;
        local_18[2] = 0;
        *(undefined1 *)(local_18 + 3) = 0;
      }
      iVar3 = local_14 + 1;
      bVar6 = local_14 != 0;
      piVar5 = local_18;
      local_14 = iVar3;
      if (bVar6) {
        piVar1[2] = (int)local_18;
        piVar5 = local_1c;
      }
    }
    local_1c = piVar5;
    iVar3 = param_2[1];
    if (0x1a3 < iVar3) {
      if (iVar3 == 0x1a4) {
        if (param_2[0x103] == 3) {
          (**(code **)(*(int *)(param_1 + 0x2a) + 8))(param_2);
          goto LAB_0058b2a7;
        }
      }
      else {
        if (iVar3 != 0x1a5) {
          if (iVar3 != 0x523) {
LAB_0058b564:
            FUN_005349b0(s_WAR___Unexpected_field_00857f08);
            local_20 = &PTR_LAB_007e378c;
            piVar5 = local_1c;
            while (piVar5 != (int *)0x0) {
              piVar1 = (int *)piVar5[2];
              FUN_00796cd8(piVar5);
              piVar5 = piVar1;
            }
            ExceptionList = local_c;
            return 0xfffffffe;
          }
          local_28 = 0;
          local_26 = 0;
          FUN_00427ed0(param_2);
          (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
          goto LAB_0058b2a7;
        }
        if (param_2[0x103] == 3) {
          (**(code **)(*(int *)(param_1 + 0x1d3d2) + 8))(param_2);
          goto LAB_0058b2a7;
        }
      }
LAB_0058b541:
      FUN_005349b0(s_no_left_curly_0083f20c);
      goto LAB_0058b2a7;
    }
    if (iVar3 == 0x1a3) {
      if (param_2[0x103] != 3) goto LAB_0058b541;
      puVar4 = operator_new(0x52a);
      local_4._0_1_ = 4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_00425b20();
        local_4._0_1_ = 5;
        FUN_00428b00();
        *(undefined ***)((int)puVar4 + 0x12) = &PTR_LAB_007e4068;
        local_4._0_1_ = 6;
        *puVar4 = &PTR_FUN_007e4048;
        puVar4[2] = &PTR_LAB_007e4034;
        *(undefined ***)((int)puVar4 + 0x12) = &PTR_FUN_007e402c;
        FUN_00428d30();
        FUN_005847c0();
        *(undefined1 *)((int)puVar4 + 0x16) = 1;
      }
      *(undefined4 **)(param_1 + 0x26) = puVar4;
      *(undefined4 **)(param_1 + 0x3a776) = puVar4;
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(**(int **)(param_1 + 0x26) + 8))(param_2);
    }
    else if (iVar3 == 0xfd) {
      FUN_0054f130(param_2);
    }
    else if (iVar3 == 0x157) {
      FUN_0054f130(param_2);
    }
    else {
      if (iVar3 != 0x1a2) goto LAB_0058b564;
      if (param_2[0x103] != 3) goto LAB_0058b541;
      puVar4 = operator_new(0x52a);
      local_4._0_1_ = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_00425b20();
        local_4._0_1_ = 2;
        FUN_00428b00();
        *(undefined ***)((int)puVar4 + 0x12) = &PTR_LAB_007e4068;
        local_4._0_1_ = 3;
        *puVar4 = &PTR_FUN_007e4048;
        puVar4[2] = &PTR_LAB_007e4034;
        *(undefined ***)((int)puVar4 + 0x12) = &PTR_FUN_007e402c;
        FUN_00428d30();
        FUN_005847c0();
        *(undefined1 *)((int)puVar4 + 0x16) = 1;
      }
      *(undefined4 **)(param_1 + 0x22) = puVar4;
      *(undefined4 **)(param_1 + 0x1d3ce) = puVar4;
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(**(int **)(param_1 + 0x22) + 8))(param_2);
    }
  } while( true );
}


