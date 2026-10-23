// FUN_007a1933 @ 7a1933 size=460

undefined4 FUN_007a1933(void)

{
  short sVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined1 uVar8;
  uint uVar9;
  short *psVar10;
  int unaff_EBP;
  uint uVar11;
  int iVar12;
  
  FUN_007a9c5c();
  psVar10 = *(short **)(unaff_EBP + 0x14);
  sVar4 = *psVar10;
  psVar7 = psVar10;
  sVar1 = sVar4;
  while (sVar1 != 0) {
    if (sVar1 == sVar4) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    psVar7 = psVar7 + 1;
    sVar1 = *psVar7;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  FUN_0079b4fd(*(undefined4 *)(unaff_EBP + 0x10),0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    uVar11 = 0;
    iVar12 = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      sVar4 = psVar10[iVar12];
      psVar7 = psVar10 + iVar12;
      if (sVar4 != 0) {
        do {
          if (sVar4 == *psVar10) break;
          iVar12 = iVar12 + 1;
          psVar7 = psVar7 + 1;
          sVar4 = *psVar7;
        } while (sVar4 != 0);
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar5 = (char *)&DAT_007f0c98;
      }
      else {
        FUN_00797b07();
        pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
      }
      if (*pcVar5 == '\0') {
        iVar12 = iVar12 + *(int *)(unaff_EBP + -0x14);
        if ((psVar10[iVar12] == *psVar10) || (psVar10[iVar12] == 0)) {
          uVar8 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar8 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar6 = &DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            puVar6 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + uVar11);
          }
          *(undefined1 *)puVar6 = uVar8;
          *(uint *)(unaff_EBP + -0x18) = uVar11;
        }
        else {
          iVar2 = *(int *)(unaff_EBP + 8);
          cVar3 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0xc));
          if (cVar3 == '\0') {
            if (*(char *)(iVar2 + 4) == '\0') {
              Peek();
            }
            if (*(short *)(*(int *)(unaff_EBP + 0x14) + iVar12 * 2) == *(short *)(iVar2 + 6)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_007a1aad;
            }
          }
          uVar9 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar9) {
            uVar9 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar6 = &DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            puVar6 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + uVar11);
          }
          *(char *)puVar6 = (char)uVar9;
        }
LAB_007a1aad:
        psVar10 = *(short **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar5 = (char *)&DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
        }
        iVar12 = iVar12 + *pcVar5;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar3 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0xc)), cVar3 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_007a06e5();
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


