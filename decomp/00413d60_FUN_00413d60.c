// FUN_00413d60 @ 413d60 size=756

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00413d60(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9a7b;
  local_c = ExceptionList;
  if (DAT_0088ebbc == (int *)0x0) {
    pcVar2 = (char *)0x0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    iVar5 = FUN_007a76c0((int)(char)DAT_0088ebbc[1]);
    iVar8 = FUN_007a76c0((int)*param_1);
    if (iVar8 == iVar5) {
      if (param_1[1] == '\0') {
        pcVar2 = (char *)*DAT_0088ebbc;
        goto LAB_00413dec;
      }
      iVar5 = (int)DAT_0088ebbc + 0xe;
      pcVar2 = param_1 + 1;
    }
    else {
      pcVar2 = param_1;
      if (iVar8 == iVar5 || iVar8 - iVar5 < 0) {
        iVar5 = (int)DAT_0088ebbc + 6;
      }
      else {
        iVar5 = (int)DAT_0088ebbc + 10;
      }
    }
    pcVar2 = (char *)FUN_004148b0(iVar5,pcVar2);
  }
LAB_00413dec:
  if (pcVar2 == (char *)0x0) {
    pcVar2 = operator_new(0x110a);
    local_4 = 0;
    if (pcVar2 != (char *)0x0) {
      uVar6 = 0xffffffff;
      *(undefined ***)pcVar2 = &PTR_LAB_007e3620;
      pcVar10 = param_1;
      do {
        pcVar9 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar9 + -uVar6;
      pcVar10 = pcVar2;
      for (uVar7 = uVar6 >> 2; pcVar10 = pcVar10 + 4, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_004137c0(param_1);
      if (DAT_0088ebc0 == '\x01') {
        puVar3 = operator_new(10);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          uVar4 = FUN_007a8d6d(param_1);
          puVar3[1] = uVar4;
        }
        *puVar3 = pcVar2;
        *(undefined1 *)(puVar3 + 2) = 0;
        iVar5 = (int)DAT_0088ebd2;
        DAT_0088ebd2 = operator_new(0xe);
        if (DAT_0088ebd2 == (undefined4 *)0x0) {
          DAT_0088ebd2 = (undefined4 *)0x0;
        }
        else {
          *DAT_0088ebd2 = puVar3;
          DAT_0088ebd2[1] = iVar5;
          DAT_0088ebd2[2] = 0;
          *(undefined1 *)(DAT_0088ebd2 + 3) = 0;
        }
        iVar8 = DAT_0088ebd6 + 1;
        bVar11 = DAT_0088ebd6 != 0;
        DAT_0088ebd6 = iVar8;
        if (bVar11) {
          *(undefined4 **)(iVar5 + 8) = DAT_0088ebd2;
          ExceptionList = local_c;
          return pcVar2;
        }
        _DAT_0088ebce = DAT_0088ebd2;
        ExceptionList = local_c;
        return pcVar2;
      }
      if (DAT_0088ebbc == (int *)0x0) {
        DAT_0088ebbc = operator_new(0x12);
        if (DAT_0088ebbc == (undefined4 *)0x0) {
          DAT_0088ebbc = (undefined4 *)0x0;
        }
        else {
          cVar1 = *param_1;
          *DAT_0088ebbc = 0;
          *(char *)(DAT_0088ebbc + 1) = cVar1;
          *(undefined4 *)((int)DAT_0088ebbc + 6) = 0;
          *(undefined4 *)((int)DAT_0088ebbc + 10) = 0;
          *(undefined4 *)((int)DAT_0088ebbc + 0xe) = 0;
        }
        if (param_1[1] == '\0') {
          *DAT_0088ebbc = (int)pcVar2;
          DAT_0088ebc2 = DAT_0088ebc2 + 1;
          ExceptionList = local_c;
          return pcVar2;
        }
        FUN_004147f0((int)DAT_0088ebbc + 0xe,param_1 + 1,pcVar2);
        ExceptionList = local_c;
        return pcVar2;
      }
      iVar5 = FUN_007a76c0((int)(char)DAT_0088ebbc[1]);
      iVar8 = FUN_007a76c0((int)*param_1);
      if (iVar8 != iVar5) {
        if (0 < iVar8 - iVar5) {
          FUN_004147f0((int)DAT_0088ebbc + 10,param_1,pcVar2);
          ExceptionList = local_c;
          return pcVar2;
        }
        FUN_004147f0((int)DAT_0088ebbc + 6,param_1,pcVar2);
        ExceptionList = local_c;
        return pcVar2;
      }
      if (param_1[1] == '\0') {
        *DAT_0088ebbc = (int)pcVar2;
        DAT_0088ebc2 = DAT_0088ebc2 + 1;
        ExceptionList = local_c;
        return pcVar2;
      }
      FUN_004147f0((int)DAT_0088ebbc + 0xe,param_1 + 1,pcVar2);
      ExceptionList = local_c;
      return pcVar2;
    }
    pcVar2 = (char *)0x0;
  }
  ExceptionList = local_c;
  return pcVar2;
}


