// FUN_0064e370 @ 64e370 size=830

void __thiscall FUN_0064e370(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2c26;
  local_c = ExceptionList;
  iVar7 = 0;
  if (DAT_00893750 == 0) {
    return;
  }
  if (*(char *)(DAT_00893750 + 0x111) == '\0') {
    return;
  }
  if (*(char *)(DAT_00893750 + 0x120) != '\0') {
    ExceptionList = &local_c;
    puVar4 = operator_new(0xc);
    local_4 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 6);
      FUN_005aef80();
      *puVar4 = &PTR_FUN_007e5330;
      *(undefined4 *)(puVar4[1] + 0xe) = uVar1;
    }
    local_4 = 0xffffffff;
    FUN_00565c50();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  cVar3 = FUN_0042e980();
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(param_1 + 0x13d0e) != '\0') {
    ExceptionList = local_c;
    return;
  }
  cVar3 = FUN_0042e9a0();
  if (cVar3 != '\0') {
    ExceptionList = local_c;
    return;
  }
  local_20 = 0;
  local_1c = 0;
  FUN_0042e8d0();
  cVar3 = FUN_0042ddd0();
  if (cVar3 == '\0') {
    if (param_2 == '\0') {
      ExceptionList = local_c;
      return;
    }
  }
  else if (param_2 == '\0') {
    iVar8 = 0;
    param_3 = 0;
    _param_2 = 0;
    if (1 < DAT_00877690) {
      iVar9 = DAT_00877690 + -1;
      piVar6 = (int *)(DAT_00ab27b4 + 0x650);
      do {
        iVar10 = *piVar6;
        if ((0 < iVar10) && (iVar11 = *(int *)((int)piVar6 + 0x23a), iVar11 != 0)) {
          if (*(int *)(iVar11 + 0x3350) == DAT_00d615c2) {
            iVar7 = iVar7 + iVar10;
          }
          if (*(int *)(iVar11 + 0x3350) == DAT_00d615c6) {
            _param_2 = _param_2 + iVar10;
          }
          if (*(int *)(iVar11 + 0x3350) == DAT_00d615ca) {
            iVar8 = iVar8 + iVar10;
          }
        }
        piVar6 = (int *)((int)piVar6 + 0x4b2);
        iVar9 = iVar9 + -1;
        param_3 = iVar8;
      } while (iVar9 != 0);
    }
    iVar8 = *(int *)(DAT_00d615c2 + 0x22);
    iVar9 = *(int *)(iVar8 + 4);
    bVar2 = false;
    if (iVar9 != 0) {
      bVar2 = true;
      do {
        iVar9 = *(int *)(iVar9 + 8);
        iVar7 = __ftol();
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(DAT_00d615c6 + 0x22);
    iVar10 = *(int *)(iVar9 + 4);
    if (iVar10 != 0) {
      bVar2 = true;
      do {
        iVar10 = *(int *)(iVar10 + 8);
        _param_2 = __ftol();
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(DAT_00d615ca + 0x22);
    iVar11 = *(int *)(iVar10 + 4);
    if (iVar11 == 0) {
      if (!bVar2) goto LAB_0064e475;
    }
    else {
      do {
        iVar11 = *(int *)(iVar11 + 8);
        param_3 = __ftol();
      } while (iVar11 != 0);
    }
    if (iVar7 < param_3) {
LAB_0064e64a:
      if (_param_2 <= param_3) {
        local_20 = 7;
        local_1c = **(undefined4 **)(iVar10 + 4);
        goto LAB_0064e475;
      }
    }
    else {
      if (_param_2 <= iVar7) {
        local_20 = 3;
        local_1c = **(undefined4 **)(iVar8 + 4);
        goto LAB_0064e475;
      }
      if (iVar7 <= param_3) goto LAB_0064e64a;
    }
    local_20 = 5;
    local_1c = **(undefined4 **)(iVar9 + 4);
    goto LAB_0064e475;
  }
  local_20 = param_3;
LAB_0064e475:
  *(undefined1 *)(param_1 + 0x13d0e) = 1;
  pvVar5 = operator_new(0xc);
  local_4 = 1;
  if (pvVar5 != (void *)0x0) {
    FUN_0057e240(300,&DAT_0088f254,local_1c,local_20);
  }
  local_4 = 0xffffffff;
  FUN_00565bc0();
  FUN_00577eb0();
  ExceptionList = local_c;
  return;
}


