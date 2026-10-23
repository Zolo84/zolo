// FUN_0040b1f0 @ 40b1f0 size=782

undefined4 __thiscall FUN_0040b1f0(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  short sVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uStack_18;
  int iStack_14;
  int iStack_8;
  int iStack_4;
  
  if (param_1[3] != 1) {
    return 0;
  }
  if (param_1[0xd] == 0) {
    pvVar8 = operator_new(param_2 * 4 + 0x12);
    iVar4 = param_1[6];
    param_1[0xd] = (int)pvVar8;
    *(short *)((int)pvVar8 + 0xc) = (short)param_1[2];
    *(short *)(param_1[0xd] + 10) = (short)(param_1[1] / param_2);
    *(short *)(param_1[0xd] + 2) = (short)param_2;
    iVar9 = (**(code **)(*param_1 + 8))();
    iStack_14 = 0;
    *(undefined4 *)(param_1[0xd] + 0xe) = 0;
    iStack_4 = 0;
    if (0 < param_2) {
      do {
        iVar15 = 0;
        iVar16 = 0;
        uStack_18 = 0;
        iStack_8 = 0;
        if (0 < *(short *)(param_1[0xd] + 0xc)) {
          do {
            sVar7 = FUN_0040b580(iVar9,iVar16,iVar15,iVar4,iStack_14);
            if (sVar7 == 0) {
              bVar2 = *(byte *)(iVar15 * iVar4 + iVar16 + iStack_14 + iVar9);
              sVar7 = FUN_0040b500(iVar9,iVar16,iVar15,iVar4,iStack_14);
              sVar7 = sVar7 + 1;
              uVar6 = uStack_18 + 1;
              if (1 < bVar2) {
                uVar6 = uStack_18 + 2;
              }
            }
            else {
              uVar6 = uStack_18 + 1 + (int)sVar7;
            }
            uStack_18 = uVar6;
            iVar10 = (int)sVar7;
            iStack_8 = iStack_8 + 1;
            if (0 < iVar10) {
              do {
                iVar16 = iVar16 + 1;
                if (iVar16 == *(short *)(param_1[0xd] + 10)) {
                  iVar16 = 0;
                  iVar15 = iVar15 + 1;
                }
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          } while (iVar15 < *(short *)(param_1[0xd] + 0xc));
        }
        iVar16 = 0;
        pvVar8 = operator_new(8);
        *(void **)(param_1[0xd] + 0x12 + iStack_4 * 4) = pvVar8;
        pvVar8 = operator_new(uStack_18);
        iVar15 = 0;
        *(void **)(*(int *)(param_1[0xd] + 0x12 + iStack_4 * 4) + 4) = pvVar8;
        iVar10 = 0;
        **(int **)(param_1[0xd] + 0x12 + iStack_4 * 4) = iStack_8;
        if (0 < *(short *)(param_1[0xd] + 0xc)) {
          do {
            sVar7 = FUN_0040b580(iVar9,iVar10,iVar15,iVar4,iStack_14);
            if (sVar7 == 0) {
              sVar7 = FUN_0040b500(iVar9,iVar10,iVar15,iVar4,iStack_14);
              pcVar13 = (char *)(iVar15 * iVar4 + iVar10 + iStack_14 + iVar9);
              cVar3 = *pcVar13;
              cVar14 = (char)(sVar7 + 1);
              if (cVar3 == '\0') {
                *(char *)((int)pvVar8 + iVar16) = cVar14;
              }
              else {
                if (cVar3 == '\x01') {
                  cVar14 = cVar14 + '@';
                }
                else {
                  *(char *)((int)pvVar8 + iVar16) = cVar14 + -0x80;
                  iVar16 = iVar16 + 1;
                  cVar14 = *pcVar13;
                }
                *(char *)((int)pvVar8 + iVar16) = cVar14;
              }
              iVar11 = (int)(short)(sVar7 + 1);
              iVar16 = iVar16 + 1;
              if (0 < iVar11) {
                do {
                  iVar10 = iVar10 + 1;
                  if (iVar10 == *(short *)(param_1[0xd] + 10)) {
                    iVar10 = 0;
                    iVar15 = iVar15 + 1;
                  }
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
            }
            else {
              *(char *)((int)pvVar8 + iVar16) = (char)sVar7 + -0x40;
              iVar16 = iVar16 + 1;
              iStack_8 = (int)sVar7;
              if (0 < iStack_8) {
                iVar12 = iVar15 * iVar4;
                iVar11 = iVar16;
                do {
                  iVar1 = iVar12 + iVar10;
                  iVar16 = iVar11 + 1;
                  iVar10 = iVar10 + 1;
                  *(undefined1 *)((int)pvVar8 + iVar11) = *(undefined1 *)(iVar1 + iStack_14 + iVar9)
                  ;
                  if (iVar10 == *(short *)(param_1[0xd] + 10)) {
                    iVar10 = 0;
                    iVar15 = iVar15 + 1;
                    iVar12 = iVar12 + iVar4;
                  }
                  iStack_8 = iStack_8 + -1;
                  iVar11 = iVar16;
                } while (iStack_8 != 0);
              }
            }
          } while (iVar15 < *(short *)(param_1[0xd] + 0xc));
        }
        DAT_0088daf0 = DAT_0088daf0 + uStack_18;
        iStack_14 = iStack_14 + *(short *)(param_1[0xd] + 10);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < param_2);
    }
    (**(code **)(*param_1 + 0xc))();
    DAT_0088daec = DAT_0088daec + param_1[6] * param_1[2];
    FUN_0040e9b0();
    piVar5 = (int *)param_1[0xb];
    *(undefined1 *)((int)param_1 + 0x253) = 1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      param_1[0xb] = 0;
    }
    return 1;
  }
  return 0;
}


