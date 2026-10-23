// FUN_0053aab1 @ 53aab1 size=2665

undefined4 __thiscall FUN_0053aab1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_5f0;
  int *local_5ec;
  undefined4 local_5e8;
  undefined2 local_5ac;
  int local_5aa;
  void *local_5a4;
  int *local_5a0;
  void *local_59c;
  undefined4 local_598;
  int local_594;
  int *local_590;
  int local_58c;
  undefined2 local_588;
  undefined4 local_586;
  undefined4 local_580;
  int local_57c;
  int *local_578;
  int local_574;
  int local_570 [344];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2b38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x57c) = 0;
  *(undefined1 *)(param_1 + 0x277d) = 0;
  *(undefined1 *)(param_1 + 0x2ce2) = 0;
  *(undefined4 *)(param_1 + 0x2ce4) = 0;
  *(undefined4 *)(param_1 + 0x2cea) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cee) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cf2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cf6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cfa) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cfe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d02) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d06) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d0a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x267d) = 0;
LAB_0053aba9:
  while (local_57c = FUN_00535490(), local_57c != 1) {
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
      local_574 = 0;
      local_578 = *(int **)(param_1 + 0x568);
      while (local_578 != (int *)0x0) {
        piVar4 = (int *)local_578[2];
        local_570[local_574] = *local_578;
        local_574 = local_574 + 1;
        local_578 = piVar4;
      }
      if (local_574 != 0) {
        (**(code **)(*(int *)(param_1 + 0x564) + 0x14))();
        FUN_007a78e3(local_570,local_574,4,FUN_0053b637);
        for (local_594 = 0; local_594 < local_574; local_594 = local_594 + 1) {
          if (local_570[local_594] != 0) {
            iVar1 = local_570[local_594];
            iVar2 = *(int *)(param_1 + 0x56c);
            local_5f0 = operator_new(0xe);
            if (local_5f0 == (int *)0x0) {
              local_5f0 = (int *)0x0;
            }
            else {
              *local_5f0 = iVar1;
              local_5f0[1] = iVar2;
              local_5f0[2] = 0;
              *(undefined1 *)(local_5f0 + 3) = 0;
            }
            *(int **)(param_1 + 0x56c) = local_5f0;
            iVar1 = *(int *)(param_1 + 0x570);
            *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + 1;
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x56c);
            }
            else {
              *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x56c);
            }
          }
        }
      }
      if (DAT_0088f2d4 == '\0') {
        FUN_00428600(&DAT_0088f28c,*(undefined4 *)(DAT_00bd1500 + 900));
      }
      ExceptionList = local_10;
      return 0;
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 < 0x259) {
    if (iVar1 == 600) {
      local_59c = operator_new(0x201);
      local_8 = 0;
      if (local_59c == (void *)0x0) {
        local_5e8 = 0;
      }
      else {
        local_5e8 = FUN_006ccfa0();
      }
      local_598 = local_5e8;
      local_8 = 0xffffffff;
      local_580 = local_5e8;
      FUN_006ccfc0(param_2);
      FUN_006cd1c0(local_580);
      goto LAB_0053aba9;
    }
    if (iVar1 < 0x209) {
      if (iVar1 == 0x208) {
        *(bool *)(param_1 + 0x277d) = *(int *)(param_2 + 0x40c) == 0x111;
        goto LAB_0053aba9;
      }
      switch(iVar1) {
      case 0xe9:
        if (*(int *)(param_2 + 0x40c) == 0x527) {
          FUN_007a74f0(param_1 + 0x57d,param_2 + 0x410);
        }
        goto LAB_0053aba9;
      case 0x156:
        FUN_0054f130(param_2);
        goto LAB_0053aba9;
      case 0x157:
        goto LAB_0053aba9;
      case 0x198:
switchD_0053ac49_caseD_198:
        goto LAB_0053aba9;
      case 0x199:
        goto LAB_0053aba9;
      case 0x19a:
        FUN_005358c0(param_1 + 0x564);
        goto LAB_0053aba9;
      }
    }
    else {
      switch(iVar1) {
      case 0x221:
        uVar3 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x2d0a) = uVar3;
        goto LAB_0053aba9;
      case 0x222:
switchD_0053ac7d_caseD_222:
        uVar3 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x2ce4) = uVar3;
        goto LAB_0053aba9;
      case 0x24e:
        *(bool *)(param_1 + 0x57c) = *(int *)(param_2 + 0x40c) == 0x111;
        goto LAB_0053aba9;
      case 0x254:
        if (*(int *)(param_2 + 0x40c) == 0x527) {
          FUN_00429d50(param_2 + 0x410,param_1 + 0x257d);
        }
        goto LAB_0053aba9;
      case 599:
        *(undefined1 *)(param_1 + 0x2ce2) = 1;
        goto LAB_0053aba9;
      }
    }
  }
  else {
    if (0x3e5 < iVar1) {
      if (iVar1 < 0x51e) {
        if (iVar1 == 0x51d) {
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x2d02) = uVar3;
        }
        else if (iVar1 == 0x3e6) {
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x2cf6) = uVar3;
        }
        else {
          if (iVar1 != 0x51c) goto switchD_0053ac49_caseD_ea;
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x2cfa) = uVar3;
        }
      }
      else if (iVar1 == 0x51e) {
        uVar3 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x2d06) = uVar3;
      }
      else {
        if (iVar1 != 0x523) goto switchD_0053ac49_caseD_ea;
        local_588 = 0;
        local_586 = 0;
        FUN_00427ed0(param_2);
        FUN_00428600(&local_588,0);
      }
      goto LAB_0053aba9;
    }
    if (iVar1 == 0x3e5) {
      *(bool *)(param_1 + 0x2ce8) = *(int *)(param_2 + 0x40c) == 0x111;
      goto LAB_0053aba9;
    }
    if (iVar1 < 0x283) {
      if (iVar1 == 0x282) {
        uVar3 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x2cf2) = uVar3;
      }
      else {
        if (iVar1 == 0x25a) goto switchD_0053ac7d_caseD_222;
        if (iVar1 == 0x280) {
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x2cea) = uVar3;
        }
        else {
          if (iVar1 != 0x281) goto switchD_0053ac49_caseD_ea;
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
          *(undefined4 *)(param_1 + 0x2cee) = uVar3;
        }
      }
      goto LAB_0053aba9;
    }
    if (iVar1 == 0x289) {
      if (*(int *)(param_2 + 0x40c) == 0x527) {
        FUN_00429d50(param_2 + 0x410,param_1 + 0x267d);
      }
      goto LAB_0053aba9;
    }
    if (iVar1 == 0x3e4) goto switchD_0053ac49_caseD_198;
  }
