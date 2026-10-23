// FUN_004197f0 @ 4197f0 size=758

void __thiscall FUN_004197f0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_28;
  int local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9e5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x13e);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)FUN_00426f50(param_2);
  }
  uVar1 = local_28[0x4e];
  local_4 = 0xffffffff;
  param_1[0xc01] = uVar1;
  pvVar2 = operator_new(uVar1);
  *param_1 = (int)pvVar2;
  piVar3 = param_1 + 0xa01;
  iVar6 = 0x200;
  do {
    piVar3[-0xa00] = 0;
    *piVar3 = 0;
    piVar3[-0x400] = 0;
    piVar3[-0x600] = 0;
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  if (0 < param_1[0xc01]) {
    do {
      FUN_004271a0(&local_14,1);
      iVar6 = iVar6 + 1;
      param_1[(local_14 & 0xff) + 1] = param_1[(local_14 & 0xff) + 1] + 1;
    } while (iVar6 < param_1[0xc01]);
  }
  FUN_004273c0(0);
  iVar12 = 0;
  piVar3 = param_1 + 0x401;
  iVar6 = 0;
  piVar8 = piVar3;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      iVar12 = iVar12 + 1;
      piVar8 = piVar8 + 1;
      *piVar8 = iVar6;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x100);
  if (0 < iVar12) {
    iVar6 = iVar12;
    do {
      iVar10 = piVar3[iVar6];
      iVar7 = iVar6;
      while (iVar7 <= (iVar12 + 1) / 2) {
        iVar9 = iVar7 * 2;
        if ((iVar9 < iVar12 + 1) && (param_1[iVar7 * 2 + 0x402] < piVar3[iVar7 * 2])) {
          iVar9 = iVar9 + 1;
        }
        if (iVar10 <= piVar3[iVar9]) break;
        piVar3[iVar7] = piVar3[iVar9];
        iVar7 = iVar9;
      }
      iVar6 = iVar6 + -1;
      piVar3[iVar7] = iVar10;
    } while (0 < iVar6);
  }
  if (1 < iVar12) {
    local_18 = iVar12 + -1;
    iVar6 = iVar12 + 1;
    iVar10 = -0x100 - iVar12;
    piVar4 = param_1 + iVar12 + 0x101;
    iVar12 = iVar12 - local_18;
    do {
      piVar8 = piVar4 + 0x300;
      local_10 = (void *)param_1[0x402];
      piVar4 = piVar4 + -1;
      param_1[0x402] = *piVar8;
      iVar7 = param_1[0x402];
      iVar10 = iVar10 + 1;
      iVar13 = iVar6 + -1;
      iVar5 = iVar13 / 2;
      iVar9 = 1;
      if (0 < iVar5) {
        do {
          iVar11 = iVar9 * 2;
          if ((iVar11 < iVar13) && (param_1[iVar9 * 2 + 0x402] < piVar3[iVar9 * 2])) {
            iVar11 = iVar11 + 1;
          }
        } while ((piVar3[iVar11] < iVar7) &&
                (piVar3[iVar9] = piVar3[iVar11], iVar9 = iVar11, iVar11 <= iVar5));
      }
      piVar3[iVar9] = iVar7;
      *piVar4 = param_1[param_1[0x402] + 1] + param_1[(int)local_10 + 1];
      param_1[(int)local_10 + 0x601] = iVar6 + 0xfe;
      param_1[param_1[0x402] + 0x601] = iVar10;
      param_1[0x402] = iVar6 + 0xfe;
      iVar6 = param_1[0x402];
      iVar7 = 1;
      if (0 < iVar5) {
        do {
          iVar9 = iVar7 * 2;
          if ((iVar9 < iVar13) && (param_1[iVar7 * 2 + 0x402] < piVar3[iVar7 * 2])) {
            iVar9 = iVar9 + 1;
          }
        } while ((piVar3[iVar9] < iVar6) &&
                (piVar3[iVar7] = piVar3[iVar9], iVar7 = iVar9, iVar9 <= iVar5));
      }
      piVar3[iVar7] = iVar6;
      local_18 = local_18 + -1;
      iVar6 = iVar13;
    } while (local_18 != 0);
  }
  param_1[iVar12 + 0x701] = 0;
  piVar3 = param_1 + 0xa01;
  iVar6 = 0x101;
  do {
    iVar12 = 0;
    if (piVar3[-0xa00] == 0) {
      *piVar3 = 0;
    }
    else {
      iVar9 = 0;
      iVar7 = 1;
      for (iVar10 = piVar3[-0x400]; iVar10 != 0; iVar10 = param_1[iVar10 + 0x601]) {
        if (iVar10 < 0) {
          iVar9 = iVar9 + iVar7;
          iVar10 = -iVar10;
        }
        iVar7 = iVar7 * 2;
        iVar12 = iVar12 + 1;
      }
      *piVar3 = iVar9;
    }
    piVar3[-0x200] = iVar12;
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (local_28 != (undefined4 *)0x0) {
    (**(code **)*local_28)(1);
  }
  ExceptionList = local_c;
  return;
}


