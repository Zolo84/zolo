// FUN_00405df0 @ 405df0 size=654

undefined4 __thiscall FUN_00405df0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 uVar12;
  uint local_1e0 [3];
  uint local_1d2;
  int local_1b8 [18];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_150;
  undefined1 local_14c [320];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b974b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  FUN_00426f50(param_2);
  local_4 = 0;
  puVar10 = local_1e0;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  cVar1 = FUN_0040f470(local_14c,local_1e0);
  if (cVar1 != '\x01') {
    local_4 = 0xffffffff;
    FUN_00426f80();
    ExceptionList = local_c;
    return 0;
  }
  piVar11 = local_1b8;
  for (iVar7 = 0x1b; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  uVar6 = (ushort)local_1d2;
  local_1b8[2] = local_1e0[2];
  local_1b8[0] = 0x6c;
  local_1b8[3] = local_1e0[1];
  local_170 = 0x20;
  local_1b8[1] = 7;
  local_150 = 0x840;
  if ((((DAT_00dc4b5e == '\0') || (uVar6 == 1)) || (uVar6 == 8)) || (uVar6 == 0x10)) {
LAB_00405eec:
    uVar6 = (ushort)local_1d2;
    if (uVar6 != 0x18) {
      local_1b8[3] = (uint)local_1b8[3] >> 1;
      local_164 = 8;
      param_1[4] = local_1d2 & 0xffff;
      if (uVar6 < 8) {
        param_1[3] = 1;
      }
      else {
        param_1[3] = (int)(local_1d2 & 0xffff) >> 3;
      }
      goto LAB_00405f4f;
    }
  }
  else if (uVar6 != 0x18) {
    FUN_00429a00(s_ERROR___Unsupported_image_bit_co_0082c468,local_1d2 & 0xffff,param_2);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    goto LAB_00405eec;
  }
  local_164 = 0x10;
  param_1[4] = 0x10;
  param_1[3] = 2;
LAB_00405f4f:
  local_16c = 0x40;
  uVar3 = param_1[3] * local_1e0[1] + 7;
  param_1[6] = uVar3 & 0xfffffff8;
  if (uVar6 == 1) {
    param_1[6] = (int)uVar3 >> 3;
  }
  iVar7 = FUN_00579fd0(local_1b8);
  param_1[0xb] = iVar7;
  if (iVar7 != 0) {
    iVar7 = *param_1;
    piVar11 = local_1b8;
    for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    uVar12 = 0xffffffff;
    local_1b8[0] = 0x6c;
    uVar4 = (**(code **)(iVar7 + 8))(0xffffffff);
    FUN_0040eb60(local_14c,uVar4,uVar12);
    (**(code **)(*(int *)param_1[0xb] + 0x58))((int *)param_1[0xb],local_1b8);
    param_1[6] = local_1b8[2];
    (**(code **)(*param_1 + 0xc))();
    param_1[0x8e] = 1;
  }
  sVar9 = 0x7e0;
  if (DAT_00857744 == 1) {
    sVar9 = 0x3e0;
  }
  if (param_1[3] == 2) {
    iVar8 = (param_1[6] * param_1[2]) / 2;
    psVar5 = (short *)(**(code **)(*param_1 + 8))();
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        if (*psVar5 == sVar9) {
          uVar2 = 1;
          goto LAB_00406026;
        }
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
      } while (iVar7 < iVar8);
    }
    (**(code **)(*param_1 + 0xc))();
  }
  uVar2 = 0;
LAB_00406026:
  *(undefined1 *)((int)param_1 + 0x252) = uVar2;
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 1;
}


