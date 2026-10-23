// FUN_0066b150 @ 66b150 size=449

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0066b150(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  void **ppvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3fbb;
  iVar1 = *(int *)(param_2 + 0x120);
  ppvVar6 = &local_c;
  local_c = ExceptionList;
  for (piVar2 = *(int **)(iVar1 + 0x2cc); ExceptionList = ppvVar6, piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    puVar7 = operator_new(0xba);
    local_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar3 = *piVar2;
      *puVar7 = &PTR_LAB_007e4068;
      puVar7[1] = *(undefined4 *)(iVar3 + 4);
      puVar7[2] = *(undefined4 *)(iVar3 + 8);
      puVar7[3] = *(undefined4 *)(iVar3 + 0xc);
      puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
      puVar7[5] = *(undefined4 *)(iVar3 + 0x14);
      puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
      puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
      puVar7[8] = *(undefined4 *)(iVar3 + 0x20);
      puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
      puVar7[10] = *(undefined4 *)(iVar3 + 0x28);
      puVar8 = (undefined4 *)(iVar3 + 0x2c);
      puVar10 = puVar7 + 0xb;
      for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar7[0x1f] = *(undefined4 *)(iVar3 + 0x7c);
      puVar7[0x20] = *(undefined4 *)(iVar3 + 0x80);
      puVar7[0x21] = *(undefined4 *)(iVar3 + 0x84);
      puVar7[0x22] = *(undefined4 *)(iVar3 + 0x88);
      puVar7[0x23] = *(undefined4 *)(iVar3 + 0x8c);
      puVar7[0x24] = *(undefined4 *)(iVar3 + 0x90);
      puVar7[0x25] = *(undefined4 *)(iVar3 + 0x94);
      FUN_0066a070(iVar3 + 0x98);
      *puVar7 = &PTR_FUN_007f0bd4;
    }
    iVar3 = *(int *)((int)param_1 + 0xe);
    local_4 = 0xffffffff;
    puVar8 = operator_new(0xe);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = puVar7;
      puVar8[1] = iVar3;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    iVar9 = *(int *)((int)param_1 + 0x12);
    *(undefined4 **)((int)param_1 + 0xe) = puVar8;
    *(int *)((int)param_1 + 0x12) = iVar9 + 1;
    if (iVar9 == 0) {
      *(undefined4 **)((int)param_1 + 10) = puVar8;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar8;
    }
    ppvVar6 = ExceptionList;
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
  return;
}


