// FUN_005054d0 @ 5054d0 size=480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005054d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int local_8;
  
  if ((*(int *)(param_1 + 0x6c) == 0) || (iVar3 = FUN_00522770(), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = (&DAT_0089cad8)[*(int *)(param_1 + 0x58)];
    }
    if (iVar3 != 0) goto LAB_00505510;
LAB_00505514:
    iVar3 = DAT_00d0ca90;
  }
  else {
    iVar3 = FUN_00522770();
LAB_00505510:
    if (iVar3 == 0) goto LAB_00505514;
  }
  if (*(int *)(param_1 + 0x130) < 0x8c) {
    iVar7 = 0;
    pfVar6 = (float *)(param_1 + 0x164);
    do {
      iVar1 = iVar7 + *(int *)(param_1 + 0x130) * 0x33;
      iVar7 = iVar7 + 1;
      *pfVar6 = (float)(int)*(short *)(iVar3 + 0x7348 + iVar1 * 2);
      pfVar6 = pfVar6 + 1;
    } while (iVar7 < 0x33);
    if (DAT_00dc191a == '\0') goto LAB_005055da;
    iVar7 = FUN_0044c3d0(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
    if (iVar7 != 0) {
      puVar8 = (undefined4 *)(param_1 + 0x232);
      puVar4 = (undefined4 *)(iVar7 + 0xd2);
      iVar7 = 0x25;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      goto LAB_005055da;
    }
    iVar7 = 0x25;
    puVar8 = (undefined4 *)(param_1 + 0x232);
  }
  else {
    puVar8 = (undefined4 *)(param_1 + 0x164);
    for (iVar7 = 0x33; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    if (DAT_00dc191a == '\0') goto LAB_005055da;
    puVar8 = (undefined4 *)(param_1 + 0x232);
    iVar7 = 0x25;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
LAB_005055da:
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x13c)) {
    piVar10 = (int *)(param_1 + 0x88);
    do {
      iVar7 = 0;
      pfVar6 = (float *)(param_1 + 0x164);
      do {
        iVar1 = iVar7 + *piVar10 * 0x33;
        iVar7 = iVar7 + 1;
        *pfVar6 = (float)(int)*(short *)(iVar3 + 0xab10 + iVar1 * 2) + *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (iVar7 < 0x33);
      if ((DAT_00dc191a != '\0') && (iVar7 = FUN_0044c5b0(*piVar10,piVar10[5]), iVar7 != 0)) {
        piVar9 = (int *)(param_1 + 0x232);
        piVar5 = (int *)(iVar7 + 0xd2);
        iVar7 = 0x25;
        do {
          *piVar9 = *piVar9 + *piVar5;
          if (*piVar9 < 0) {
            *piVar9 = 0;
          }
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_8 = local_8 + 1;
      piVar10 = piVar10 + 1;
    } while (local_8 < *(int *)(param_1 + 0x13c));
  }
  iVar3 = 0x33;
  pfVar6 = (float *)(param_1 + 0x164);
  do {
    iVar3 = iVar3 + -1;
    *pfVar6 = *pfVar6 * _DAT_007e46cc;
    pfVar6 = pfVar6 + 1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x230) = 0;
  return;
}


