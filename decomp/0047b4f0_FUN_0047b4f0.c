// FUN_0047b4f0 @ 47b4f0 size=858

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047b4f0(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd181;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x14);
  if (iVar6 == 0) {
    ExceptionList = local_c;
    return 3;
  }
  if ((int *)(iVar6 + -8) == (int *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  uVar12 = (uint)*(ushort *)(*(int *)(param_2 + 4) + 0x1a);
  piVar7 = (int *)FUN_0044c5b0(*(undefined4 *)(iVar6 + 0x80 + uVar12 * 4),
                               *(undefined4 *)(iVar6 + 0x94 + uVar12 * 4));
  cVar5 = (**(code **)(*piVar7 + 0xc))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*piVar7 + 0x14))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar7 + 0x10))();
      if (cVar5 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      puVar8 = operator_new(0x300);
      uStack_4 = 2;
      if (puVar8 != (undefined4 *)0x0) {
        FUN_004fb840();
        *puVar8 = &PTR_FUN_007e69a8;
        puVar8[2] = &PTR_LAB_007e6994;
        *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e698c;
        puVar10 = puVar8 + 0xb3;
        for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined1 *)((int)puVar8 + 0x161) = 1;
        goto LAB_0047b6a6;
      }
    }
    else {
      puVar8 = operator_new(0x2fc);
      uStack_4 = 1;
      if (puVar8 != (undefined4 *)0x0) {
        FUN_004fb840();
        *puVar8 = &PTR_FUN_007e6a00;
        puVar8[2] = &PTR_LAB_007e69ec;
        *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e69e4;
        puVar8[0xb3] = 0;
        puVar10 = puVar8 + 0xb4;
        for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puVar8[0xbd] = 0x7f7fffff;
        *(undefined1 *)(puVar8 + 0x58) = 1;
        goto LAB_0047b6a6;
      }
    }
  }
  else {
    puVar8 = operator_new(0x300);
    uStack_4 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      FUN_004fb840();
      *puVar8 = &PTR_FUN_007e6a58;
      puVar8[2] = &PTR_LAB_007e6a44;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e6a3c;
      puVar10 = puVar8 + 0xb3;
      for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)((int)puVar8 + 0x15f) = 1;
      goto LAB_0047b6a6;
    }
  }
  puVar8 = (undefined4 *)0x0;
LAB_0047b6a6:
  puVar8[0x17] = param_1;
  uStack_4 = 0xffffffff;
  (**(code **)(puVar8[2] + 4))(*(int *)(param_2 + 4) + 0xe);
  FUN_004fbc90(piVar7,*(undefined4 *)(iVar6 + 0x80 + uVar12 * 4),
               *(undefined4 *)(iVar6 + 0x94 + uVar12 * 4),0,1);
  fVar4 = _DAT_007e4088;
  if ((float)puVar8[0x3c] < _DAT_007e4088) {
    fVar4 = (float)puVar8[0x3c];
  }
  puVar8[0x3b] = fVar4;
  if (*(int *)(iVar6 + 100) != 0) {
    puVar8[0x52] = *(undefined4 *)(*(int *)(iVar6 + 100) + 0xc);
  }
  puVar8[0x2c] = *(undefined4 *)(iVar6 + 0xa8 + uVar12 * 4);
  uVar2 = *(undefined4 *)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
  if (*(char *)((int)puVar8 + 0x161) == '\0') {
    FUN_0042dc20(7);
  }
  else {
    uVar9 = __ftol();
    FUN_0042dc20(uVar9);
    if (_DAT_007e4088 <= (float)puVar8[0x3c]) {
      puVar8[0x3b] = _DAT_007e4088;
    }
    else {
      puVar8[0x3b] = puVar8[0x3c];
    }
  }
  puVar8[0x18] = uVar2;
  *(undefined2 *)(puVar8 + 0x19) = uVar1;
  iVar11 = piVar7[0x1148];
  puVar10 = operator_new(0xe);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    *puVar10 = puVar8;
    puVar10[1] = iVar11;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
  }
  iVar3 = piVar7[0x1149];
  piVar7[0x1148] = (int)puVar10;
  piVar7[0x1149] = iVar3 + 1;
  if (iVar3 == 0) {
    piVar7[0x1147] = (int)puVar10;
  }
  else {
    *(undefined4 **)(iVar11 + 8) = puVar10;
  }
  (**(code **)(*(int *)(iVar6 + -8) + 0x24))
            (*(undefined4 *)(iVar6 + 0x80 + uVar12 * 4),*(undefined4 *)(iVar6 + 0x94 + uVar12 * 4),
             uVar12);
  ExceptionList = local_c;
  return 3;
}


