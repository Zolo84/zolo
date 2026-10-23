// FUN_0066a980 @ 66a980 size=552

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0066a980(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d3f37;
  ExceptionList = &local_c;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined ***)((int)param_1 + 6) = &PTR_LAB_007f0c68;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = &PTR_LAB_007e6edc;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined ***)((int)param_1 + 0x2a) = &PTR_LAB_007e6edc;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x10] = &PTR_LAB_007f0c38;
  local_4 = 3;
  uStack_3 = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  for (piVar2 = *(int **)(iVar1 + 0x2cc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    puVar6 = operator_new(0xba);
    local_4 = 4;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar3 = *piVar2;
      *puVar6 = &PTR_LAB_007e4068;
      puVar6[1] = *(undefined4 *)(iVar3 + 4);
      puVar6[2] = *(undefined4 *)(iVar3 + 8);
      puVar6[3] = *(undefined4 *)(iVar3 + 0xc);
      puVar6[4] = *(undefined4 *)(iVar3 + 0x10);
      puVar6[5] = *(undefined4 *)(iVar3 + 0x14);
      puVar6[6] = *(undefined4 *)(iVar3 + 0x18);
      puVar6[7] = *(undefined4 *)(iVar3 + 0x1c);
      puVar6[8] = *(undefined4 *)(iVar3 + 0x20);
      puVar6[9] = *(undefined4 *)(iVar3 + 0x24);
      puVar6[10] = *(undefined4 *)(iVar3 + 0x28);
      puVar7 = (undefined4 *)(iVar3 + 0x2c);
      puVar9 = puVar6 + 0xb;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar6[0x1f] = *(undefined4 *)(iVar3 + 0x7c);
      puVar6[0x20] = *(undefined4 *)(iVar3 + 0x80);
      puVar6[0x21] = *(undefined4 *)(iVar3 + 0x84);
      puVar6[0x22] = *(undefined4 *)(iVar3 + 0x88);
      puVar6[0x23] = *(undefined4 *)(iVar3 + 0x8c);
      puVar6[0x24] = *(undefined4 *)(iVar3 + 0x90);
      puVar6[0x25] = *(undefined4 *)(iVar3 + 0x94);
      FUN_0066a070(iVar3 + 0x98);
      *puVar6 = &PTR_FUN_007f0bd4;
    }
    iVar3 = *(int *)((int)param_1 + 0xe);
    local_4 = 3;
    puVar7 = operator_new(0xe);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = puVar6;
      puVar7[1] = iVar3;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar8 = *(int *)((int)param_1 + 0x12);
    *(undefined4 **)((int)param_1 + 0xe) = puVar7;
    *(int *)((int)param_1 + 0x12) = iVar8 + 1;
    if (iVar8 == 0) {
      *(undefined4 **)((int)param_1 + 10) = puVar7;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar7;
    }
  }
  piVar4 = *(int **)((int)param_1 + 10);
  fVar5 = _DAT_007e3380;
  for (piVar2 = piVar4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    fVar5 = fVar5 + *(float *)(*piVar2 + 4);
  }
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    *(float *)(*piVar4 + 4) = *(float *)(*piVar4 + 4) / fVar5;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x2da);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(iVar1 + 0x2de);
  ExceptionList = local_c;
  return param_1;
}


