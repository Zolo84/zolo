// FUN_00431220 @ 431220 size=972

/* WARNING: Removing unreachable block (ram,0x004312e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00431220(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iStack_14;
  undefined4 uStack_10;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = (**(code **)(*param_1 + 0x34))(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_3 + 0x474) = 0;
    (**(code **)(*param_1 + 0x44))();
    *(undefined4 *)(param_3 + 0x478) = 0;
    fVar8 = (float10)(**(code **)(*param_1 + 0x40))(param_2,param_3,param_4);
    *(float *)(param_3 + 0x47c) = (float)fVar8;
    DAT_00893768 = DAT_00893768 + 1;
    iVar7 = DAT_00893768;
    while (1 < iVar7) {
      iVar4 = iVar7 / 2;
      cVar1 = (*(code *)*DAT_00893760)(param_3,*(undefined4 *)(DAT_00893764 + iVar4 * 4));
      if (cVar1 == '\0') break;
      *(undefined4 *)(DAT_00893764 + iVar7 * 4) = *(undefined4 *)(DAT_00893764 + iVar4 * 4);
      iVar7 = iVar4;
    }
    *(int *)(DAT_00893764 + iVar7 * 4) = param_3;
    *(undefined1 *)(param_3 + 0x480) = 1;
    iVar7 = param_3;
    while (DAT_00893768 != 0) {
      DAT_00893768 = DAT_00893768 + -1;
      iVar4 = *(int *)(DAT_00893764 + 4);
      uVar10 = *(undefined4 *)(DAT_00893764 + 4 + DAT_00893768 * 4);
      iVar7 = 1;
      if (0 < DAT_00893768 / 2) {
        do {
          iVar6 = iVar7 * 2;
          if ((iVar6 < DAT_00893768) &&
             (cVar1 = (*(code *)*DAT_00893760)
                                (*(undefined4 *)(DAT_00893764 + 4 + iVar7 * 8),
                                 *(undefined4 *)(DAT_00893764 + iVar7 * 8)), cVar1 != '\0')) {
            iVar6 = iVar6 + 1;
          }
          cVar1 = (*(code *)*DAT_00893760)(uVar10,*(undefined4 *)(DAT_00893764 + iVar6 * 4));
        } while ((cVar1 == '\0') &&
                (*(undefined4 *)(DAT_00893764 + iVar7 * 4) =
                      *(undefined4 *)(DAT_00893764 + iVar6 * 4), iVar7 = iVar6,
                iVar6 <= DAT_00893768 / 2));
      }
      *(undefined4 *)(DAT_00893764 + iVar7 * 4) = uVar10;
      *(undefined1 *)(iVar4 + 0x480) = 0;
      iVar6 = iVar4;
      cVar1 = (**(code **)(*param_1 + 0x38))(unaff_EBX,uStack_10,iVar4);
      if (cVar1 != '\0') {
        iVar7 = *(int *)(iVar4 + 0x474);
        while (iVar7 != 0) {
          FUN_00432cf0(iVar4);
          iVar4 = *(int *)(iVar4 + 0x474);
          iVar7 = *(int *)(iVar4 + 0x474);
        }
        FUN_00431800(iStack_14);
        DAT_00893768 = 0;
        return 1;
      }
      iVar3 = *(int *)(iVar4 + 0x290);
      iVar7 = iStack_14;
      if (0 < iVar3) {
        iVar11 = 0;
        do {
          iVar12 = iVar11;
          iVar2 = FUN_004e9370(*(undefined4 *)(iVar11 + *(int *)(iVar4 + 0x298)));
          iVar11 = iVar11 + *(int *)(iVar4 + 0x298);
          cVar1 = (**(code **)(*param_1 + 0x30))(unaff_EBX,uStack_10,iVar4,iVar2,iVar11);
          if (cVar1 != '\0') {
            fVar9 = *(float *)(iVar4 + 0x478);
            fVar8 = (float10)(**(code **)(*param_1 + 0x3c))(unaff_EBX,iVar4,iVar2,iVar11);
            fVar9 = (float)(fVar8 + (float10)fVar9);
            if ((*(float *)(iVar2 + 0x47c) <= _DAT_007e408c) || (fVar9 < *(float *)(iVar2 + 0x478)))
            {
              *(int *)(iVar2 + 0x474) = iVar4;
              (**(code **)(*param_1 + 0x44))(iVar2);
              *(int *)(iVar2 + 0x478) = param_3;
              fVar8 = (float10)(**(code **)(*param_1 + 0x40))(unaff_EBX,iVar2,iStack_14);
              *(float *)(iVar2 + 0x47c) = (float)(fVar8 + (float10)fVar9);
              if (*(char *)(iVar2 + 0x480) == '\0') {
                DAT_00893768 = DAT_00893768 + 1;
                iVar11 = DAT_00893768;
                while (1 < iVar11) {
                  iVar5 = iVar11 / 2;
                  iVar4 = iVar6;
                  cVar1 = (*(code *)*DAT_00893760)(iVar2,*(undefined4 *)(DAT_00893764 + iVar5 * 4));
                  iVar6 = iVar4;
                  if (cVar1 == '\0') break;
                  *(undefined4 *)(DAT_00893764 + iVar11 * 4) =
                       *(undefined4 *)(DAT_00893764 + iVar5 * 4);
                  iVar11 = iVar5;
                }
                *(int *)(DAT_00893764 + iVar11 * 4) = iVar2;
                *(undefined1 *)(iVar2 + 0x480) = 1;
              }
            }
          }
          iVar11 = iVar12 + 0xc;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar4 = *(int *)(iVar7 + 0x290);
    iVar6 = 0;
    *(undefined4 *)(iVar7 + 0x474) = 0;
    *(undefined4 *)(iVar7 + 0x478) = 0;
    *(undefined4 *)(iVar7 + 0x47c) = 0;
    *(undefined1 *)(iVar7 + 0x480) = 0;
    *(undefined1 *)(iVar7 + 0x181) = 0;
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(iVar6 + *(int *)(iVar7 + 0x298));
        if (_DAT_007e408c < *(float *)(DAT_00ab27b4 + 0x47c + iVar3 * 0x4b2)) {
          FUN_00431800(DAT_00ab27b4 + iVar3 * 0x4b2);
        }
        iVar6 = iVar6 + 0xc;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    DAT_00893768 = 0;
  }
  return 0;
}


