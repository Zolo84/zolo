// FUN_0079ad7b @ 79ad7b size=917

undefined4 FUN_0079ad7b(void)

{
  int iVar1;
  int iVar2;
  size_t _MaxCount;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int unaff_EBP;
  uint uVar11;
  
  FUN_007a9c5c();
  piVar5 = (int *)FUN_0079b971(*(undefined4 *)(unaff_EBP + 0x18),0,1);
  FUN_0074d780(unaff_EBP + -0x38);
  iVar1 = *piVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = (**(code **)(iVar1 + 8))();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  puVar10 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -0xd) = uVar3;
  *(undefined1 **)(unaff_EBP + -0x14) = puVar10;
  cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) == '+') {
      *puVar10 = 0x2b;
    }
    else {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(iVar1 + 5) != '-') goto LAB_0079ae04;
      *puVar10 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x14) = puVar10 + 1;
    FUN_0079b543();
  }
LAB_0079ae04:
  uVar6 = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (uVar6 == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (uVar6 == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(uVar6 != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) != '0') goto LAB_0079aec5;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0079b543();
    cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
    if (cVar4 != '\0') {
LAB_0079aeb8:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_0079aec5;
      }
      goto LAB_0079aecb;
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) != 'x') {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(iVar1 + 5) != 'X') goto LAB_0079aeb8;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_0079aeb8;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0079b543();
LAB_0079aed0:
    *(uint *)(unaff_EBP + -0x18) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_0079aec5:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_0079aecb:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_0079aed0;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 10;
  }
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_00674910(0);
  FUN_0079b4fd(1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    do {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      cVar4 = *(char *)(iVar1 + 5);
      _MaxCount = *(size_t *)(unaff_EBP + -0x18);
      **(char **)(unaff_EBP + -0x14) = cVar4;
      pvVar7 = _memchr("0123456789abcdefABCDEF",(int)cVar4,_MaxCount);
      if (pvVar7 == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = (char *)&DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
        }
        if ((*pcVar8 == '\0') || (*(char *)(unaff_EBP + -0xd) == '\0')) break;
        if (*(char *)(iVar1 + 4) == '\0') {
          Peek();
        }
        if (*(char *)(iVar1 + 5) != *(char *)(unaff_EBP + -0xd)) break;
        FUN_00797965(1,0);
        uVar6 = uVar6 + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x14) != '0')) &&
           (*(uint *)(unaff_EBP + -0x14) < iVar2 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = (char *)&DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
        }
        if (*pcVar8 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar8 = (char *)&DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
          }
          *pcVar8 = *pcVar8 + '\x01';
        }
      }
      FUN_0079b543();
      cVar4 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
    } while (cVar4 == '\0');
    if (uVar6 != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar8 = (char *)&DAT_007f0c98;
      }
      else {
        FUN_00797b07();
        pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
      }
      if (*pcVar8 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        uVar6 = uVar6 + 1;
      }
    }
  }
  pcVar8 = *(char **)(unaff_EBP + -0x34);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)&DAT_007f0c98;
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((uVar6 == 0) || (*pcVar8 == '\x7f')) break;
      uVar11 = uVar6 - 1;
      if (uVar11 == 0) {
LAB_0079b092:
        if (uVar11 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar9 = (char *)&DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            pcVar9 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar8 < *pcVar9) goto LAB_0079b0b7;
        }
        if ('\0' < pcVar8[1]) {
          pcVar8 = pcVar8 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar9 = (char *)&DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          pcVar9 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
        }
        if (*pcVar8 == *pcVar9) goto LAB_0079b092;
LAB_0079b0b7:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      uVar6 = uVar6 - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar10 = *(undefined1 **)(unaff_EBP + -0x14);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar10 = 0x30;
        puVar10 = puVar10 + 1;
      }
      goto LAB_0079b0e7;
    }
  }
  puVar10 = *(undefined1 **)(unaff_EBP + 8);
LAB_0079b0e7:
  *puVar10 = 0;
  FUN_00674910(1);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}


