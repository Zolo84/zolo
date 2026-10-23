// FUN_0079baf9 @ 79baf9 size=441

undefined4 FUN_0079baf9(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  int unaff_EBP;
  uint uVar10;
  int iVar11;
  
  FUN_007a9c5c();
  pcVar9 = *(char **)(unaff_EBP + 0x14);
  cVar4 = *pcVar9;
  pcVar6 = pcVar9;
  cVar2 = cVar4;
  while (cVar2 != '\0') {
    if (cVar2 == cVar4) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  FUN_0079b4fd(*(undefined4 *)(unaff_EBP + 0x10),0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    uVar10 = 0;
    iVar11 = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      cVar4 = pcVar9[iVar11];
      if (cVar4 != '\0') {
        do {
          if (cVar4 == *pcVar9) break;
          cVar4 = pcVar9[iVar11 + 1];
          iVar11 = iVar11 + 1;
        } while (cVar4 != '\0');
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar6 = (char *)&DAT_007f0c98;
      }
      else {
        FUN_00797b07();
        pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
      }
      if (*pcVar6 == '\0') {
        iVar11 = iVar11 + *(int *)(unaff_EBP + -0x14);
        if ((pcVar9[iVar11] == *pcVar9) || (pcVar9[iVar11] == '\0')) {
          uVar7 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar7 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + uVar10);
          }
          *(undefined1 *)puVar5 = uVar7;
          *(uint *)(unaff_EBP + -0x18) = uVar10;
        }
        else {
          iVar3 = *(int *)(unaff_EBP + 8);
          cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0xc));
          if (cVar4 == '\0') {
            if (*(char *)(iVar3 + 4) == '\0') {
              Peek();
            }
            if (*(char *)(iVar11 + *(int *)(unaff_EBP + 0x14)) == *(char *)(iVar3 + 5)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_0079bc60;
            }
          }
          uVar8 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar8) {
            uVar8 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar5 = &DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + uVar10);
          }
          *(char *)puVar5 = (char)uVar8;
        }
LAB_0079bc60:
        pcVar9 = *(char **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar6 = (char *)&DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
        }
        iVar11 = iVar11 + *pcVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0xc)), cVar4 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0079b543();
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


