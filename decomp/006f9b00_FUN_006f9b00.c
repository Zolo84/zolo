// FUN_006f9b00 @ 6f9b00 size=518

undefined4 __fastcall FUN_006f9b00(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *unaff_EBX;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  char *local_4;
  
  local_4 = (char *)0xffffffff;
  puStack_8 = &LAB_007db111;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x68);
  local_4 = (char *)0x0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar10 = 0x29a;
    uVar3 = FUN_0042b6c9(s_BZIP_COMPRESSING_FILE_WAIT_0086fb8c);
    uVar3 = FUN_0043da60(uVar3,uVar10);
  }
  *(undefined4 *)(param_1 + 0x226) = uVar3;
  local_4 = (char *)0xffffffff;
  (**(code **)(*DAT_00d13360 + 0x10))(0);
  FUN_00583f10();
  (**(code **)(*DAT_00d13360 + 0x10))(0);
  FUN_00583f10();
  cVar1 = FUN_0040f5a0();
  pcVar7 = local_4;
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x226) != 0) {
      FUN_006d4290(*(int *)(param_1 + 0x226));
    }
    if (*(undefined4 **)(param_1 + 0x226) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x226))(1);
    }
    *(undefined4 *)(param_1 + 0x226) = 0;
    local_4 = operator_new(0x68);
    pvStack_c = (void *)0x1;
  }
  else {
    cVar1 = FUN_0040f6f0(local_4,1);
    if (cVar1 != '\0') {
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = (char *)(param_1 + 0x1c);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_0082ef88;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pcVar7 = (char *)(param_1 + 0x1c);
      do {
        pcVar8 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      if (*(int *)(param_1 + 0x226) != 0) {
        FUN_006d4290(*(int *)(param_1 + 0x226));
      }
      if (*(undefined4 **)(param_1 + 0x226) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x226))(1);
      }
      *(undefined4 *)(param_1 + 0x226) = 0;
      ExceptionList = unaff_EBX;
      return 1;
    }
    if (*(int *)(param_1 + 0x226) != 0) {
      FUN_006d4290(*(int *)(param_1 + 0x226));
    }
    if (*(undefined4 **)(param_1 + 0x226) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x226))(1);
    }
    *(undefined4 *)(param_1 + 0x226) = 0;
    local_4 = operator_new(0x68);
    pvStack_c = (void *)0x2;
  }
  if (local_4 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x226) = 0;
  }
  else {
    uVar10 = 0x29a;
    uVar3 = FUN_0042b6c9(s_BZIP_COMPRESSION_FAILED_0086fb74);
    uVar3 = FUN_0043da60(uVar3,uVar10);
    *(undefined4 *)(param_1 + 0x226) = uVar3;
  }
  ExceptionList = unaff_EBX;
  return 0;
}


