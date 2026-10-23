// FUN_007a3597 @ 7a3597 size=2165

undefined1 * FUN_007a3597(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_EBP;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar6 = (int *)FUN_007a4adf(uVar5,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x28) = piVar6;
  }
  else {
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar6 = (int *)FUN_007a4bae(uVar5,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(unaff_EBP + -0x28) = piVar6;
  }
  FUN_0074c280();
  uVar5 = FUN_0074c2a0(unaff_EBP + -0x70);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar5 = FUN_0079b652(uVar5,0,1);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
  FUN_0074c280();
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -0x6c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  iVar13 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar7 = (undefined4 *)(**(code **)(iVar13 + 0x24))(unaff_EBP + -0x44);
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar7;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar11 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar11) break;
    cVar3 = *(char *)(unaff_EBP + -0x78 + uVar11);
    if (cVar3 == '$') {
      FUN_007a461f(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x38) != 0)) &&
           (cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10)), cVar3 == '\0')) {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          pcVar14 = *(char **)(unaff_EBP + -0x58);
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)&DAT_007f0c98;
          }
          if (*(char *)((int)puVar1 + 5) == *pcVar14) goto LAB_007a3c8d;
        }
        FUN_00742780(0,DAT_007f33d8);
      }
LAB_007a3c8d:
      FUN_00797b07();
      for (pcVar14 = *(char **)(unaff_EBP + -0x58);
          (cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10)), cVar3 == '\0' &&
          (FUN_00797b07(),
          pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))));
          pcVar14 = pcVar14 + 1) {
        if (*(char *)(puVar1 + 1) == '\0') {
          Peek();
        }
        if (*(char *)((int)puVar1 + 5) != *pcVar14) break;
        FUN_0079b543();
      }
      FUN_00797b07();
      if (pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00674910(1);
    }
    else if (cVar3 == '+') {
      cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
      if (cVar3 == '\0') {
        iVar13 = FUN_007a4636(unaff_EBP + -0xc4);
        iVar13 = *(int *)(iVar13 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar13 == 0) {
LAB_007a3aed:
          *(undefined1 *)(unaff_EBP + 0xf) = 0;
        }
        else {
          iVar9 = FUN_007a4636(unaff_EBP + -0xe4);
          iVar13 = *(int *)(iVar9 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar13 == 0) {
            pcVar14 = (char *)&DAT_007f0c98;
          }
          else {
            FUN_00797b07();
            pcVar14 = *(char **)(iVar9 + 4);
          }
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          *(bool *)(unaff_EBP + 0xf) = *pcVar14 == *(char *)((int)puVar1 + 5);
          FUN_00674910(1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_007a3aed;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00674910(1);
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          iVar13 = FUN_007a464d(unaff_EBP + -0xd4);
          iVar13 = *(int *)(iVar13 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar13 == 0) {
LAB_007a3bb5:
            *(undefined1 *)(unaff_EBP + 0xf) = 0;
          }
          else {
            iVar9 = FUN_007a464d(unaff_EBP + -0xb4);
            iVar13 = *(int *)(iVar9 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (iVar13 == 0) {
              pcVar14 = (char *)&DAT_007f0c98;
            }
            else {
              FUN_00797b07();
              pcVar14 = *(char **)(iVar9 + 4);
            }
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            *(bool *)(unaff_EBP + 0xf) = *pcVar14 == *(char *)((int)puVar1 + 5);
            FUN_00674910(1);
            if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_007a3bb5;
            *(undefined1 *)(unaff_EBP + 0xf) = 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00674910(1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_007a3c0f;
          FUN_0079b543();
          uVar10 = FUN_007a464d(unaff_EBP + -0xf4);
          uVar5 = DAT_007f33d8;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00674710(uVar10,0,uVar5);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        else {
          FUN_0079b543();
          uVar10 = FUN_007a4636(unaff_EBP + -0xa4);
          uVar5 = DAT_007f33d8;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00674710(uVar10,0,uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        FUN_00674910(1);
      }
LAB_007a3c0f:
      if (*(int *)(unaff_EBP + -0x38) == 1) {
        FUN_00742780(0,DAT_007f33d8);
      }
    }
    else {
      if (cVar3 != 'v') {
        if (uVar11 != 3) {
          while (cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10)), cVar3 == '\0') {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) & 0x48) == 0) break;
            FUN_0079b543();
          }
        }
        goto LAB_007a3d0e;
      }
      iVar13 = *piVar6;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      uVar5 = (**(code **)(iVar13 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar5;
      FUN_007a4608(unaff_EBP + -0x94);
      pcVar14 = *(char **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (pcVar14 == (char *)0x0) {
        pcVar14 = (char *)&DAT_007f0c98;
      }
      if (*pcVar14 < '\x01') {
        while (cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10)), cVar3 == '\0') {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                        (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) break;
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          uVar5 = *puVar1;
          uVar10 = puVar1[1];
          FUN_0079b543();
          *(undefined4 *)(unaff_EBP + -0x84) = uVar5;
          *(undefined4 *)(unaff_EBP + -0x80) = uVar10;
          if ((char)uVar10 == '\0') {
            Peek();
          }
          FUN_00797965(1,*(undefined4 *)(unaff_EBP + -0x7f));
        }
LAB_007a3987:
        cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar3 == '\0') {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          cVar3 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 4))();
          if (*(char *)((int)puVar1 + 5) != cVar3) goto LAB_007a3a2a;
          FUN_0079b543();
          cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
          if (cVar3 != '\0') goto LAB_007a3a2a;
          iVar13 = *(int *)(unaff_EBP + -0x4c);
          do {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) break;
            if (*(int *)(unaff_EBP + -0x24) < iVar13) {
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)((int)puVar1 + 5);
              FUN_00797965(1,*(undefined4 *)(unaff_EBP + -0x44));
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            }
            FUN_0079b543();
            cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
          } while (cVar3 == '\0');
        }
        else {
LAB_007a3a2a:
          iVar13 = *(int *)(unaff_EBP + -0x4c);
        }
        if (*(int *)(unaff_EBP + -100) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + -0x24) < iVar13) {
          iVar13 = iVar13 - *(int *)(unaff_EBP + -0x24);
          do {
            FUN_00797965(1,0x30);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      else {
        uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        *(undefined1 *)(unaff_EBP + 0xf) = uVar4;
        uVar11 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_00674910(0);
        FUN_0079b4fd(1,0);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar3 == '\0') {
          do {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar14 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
              }
              if (*pcVar14 == '\0') break;
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              if (*(char *)((int)puVar1 + 5) != *(char *)(unaff_EBP + 0xf)) break;
              FUN_00797965(1,0);
              uVar11 = uVar11 + 1;
            }
            else {
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              *(undefined1 *)(unaff_EBP + -0x74) = *(undefined1 *)((int)puVar1 + 5);
              FUN_00797965(1,*(undefined4 *)(unaff_EBP + -0x74));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar14 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
              }
              if (*pcVar14 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar14 = (char *)&DAT_007f0c98;
                }
                else {
                  FUN_00797b07();
                  pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
                }
                *pcVar14 = *pcVar14 + '\x01';
              }
            }
            FUN_0079b543();
            cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10));
          } while (cVar3 == '\0');
          if (uVar11 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar14 = (char *)&DAT_007f0c98;
            }
            else {
              FUN_00797b07();
              pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
            }
            if (*pcVar14 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar11 = uVar11 + 1;
            }
          }
        }
        pcVar14 = *(char **)(unaff_EBP + -0x90);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)&DAT_007f0c98;
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar11 == 0) || (*pcVar14 == '\x7f')) break;
            uVar12 = uVar11 - 1;
            if (uVar12 == 0) {
LAB_007a3924:
              if (uVar12 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar8 = (char *)&DAT_007f0c98;
                }
                else {
                  FUN_00797b07();
                  pcVar8 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar14 < *pcVar8) goto LAB_007a394c;
              }
              if ('\0' < pcVar14[1]) {
                pcVar14 = pcVar14 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar12) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar8 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar8 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar12);
              }
              if (*pcVar14 == *pcVar8) goto LAB_007a3924;
