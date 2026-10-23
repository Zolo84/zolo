// FUN_00562b80 @ 562b80 size=1286

undefined4 FUN_00562b80(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  int extraout_ECX;
  int iVar10;
  void *in_stack_0000200c;
  int *in_stack_0000201c;
  char *pcVar11;
  undefined **local_c;
  int *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = (int *)&LAB_007c67b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  local_c = &PTR_LAB_007e378c;
  iVar10 = 0;
LAB_00562bcd:
  do {
    while( true ) {
      iVar4 = FUN_00535490();
      FUN_00429d50(in_stack_0000201c + 0x104,&stack0x0000000c);
      if (iVar4 == 1) break;
      if (iVar4 == 2) {
        local_c = &PTR_LAB_007e378c;
        piVar9 = local_8;
        while (piVar9 != (int *)0x0) {
          piVar2 = (int *)piVar9[2];
          FUN_00796cd8(piVar9);
          piVar9 = piVar2;
        }
        ExceptionList = in_stack_0000200c;
        return 0;
      }
      piVar9 = (int *)FUN_00534391();
      if (*piVar9 == 4) {
        FUN_005343dc();
        local_c = &PTR_LAB_007e378c;
        piVar9 = local_8;
        while (piVar9 != (int *)0x0) {
          piVar2 = (int *)piVar9[2];
          FUN_00796cd8(piVar9);
          piVar9 = piVar2;
        }
        ExceptionList = in_stack_0000200c;
        return 0;
      }
    }
    iVar4 = iVar10;
    piVar9 = local_8;
    if ((((DAT_00dc4b5e != '\0') && (iVar1 = in_stack_0000201c[1], iVar1 != 0x55)) &&
        (iVar1 != 0x1f7)) && (iVar1 != 0x338)) {
      for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
        cVar3 = (*(code *)local_c[3])(*piVar9,iVar1);
        if (cVar3 != '\0') {
          if (piVar9 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,in_stack_0000201c + 2,
                         *in_stack_0000201c + 0x216,*(int *)(*in_stack_0000201c + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      piVar2 = local_4;
      iVar4 = in_stack_0000201c[1];
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar4;
        local_4[1] = (int)piVar2;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar4 = iVar10 + 1;
      piVar9 = local_4;
      if (iVar10 != 0) {
        piVar2[2] = (int)local_4;
        piVar9 = local_8;
      }
    }
    local_8 = piVar9;
    iVar1 = in_stack_0000201c[1];
    iVar10 = iVar4;
    if (iVar1 < 0x1a0) {
      if (iVar1 == 0x19f) goto LAB_00562f1c;
      if (iVar1 == 0x55) {
        puVar6 = operator_new(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = &PTR_FUN_007e9438;
        }
        (**(code **)*puVar6)(in_stack_0000201c);
        iVar4 = *(int *)(extraout_ECX + 0x1e);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = puVar6;
          puVar7[1] = iVar4;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar1 = *(int *)(extraout_ECX + 0x22);
        *(undefined4 **)(extraout_ECX + 0x1e) = puVar7;
        *(int *)(extraout_ECX + 0x22) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(extraout_ECX + 0x1a) = puVar7;
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar7;
        }
      }
      else if (iVar1 == 0xe9) {
        pcVar11 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar5 = FUN_0042b6c9(&stack0x0000000c);
        iVar4 = FUN_007a8730(uVar5,pcVar11);
        if (iVar4 == 0) {
          FUN_00425ba0(in_stack_0000201c + 0x104);
        }
        else {
          uVar5 = FUN_0042b6c9(&stack0x0000000c);
          FUN_00425ba0(uVar5);
        }
      }
      else {
        if (iVar1 != 0x198) goto LAB_00562fe7;
        pcVar11 = s_UNKNOWN_STRING_WANTED_0083c758;
        uVar5 = FUN_0042b6c9(&stack0x0000000c);
        iVar4 = FUN_007a8730(uVar5,pcVar11);
        if (iVar4 == 0) {
          uVar5 = FUN_007a8d6d(in_stack_0000201c + 0x104);
          *(undefined4 *)(extraout_ECX + 0x3e) = uVar5;
        }
        else {
          uVar5 = FUN_0042b6c9(&stack0x0000000c);
          uVar5 = FUN_007a8d6d(uVar5);
          *(undefined4 *)(extraout_ECX + 0x3e) = uVar5;
        }
      }
      goto LAB_00562bcd;
    }
    if (iVar1 == 0x1f7) {
      puVar6 = operator_new(0x14);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_007e9434;
      }
      (**(code **)*puVar6)(in_stack_0000201c);
      iVar4 = *(int *)(extraout_ECX + 0x30);
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = puVar6;
        puVar7[1] = iVar4;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar1 = *(int *)(extraout_ECX + 0x34);
      *(undefined4 **)(extraout_ECX + 0x30) = puVar7;
      *(int *)(extraout_ECX + 0x34) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(extraout_ECX + 0x2c) = puVar7;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar7;
      }
LAB_00562f1c:
      iVar4 = in_stack_0000201c[0x103];
      if (iVar4 == 0xa7) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 1;
      }
      else if (iVar4 == 0x8b) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 0;
      }
      else if (iVar4 == 0x2c0) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 4;
      }
      else if (iVar4 == 0x2c1) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 3;
      }
      else if (iVar4 == 0x146) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 2;
      }
      else if (iVar4 == 0x332) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 5;
      }
      else if (iVar4 == 0x335) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 6;
      }
      else if (iVar4 == 0x333) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 8;
      }
      else if (iVar4 == 0x334) {
        *(undefined4 *)(extraout_ECX + 0x3a) = 7;
      }
    }
    else if (iVar1 == 0x338) {
      pvVar8 = operator_new(0x13e);
      if (pvVar8 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00759dd0();
      }
      (**(code **)(*piVar9 + 8))(in_stack_0000201c);
      *(undefined4 *)((int)piVar9 + 0x7e) = *(undefined4 *)(extraout_ECX + 0x3a);
      iVar4 = *(int *)(extraout_ECX + 0x4a);
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = piVar9;
        puVar6[1] = iVar4;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar1 = *(int *)(extraout_ECX + 0x4e);
      *(undefined4 **)(extraout_ECX + 0x4a) = puVar6;
      *(int *)(extraout_ECX + 0x4e) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(extraout_ECX + 0x46) = puVar6;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar6;
      }
    }
    else {
      if (iVar1 != 0x523) {
LAB_00562fe7:
        FUN_005349b0(s_unknown_lhs_in_tech_file_008537b0);
        local_c = &PTR_LAB_007e378c;
        piVar9 = local_8;
        while (piVar9 != (int *)0x0) {
          piVar2 = (int *)piVar9[2];
          FUN_00796cd8(piVar9);
          piVar9 = piVar2;
        }
        ExceptionList = in_stack_0000200c;
        return 0xfffffffe;
      }
      iVar4 = *(int *)(extraout_ECX + 8);
      uVar5 = FUN_007a7b3c(in_stack_0000201c + 0x104);
      (**(code **)(iVar4 + 8))(0x11,uVar5);
    }
  } while( true );
}


