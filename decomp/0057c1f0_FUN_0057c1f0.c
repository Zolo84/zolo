// FUN_0057c1f0 @ 57c1f0 size=618

uint __fastcall FUN_0057c1f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar8;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar9;
  int iVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8a7c;
  local_c = ExceptionList;
  uVar8 = (undefined3)((uint)ExceptionList >> 8);
  pcVar7 = (char *)CONCAT31(uVar8,*(char *)(param_1 + 0x379));
  if ((*(char *)(param_1 + 0x379) != '\0') &&
     (pcVar7 = (char *)CONCAT31(uVar8,*(char *)(param_1 + 0x37b)),
     *(char *)(param_1 + 0x37b) != '\0')) {
    iVar3 = *(int *)(DAT_00893530 + 0x20) - DAT_00bd0560;
    if (iVar3 < 0) {
      DAT_00bd0560 = 0;
    }
    if ((100 < iVar3) || (ExceptionList = &local_c, DAT_00bd0560 == 0)) {
      ExceptionList = &local_c;
      puVar4 = operator_new(0xc);
      local_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x380);
        uVar2 = *(undefined4 *)(DAT_00893750 + 4);
        puVar5 = operator_new(0x16);
        local_4._0_1_ = 1;
        if (puVar5 == (undefined2 *)0x0) {
          puVar5 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d6c0();
        }
        puVar4[1] = puVar5;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined1 *)((int)puVar4 + 9) = 1;
        *puVar4 = &PTR_FUN_007ea39c;
        *(undefined1 *)((int)puVar4 + 10) = 0;
        *puVar5 = 0xb;
        iVar3 = puVar4[1];
        *(undefined4 *)(iVar3 + 8) = DAT_0088f29c;
        *(undefined2 *)(iVar3 + 0xc) = DAT_0088f2a0;
        local_4 = CONCAT31(local_4._1_3_,2);
        puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar3 = puVar4[1];
        *(undefined4 *)(iVar3 + 2) = *puVar6;
        *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar6 + 1);
        *puVar4 = &PTR_FUN_007ea25c;
        *(undefined4 *)(puVar4[1] + 0xe) = uVar1;
        *(undefined4 *)(puVar4[1] + 0x12) = uVar2;
      }
      local_4 = 0xffffffff;
      iVar3 = FUN_00565ca0(puVar4);
    }
    pcVar7 = (char *)CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(param_1 + 0x37a));
    if (*(char *)(param_1 + 0x37a) == '\0') {
      *(undefined1 *)(param_1 + 0x379) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb70);
      iVar10 = 0;
      if (0 < iVar3) {
        pcVar7 = (char *)(param_1 + 0x3d0);
        iVar9 = iVar3;
        do {
          if (pcVar7[1] == '\x01') {
            iVar10 = iVar10 + 1;
          }
          if (*pcVar7 == '\x01') {
            iVar3 = iVar3 + -1;
          }
          pcVar7 = pcVar7 + 0x3e;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (iVar3 <= iVar10) {
        puVar4 = operator_new(0xc);
        local_4 = 3;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar5 = operator_new(0xe);
          local_4._0_1_ = 4;
          if (puVar5 == (undefined2 *)0x0) {
            puVar5 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar5[4] = 0;
            *(undefined4 *)(puVar5 + 5) = 0;
          }
          puVar4[1] = puVar5;
          *(undefined1 *)(puVar4 + 2) = 0;
          *(undefined1 *)((int)puVar4 + 9) = 1;
          *puVar4 = &PTR_FUN_007e3e5c;
          *(undefined1 *)((int)puVar4 + 10) = 0;
          *puVar5 = 0x4d;
          iVar3 = puVar4[1];
          *(undefined4 *)(iVar3 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar3 + 0xc) = DAT_0088f2a0;
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar3 = puVar4[1];
          *(undefined4 *)(iVar3 + 2) = *puVar6;
          *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar6 + 1);
          *puVar4 = &PTR_FUN_007e3e3c;
        }
        local_4 = 0xffffffff;
        FUN_00565ca0(puVar4);
        *(undefined1 *)(param_1 + 0x379) = 0;
        pcVar7 = (char *)FUN_0057c550();
      }
    }
  }
  ExceptionList = local_c;
  return (uint)pcVar7 & 0xffffff00;
}


