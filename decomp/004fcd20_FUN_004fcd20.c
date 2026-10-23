// FUN_004fcd20 @ 4fcd20 size=432

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004fcd20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float local_8;
  int local_4;
  
  local_8 = 0.0;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  if ((*(int *)(param_1 + 0x6c) != 0) && (iVar2 = FUN_00522770(), iVar2 != 0)) {
    FUN_00522770();
  }
  iVar2 = FUN_0044c620(uVar1);
  iVar3 = FUN_00789c90(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (iVar3 != 0) {
    local_8 = *(float *)(iVar3 + 0x14);
  }
  if (iVar2 != 0) {
    local_8 = *(float *)(iVar2 + 0x14) + local_8;
  }
  if ((DAT_00dc1964 != '\0') && (0 < *(int *)(param_1 + 0x13c))) {
    local_4 = 0;
    piVar5 = (int *)(param_1 + 0x88);
    do {
      if (*piVar5 != 0) {
        iVar3 = FUN_00789ce0(*piVar5,piVar5[5]);
        iVar2 = *piVar5;
        if ((*(int *)(param_1 + 0x6c) != 0) && (iVar4 = FUN_00522770(), iVar4 != 0)) {
          FUN_00522770();
        }
        iVar2 = FUN_0044c630(iVar2);
        if (iVar3 != 0) {
          local_8 = *(float *)(iVar3 + 0x14) + local_8;
        }
        if (iVar2 != 0) {
          local_8 = *(float *)(iVar2 + 0x14) + local_8;
        }
      }
      local_4 = local_4 + 1;
      piVar5 = piVar5 + 1;
    } while (local_4 < *(int *)(param_1 + 0x13c));
  }
  iVar2 = *(int *)(param_1 + 0x130);
  if ((*(int *)(param_1 + 0x6c) == 0) || (iVar3 = FUN_00522770(), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = (&DAT_0089cad8)[*(int *)(param_1 + 0x58)];
    }
    if (iVar3 != 0) goto LAB_004fceb0;
  }
  else {
    iVar3 = FUN_00522770();
LAB_004fceb0:
    if (iVar3 != 0) goto LAB_004fceb9;
  }
  iVar3 = DAT_00d0ca90;
LAB_004fceb9:
  return (float10)*(float *)(iVar3 + 0x40a2 + iVar2 * 4) * (float10)local_8 * (float10)_DAT_007e543c
  ;
}


