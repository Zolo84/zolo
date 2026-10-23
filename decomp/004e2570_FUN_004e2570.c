// FUN_004e2570 @ 4e2570 size=935

void __thiscall FUN_004e2570(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int local_20;
  int iStack_18;
  
  local_20 = 0;
  if (param_2 < 8) {
    local_20 = param_2 + -8;
    param_2 = 8;
  }
  if (param_3 < 0x294) {
    param_3 = 0x294;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
  iVar9 = iVar1 + 6;
  if (iVar9 < param_4) {
    local_20 = (param_4 - iVar1) + -6;
    param_4 = iVar9;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x2e) + 8) + 0x292;
  if (iVar9 < param_5) {
    param_5 = iVar9;
  }
  iVar2 = (**(code **)(*DAT_00bd1bac + 8))();
  iVar1 = DAT_00bd1bac[6];
  iVar3 = iVar1 * param_5;
  param_3 = iVar1 * param_3;
  iVar4 = DAT_00bd1bac[3];
  iVar5 = iVar4 * param_2;
  param_4 = iVar4 * param_4;
  iVar9 = 0;
  iStack_18 = 0;
  param_5 = 0;
  param_2 = 0;
  if (local_20 < 1) {
    if (-1 < local_20) goto LAB_004e2671;
    iVar9 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
    param_2 = (iVar9 + 7 + local_20) * iVar4;
    iVar9 = iVar9 + 7;
  }
  else {
    param_2 = iVar4 * 8;
    iVar9 = local_20 + 8;
  }
  iVar9 = iVar9 * iVar4;
  param_5 = iVar3;
  iStack_18 = param_3;
LAB_004e2671:
  iVar4 = 0;
  *(int *)(param_1 + 0x4c) = param_2;
  *(int *)(param_1 + 0x54) = iVar9;
  *(int *)(param_1 + 0x50) = iStack_18;
  *(int *)(param_1 + 0x58) = param_5;
  if ((((param_2 != 0) || (iVar9 != 0)) || (iStack_18 != 0)) || (param_5 != 0)) {
    if (param_2 <= iVar9) {
      puVar7 = (undefined1 *)(param_2 + iStack_18 + 1 + iVar2);
      iVar8 = param_2;
      do {
        iVar8 = iVar8 + 2;
        puVar6 = puVar7 + 2;
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4) = puVar7[-1];
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4 + 1) = *puVar7;
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4 + 2) =
             *(undefined1 *)(param_5 + iVar2 + -2 + iVar8);
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4 + 3) = puVar6[(param_5 - iStack_18) + -2];
        puVar7[-1] = 0xff;
        *puVar7 = 0xff;
        *(undefined1 *)(param_5 + iVar2 + -2 + iVar8) = 0xff;
        iVar4 = iVar4 + 4;
        puVar6[(param_5 - iStack_18) + -2] = 0xff;
        puVar7 = puVar6;
      } while (iVar8 <= iVar9);
    }
    iStack_18 = iStack_18 + iVar1;
    if (iStack_18 < param_5) {
      puVar7 = (undefined1 *)(iStack_18 + param_2 + 1 + iVar2);
      iVar8 = iVar9 - param_2;
      param_2 = iStack_18;
      do {
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4) = puVar7[-1];
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4 + 1) = *puVar7;
        *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar4 + 2) =
             *(undefined1 *)(iVar9 + iVar2 + param_2);
        *(undefined1 *)(iVar4 + 3 + *(int *)(param_1 + 0x38)) = puVar7[iVar8];
        iVar4 = iVar4 + 4;
        if ((local_20 == 0) || (local_20 < 0)) {
          puVar7[-1] = 0xff;
          *puVar7 = 0xff;
        }
        if ((local_20 == 0) || (0 < local_20)) {
          *(undefined1 *)(iVar9 + iVar2 + param_2) = 0xff;
          puVar7[iVar8] = 0xff;
        }
        param_2 = param_2 + iVar1;
        puVar7 = puVar7 + iVar1;
      } while (param_2 < param_5);
    }
  }
  iVar9 = 0;
  *(int *)(param_1 + 0x3c) = iVar5;
  *(int *)(param_1 + 0x40) = param_3;
  *(int *)(param_1 + 0x44) = param_4;
  *(int *)(param_1 + 0x48) = iVar3;
  if (iVar5 <= param_4) {
    puVar7 = (undefined1 *)(iVar5 + param_3 + 1 + iVar2);
    iVar4 = iVar5;
    do {
      iVar8 = iVar4 + 2;
      *(undefined1 *)(iVar9 + *(int *)(param_1 + 0x38)) = puVar7[-1];
      *(undefined1 *)(iVar9 + 1 + *(int *)(param_1 + 0x38)) = *puVar7;
      *(undefined1 *)(iVar9 + 2 + *(int *)(param_1 + 0x38)) = *(undefined1 *)(iVar4 + iVar3 + iVar2)
      ;
      *(undefined1 *)(iVar9 + 3 + *(int *)(param_1 + 0x38)) = puVar7[iVar3 - param_3];
      puVar7[-1] = 0xff;
      *puVar7 = 0xff;
      *(undefined1 *)(iVar3 + iVar2 + -2 + iVar8) = 0xff;
      iVar9 = iVar9 + 4;
      (puVar7 + 2)[(iVar3 - param_3) + -2] = 0xff;
      puVar7 = puVar7 + 2;
      iVar4 = iVar8;
    } while (iVar8 <= param_4);
  }
  param_3 = param_3 + iVar1;
  if (param_3 < iVar3) {
    puVar7 = (undefined1 *)(iVar5 + param_3 + 1 + iVar2);
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9) = puVar7[-1];
      *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9 + 1) = *puVar7;
      *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9 + 2) =
           *(undefined1 *)(param_4 + iVar2 + param_3);
      *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9 + 3) = puVar7[param_4 - iVar5];
      iVar9 = iVar9 + 4;
      if ((local_20 == 0) || (0 < local_20)) {
        puVar7[-1] = 0xff;
        *puVar7 = 0xff;
      }
      if ((local_20 == 0) || (local_20 < 0)) {
        *(undefined1 *)(param_4 + iVar2 + param_3) = 0xff;
        puVar7[param_4 - iVar5] = 0xff;
      }
      param_3 = param_3 + iVar1;
      puVar7 = puVar7 + iVar1;
    } while (param_3 < iVar3);
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  return;
}