switchD_0053ac49_caseD_ea:
  local_58c = FUN_004af6b0(param_2 + 8);
  if (local_58c < 1) {
    FUN_005349b0(s_ScenarioInfo___Unexpected_field_008510f0);
    ExceptionList = local_10;
    return 0xfffffffe;
  }
  local_5a4 = operator_new(0x14abe);
  local_8 = 1;
  if (local_5a4 == (void *)0x0) {
    local_5ec = (int *)0x0;
  }
  else {
    local_5ec = (int *)FUN_005388e0();
  }
  local_5a0 = local_5ec;
  local_8 = 0xffffffff;
  local_590 = local_5ec;
  local_5ac = 3;
  local_5aa = local_58c;
  (**(code **)(*local_5ec + 4))(&local_5ac);
  (**(code **)(*(int *)((int)local_590 + 0xe) + 8))(param_2);
  *(int **)(param_1 + 0x277e + local_58c * 4) = local_590;
  *(int *)(param_1 + 4 + *(int *)(param_1 + 0x2cde) * 4) = local_58c;
  *(undefined4 *)((int)local_590 + 0x13c86) = *(undefined4 *)((int)local_590 + 6);
  if ((&DAT_00bce5ec)[*(int *)(param_1 + 0x2cde)] != 0) {
    FUN_0053e1f9((&DAT_00bce5ec)[*(int *)(param_1 + 0x2cde)],local_58c);
  }
  *(int *)(param_1 + 0x2cde) = *(int *)(param_1 + 0x2cde) + 1;
  goto LAB_0053aba9;
}


