// FUN_004364b0 @ 4364b0 size=257

void __thiscall FUN_004364b0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba88b;
  local_c = ExceptionList;
  if (*param_2 != '\0') {
    uVar7 = 0xffffffff;
    pcVar9 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    pcVar3 = operator_new(~uVar7);
    uVar7 = 0xffffffff;
    pcVar9 = param_2;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = pcVar3;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    *param_2 = '\0';
    pvVar4 = operator_new(0x23e);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00433f90(*(undefined4 *)(param_1 + 0x56),pcVar3,*(undefined4 *)(param_1 + 0x2e),
                           *(undefined2 *)(param_1 + 0x5a),*(undefined1 *)(param_1 + 0x5c),
                           *(undefined1 *)(param_1 + 0x5d));
    }
    local_4 = 0xffffffff;
    FUN_00796cd8(pcVar3);
    *(undefined4 *)(iVar5 + 0x16) = *(undefined4 *)(param_1 + 0x4e);
    iVar2 = *(int *)(param_1 + 8);
    piVar6 = operator_new(0xe);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar5;
      piVar6[1] = iVar2;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    *(int **)(param_1 + 8) = piVar6;
    *(int *)(param_1 + 0xc) = iVar5 + 1;
    if (iVar5 == 0) {
      *(int **)(param_1 + 4) = piVar6;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  ExceptionList = local_c;
  return;
}


