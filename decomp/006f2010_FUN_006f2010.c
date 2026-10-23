// FUN_006f2010 @ 6f2010 size=587

void __thiscall FUN_006f2010(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int local_98;
  int *local_94;
  char local_8c [64];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da8ee;
  local_c = ExceptionList;
  iVar7 = -1;
  pcVar8 = param_2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if (iVar7 != -2) {
    cVar2 = param_2[1];
    iVar7 = 0;
    iVar4 = 0;
    while (cVar2 != ':') {
      local_8c[iVar7] = param_2[iVar7];
      cVar2 = param_2[iVar4 + 2];
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 1;
    }
    local_8c[iVar7] = '\0';
    iVar7 = 0;
    pcVar8 = param_2 + iVar4 + 3;
    cVar2 = param_2[iVar4 + 3];
    while (cVar2 != '\0') {
      local_4c[iVar7] = cVar2;
      pcVar1 = pcVar8 + 1;
      iVar7 = iVar7 + 1;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    }
    local_4c[iVar7] = '\0';
    iVar7 = 0;
    iVar9 = 1;
    local_98 = 0;
    ExceptionList = &local_c;
    iVar4 = FUN_007a8730(*DAT_00d12b40 + 0x301,local_4c);
    if (iVar4 == 0) {
      do {
        uVar5 = FUN_004af740(iVar9,local_8c);
        iVar4 = FUN_007a8730(uVar5);
        if (iVar4 == 0) {
          iVar7 = iVar9;
          local_98 = iVar9;
        }
        iVar9 = iVar9 + 1;
        if (iVar7 == 0x158) {
          ExceptionList = local_c;
          return;
        }
      } while (iVar7 == 0);
      if (0 < iVar7) {
        iVar4 = 0;
        piVar3 = *(int **)(*(int *)(param_1 + 0x162) + 0xa4);
        iVar7 = *(int *)((int)piVar3 + 0x2cde);
        local_94 = piVar3;
        if (0 < iVar7) {
          do {
            local_94 = local_94 + 1;
            if (*local_94 == local_98) {
              iVar9 = 0;
              if (0 < iVar7) {
                do {
                  FUN_006fd3a0(iVar9,1);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < *(int *)((int)piVar3 + 0x2cde));
              }
              FUN_006fd3a0(iVar4,0);
              FUN_006fd280(local_98);
              iVar7 = *(int *)(*(int *)(param_1 + 0x162) + 0x90);
              *(int *)(param_1 + 0x16a) = iVar7;
              iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x162) + 0xa4) + 4 + iVar7 * 4);
              if (iVar7 != *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e)) {
                *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = iVar7;
                FUN_0057d8e0();
              }
              iVar7 = *(int *)(param_1 + 0x170);
              if (iVar7 != 0) {
                FUN_006fa1a0();
                FUN_00796cd8(iVar7);
              }
              pvVar6 = operator_new(0x2e);
              local_4 = 0;
              if (pvVar6 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_006f9e10(*(undefined4 *)(*(int *)(param_1 + 0x162) + 0xa4),
                                     *(undefined4 *)(param_1 + 0x16a),
                                     *(undefined4 *)(param_1 + 0x4e));
              }
              local_4 = 0xffffffff;
              *(undefined4 *)(param_1 + 0x170) = uVar5;
            }
            iVar7 = *(int *)((int)piVar3 + 0x2cde);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar7);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


