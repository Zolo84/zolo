// FUN_00404300 @ 404300 size=746

void __thiscall FUN_00404300(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iStack_24;
  int iStack_10;
  int local_8;
  int iStack_4;
  
  iVar7 = *param_2;
  iStack_24 = param_2[3];
  iVar9 = param_2[1];
  local_8 = param_2[2];
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  iVar2 = FUN_005841b0();
  if (iVar2 + -2 < iVar9) {
    iVar9 = FUN_005841b0();
    iVar9 = iVar9 + -2;
  }
  if (iStack_24 < 1) {
    iStack_24 = 1;
  }
  iVar2 = FUN_005841b0();
  if (iVar2 + -1 < iStack_24) {
    iStack_24 = FUN_005841b0();
    iStack_24 = iStack_24 + -1;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar2 = FUN_005841a0();
  if (iVar2 + -2 < iVar7) {
    iVar7 = FUN_005841a0();
    iVar7 = iVar7 + -2;
  }
  if (local_8 < 1) {
    local_8 = 1;
  }
  iVar2 = FUN_005841a0();
  if (iVar2 + -1 < local_8) {
    FUN_005841a0();
  }
  if (DAT_00857744 == 0) {
    puVar3 = (ushort *)(**(code **)(*param_1 + 4))();
    iStack_24 = iStack_24 - iVar9;
    if (0 < iStack_24) {
      do {
        iVar9 = iStack_10 - iVar7;
        puVar8 = puVar3;
        if (0 < iStack_10 - iVar7) {
          do {
            uVar1 = *puVar8;
            iVar2 = __ftol();
            if (0x1f < iVar2) {
              iVar2 = 0x1f;
            }
            uVar4 = __ftol();
            if (0x3f < (int)uVar4) {
              uVar4 = 0x3f;
            }
            iVar5 = __ftol();
            if (0x1f < iVar5) {
              iVar5 = 0x1f;
            }
            iVar9 = iVar9 + -1;
            *puVar8 = (byte)((byte)(uVar1 & 0x1f) ^ (byte)iVar5) & 0x1f ^
                      ((ushort)((uVar4 & 0x3f | iVar2 << 6) << 5) | uVar1 & 0x1f);
            puVar8 = puVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar3 = puVar3 + iStack_4;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
      return;
    }
  }
  else {
    puVar3 = (ushort *)(**(code **)(*param_1 + 4))(iVar7,iVar9);
    iStack_24 = iStack_24 - iVar9;
    if (0 < iStack_24) {
      do {
        puVar8 = puVar3;
        iVar9 = iStack_10 - iVar7;
        if (0 < iStack_10 - iVar7) {
          do {
            uVar1 = *puVar8;
            uVar4 = __ftol();
            if (0x1f < (int)uVar4) {
              uVar4 = 0x1f;
            }
            uVar6 = __ftol();
            if (0x1f < (int)uVar6) {
              uVar6 = 0x1f;
            }
            iVar2 = __ftol();
            if (0x1f < iVar2) {
              iVar2 = 0x1f;
            }
            uVar4 = ((uVar4 & 0x1f) << 5 | uVar6 & 0x1f) << 5 | uVar1 & 0x801f;
            iVar9 = iVar9 + -1;
            *puVar8 = (byte)((byte)uVar4 ^ (byte)iVar2) & 0x1f ^ (ushort)uVar4;
            puVar8 = puVar8 + 1;
          } while (iVar9 != 0);
        }
        puVar3 = puVar3 + iStack_4;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
    }
  }
  return;
}


