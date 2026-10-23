// FUN_006cabc0 @ 6cabc0 size=1000

void __fastcall FUN_006cabc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_3c;
  uint local_38;
  uint local_28;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8c4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar7 = FUN_0042e980();
  if (cVar7 != '\0') {
    piVar4 = *(int **)(param_1 + 0xe8a4);
    while (piVar4 != (int *)0x0) {
      FUN_004c4760();
      local_20 = &PTR_FUN_007ecebc;
      piVar2 = (int *)piVar4[2];
      local_4 = 0;
      iVar1 = DAT_00ab27b4 + *piVar4 * 0x4b2;
      piVar4 = *(int **)(*(int *)(iVar1 + 0x1c2) + 4);
      piVar3 = local_1c;
      while (piVar6 = local_18, local_1c = piVar3, local_18 = piVar6, piVar4 != (int *)0x0) {
        piVar3 = (int *)piVar4[2];
        iVar10 = *piVar4;
        piVar4 = piVar3;
        piVar3 = local_1c;
        if (*(int *)(iVar10 + 0x248) == param_1) {
          pvVar8 = operator_new(0xe);
          local_4._0_1_ = 1;
          if (pvVar8 == (void *)0x0) {
            local_18 = (int *)0x0;
          }
          else {
            local_18 = (int *)FUN_0045bab0(iVar10,piVar6,0);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          iVar10 = local_14 + 1;
          bVar13 = local_14 != 0;
          piVar3 = local_18;
          local_14 = iVar10;
          if (bVar13) {
            piVar6[2] = (int)local_18;
            piVar3 = local_1c;
          }
        }
      }
      if (local_14 < 2) {
        if (((0 < local_14) && (*(int *)(iVar1 + 0x3d8) == param_1)) &&
           (cVar7 = FUN_0051a4c0(), cVar7 != '\0')) {
          piVar4 = *(int **)(iVar1 + 0x172);
          iVar10 = 0;
          local_3c = 0;
          local_38 = 0;
          while ((piVar4 != (int *)0x0 && (iVar10 == 0))) {
            if ((&DAT_0089cad8)[*piVar4] == 0) {
              iVar10 = *piVar4;
            }
            piVar4 = (int *)piVar4[2];
          }
          if (((&DAT_0089cad8)[iVar10] == 0) && (iVar10 != 0)) {
            piVar4 = (int *)(&DAT_00d685be)[iVar10 * 0x2a];
            while (piVar4 != (int *)0x0) {
              piVar3 = (int *)piVar4[2];
              iVar12 = DAT_00ab27b4 + *piVar4 * 0x4b2;
              iVar5 = *(int *)(DAT_00ab27b4 + 0x3d4 + *piVar4 * 0x4b2);
              piVar4 = piVar3;
              if (((iVar5 != 0) && (iVar5 == *(int *)(iVar1 + 0x3d4))) &&
                 (*(int *)(iVar12 + 0x3d8) != param_1)) {
                uVar11 = 1000;
                cVar7 = FUN_004e7940(*(undefined4 *)(iVar12 + 0x12));
                if (cVar7 != '\0') {
                  uVar11 = 2000;
                }
                if (local_38 < uVar11) {
                  local_3c = *(int *)(iVar12 + 0x12);
                  local_38 = uVar11;
                }
              }
            }
            piVar4 = *(int **)(&DAT_00d685d0 + iVar10 * 0xa8);
            while (piVar4 != (int *)0x0) {
              piVar3 = (int *)piVar4[2];
              iVar10 = DAT_00ab27b4 + *piVar4 * 0x4b2;
              iVar12 = *(int *)(DAT_00ab27b4 + 0x3d4 + *piVar4 * 0x4b2);
              piVar4 = piVar3;
              if (((iVar12 != 0) && (iVar12 == *(int *)(iVar1 + 0x3d4))) &&
                 (*(int *)(iVar10 + 0x3d8) != param_1)) {
                uVar11 = 500;
                cVar7 = FUN_004e7940(*(undefined4 *)(iVar10 + 0x12));
                if (cVar7 != '\0') {
                  uVar11 = 0x5dc;
                }
                if (local_38 < uVar11) {
                  local_3c = *(int *)(iVar10 + 0x12);
                  local_38 = uVar11;
                }
              }
            }
            piVar4 = local_1c;
            if (local_3c == 0) goto LAB_006cae54;
          }
          else {
LAB_006cae54:
            iVar10 = 0;
            if (0 < *(int *)(iVar1 + 0x290)) {
              iVar12 = 0;
              do {
                iVar9 = FUN_004e9370(*(undefined4 *)(iVar12 + *(int *)(iVar1 + 0x298)));
                iVar5 = *(int *)(iVar9 + 0x3d4);
                if (((iVar5 != 0) && (iVar5 == *(int *)(iVar1 + 0x3d4))) &&
                   (*(int *)(iVar9 + 0x3d8) != param_1)) {
                  uVar11 = 1;
                  if (iVar5 == *(int *)(iVar1 + 0x3d4)) {
                    uVar11 = 0x65;
                  }
                  if (local_38 < uVar11) {
                    local_3c = *(int *)(iVar9 + 0x12);
                    local_38 = uVar11;
                  }
                }
                iVar10 = iVar10 + 1;
                iVar12 = iVar12 + 0xc;
              } while (iVar10 < *(int *)(iVar1 + 0x290));
              piVar4 = local_1c;
              if (local_3c != 0) goto joined_r0x006caedf;
            }
            local_3c = *(int *)(*(int *)(iVar1 + 0x3d4) + 0x117de);
            piVar4 = local_1c;
          }
joined_r0x006caedf:
          while (piVar4 != (int *)0x0) {
            piVar3 = (int *)piVar4[2];
            iVar1 = *piVar4;
            piVar4 = piVar3;
            if (*(char *)(iVar1 + 0x17b) == '\0') {
              local_28 = local_28 & 0xff000000;
              FUN_0050b600(iVar1,1,local_3c,0x3f800000,1,1,*(undefined4 *)(DAT_00893530 + 0x14),
                           *(undefined2 *)(DAT_00893530 + 0x18),local_28,0,1,0xffffffff,0,1,0,
                           0xbf800000,1);
            }
          }
        }
      }
      else {
        cVar7 = FUN_004a2dd0(&local_20);
        if (cVar7 != '\0') {
          FUN_00461cd0(&local_20);
        }
      }
      local_20 = &PTR_FUN_007ecebc;
      local_4 = 2;
      FUN_0052ac00();
      local_4 = 0xffffffff;
      FUN_00527230();
      piVar4 = piVar2;
    }
  }
  ExceptionList = local_c;
  return;
}