LAB_007a394c:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar11 = uVar11 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00674910(1);
            goto LAB_007a3987;
          }
        }
        FUN_00674910(1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00674910(1);
      piVar6 = *(int **)(unaff_EBP + -0x28);
    }
LAB_007a3d0e:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_00797b07();
      pcVar14 = *(char **)(unaff_EBP + -0x3c);
      while (cVar3 = FUN_0079bd57(*(undefined4 *)(unaff_EBP + 0x10)), cVar3 == '\0') {
        pcVar14 = pcVar14 + 1;
        FUN_00797b07();
        if (pcVar14 ==
            (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                    *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) break;
        if (*(char *)(puVar1 + 1) == '\0') {
          Peek();
        }
        if (*(char *)((int)puVar1 + 5) != *pcVar14) break;
        FUN_0079b543();
      }
      FUN_00797b07();
      if (pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                  *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) goto LAB_007a3d9d;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      FUN_007a4589(0,1,0x2d);
    }
  }
  else {
LAB_007a3d9d:
    FUN_00742780(0,DAT_007f33d8);
  }
  puVar2 = *(undefined1 **)(unaff_EBP + 8);
  *puVar2 = *(undefined1 *)(unaff_EBP + -0x6c);
  FUN_00674910(0);
  FUN_00674710(unaff_EBP + -0x6c,0,DAT_007f33d8);
  FUN_00674910(1);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


