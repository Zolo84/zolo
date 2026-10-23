// FUN_0079f574 @ 79f574 size=2222

undefined1 * FUN_0079f574(void)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined2 uVar15;
  undefined2 extraout_var;
  char *pcVar11;
  undefined2 extraout_var_00;
  char *pcVar12;
  undefined2 extraout_var_01;
  int iVar13;
  undefined4 uVar14;
  short *psVar16;
  int unaff_EBP;
  uint uVar17;
  uint uVar18;
  int iVar19;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar8 = FUN_0074c2a0(unaff_EBP + -0x70);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    piVar9 = (int *)FUN_007a14f5(uVar8,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x24) = piVar9;
  }
  else {
    uVar8 = FUN_0074c2a0(unaff_EBP + -0x74);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar9 = (int *)FUN_007a15c4(uVar8,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x24) = piVar9;
  }
  FUN_0074c280();
  uVar8 = FUN_0074c2a0(unaff_EBP + -0x68);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar8 = FUN_007a0e75(uVar8,0,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar8;
  FUN_0074c280();
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x3c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_007a0afc(0);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)(unaff_EBP + -0x50) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_007a0afc(0);
  iVar19 = *piVar9;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar10 = (undefined4 *)(**(code **)(iVar19 + 0x24))(unaff_EBP + -100);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x6c) = *puVar10;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar17 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar17) break;
    cVar6 = *(char *)(unaff_EBP + -0x6c + uVar17);
    if (cVar6 == '$') {
      FUN_007a0b50(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x34) != 0)) &&
           (cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10)), cVar6 == '\0')) {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          psVar16 = *(short **)(unaff_EBP + -0x5c);
          if (psVar16 == (short *)0x0) {
            psVar16 = &DAT_00800310;
          }
          if (*(short *)((int)puVar2 + 6) == *psVar16) goto LAB_0079fc86;
        }
        FUN_007a09db(0,DAT_00800314);
      }
LAB_0079fc86:
      FUN_007a0a47();
      for (psVar16 = *(short **)(unaff_EBP + -0x5c);
          (cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10)), cVar6 == '\0' &&
          (FUN_007a0a47(),
          psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x5c) != 0) &
                   *(int *)(unaff_EBP + -0x5c) + *(int *)(unaff_EBP + -0x58) * 2)));
          psVar16 = psVar16 + 1) {
        if (*(char *)(puVar2 + 1) == '\0') {
          Peek();
        }
        if (*(short *)((int)puVar2 + 6) != *psVar16) break;
        FUN_007a06e5();
      }
      FUN_007a0a47();
      if (psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x5c) != 0) &
                   *(int *)(unaff_EBP + -0x5c) + *(int *)(unaff_EBP + -0x58) * 2)) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_007a0afc(1);
    }
    else if (cVar6 == '+') {
      cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
      if (cVar6 == '\0') {
        iVar19 = FUN_007a0b67(unaff_EBP + -0xc4);
        iVar19 = *(int *)(iVar19 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar19 == 0) {
LAB_0079faeb:
          bVar5 = false;
        }
        else {
          iVar13 = FUN_007a0b67(unaff_EBP + -0xe4);
          iVar19 = *(int *)(iVar13 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar19 == 0) {
            psVar16 = &DAT_00800310;
          }
          else {
            FUN_007a0a47();
            psVar16 = *(short **)(iVar13 + 4);
          }
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          sVar7 = *psVar16;
          sVar1 = *(short *)((int)puVar2 + 6);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_007a0afc(1);
          if (sVar7 != sVar1) goto LAB_0079faeb;
          bVar5 = true;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_007a0afc(1);
        if (bVar5) {
          FUN_007a06e5();
          uVar14 = FUN_007a0b67(unaff_EBP + -0xa4);
          uVar8 = DAT_00800314;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_007a0789(uVar14,0,uVar8);
          *(undefined1 *)(unaff_EBP + -4) = 5;
        }
        else {
          iVar19 = FUN_007a0b7e(unaff_EBP + -0xd4);
          iVar19 = *(int *)(iVar19 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar19 == 0) {
LAB_0079fbb0:
            bVar5 = false;
          }
          else {
            iVar13 = FUN_007a0b7e(unaff_EBP + -0xb4);
            iVar19 = *(int *)(iVar13 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (iVar19 == 0) {
              psVar16 = &DAT_00800310;
            }
            else {
              FUN_007a0a47();
              psVar16 = *(short **)(iVar13 + 4);
            }
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
            }
            sVar7 = *psVar16;
            sVar1 = *(short *)((int)puVar2 + 6);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_007a0afc(1);
            if (sVar7 != sVar1) goto LAB_0079fbb0;
            bVar5 = true;
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_007a0afc(1);
          if (!bVar5) goto LAB_0079fc06;
          FUN_007a06e5();
          uVar14 = FUN_007a0b7e(unaff_EBP + -0xf4);
          uVar8 = DAT_00800314;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_007a0789(uVar14,0,uVar8);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
        }
        FUN_007a0afc(1);
      }
LAB_0079fc06:
      if (*(int *)(unaff_EBP + -0x34) == 1) {
        FUN_007a09db(0,DAT_00800314);
      }
    }
    else {
      if (cVar6 != 'v') {
        if ((uVar17 != 3) &&
           (uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10)), (char)uVar8 == '\0')) {
          piVar3 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar15 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var;
            }
            cVar6 = (**(code **)(*piVar3 + 8))
                              (0x48,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)));
            if (cVar6 == '\0') break;
            FUN_007a06e5();
            uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
        }
        goto LAB_0079fd0c;
      }
      iVar19 = *piVar9;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      uVar8 = (**(code **)(iVar19 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar8;
      FUN_007a0b39(unaff_EBP + -0x94);
      pcVar11 = *(char **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)&DAT_007f0c98;
      }
      if (*pcVar11 < '\x01') {
        while (cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10)), cVar6 == '\0') {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          cVar6 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                            (4,*(undefined2 *)((int)puVar2 + 6));
          if (cVar6 == '\0') break;
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          uVar8 = *puVar2;
          uVar14 = puVar2[1];
          FUN_007a06e5();
          *(undefined4 *)(unaff_EBP + -0x84) = uVar8;
          *(undefined4 *)(unaff_EBP + -0x80) = uVar14;
          if ((char)uVar14 == '\0') {
            Peek();
          }
          FUN_007a03f8(1,*(undefined4 *)(unaff_EBP + -0x7e));
        }
LAB_0079f97f:
        cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar6 == '\0') {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          sVar7 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 4))();
          if (*(short *)((int)puVar2 + 6) != sVar7) goto LAB_0079fa20;
          FUN_007a06e5();
          uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
          if ((char)uVar8 != '\0') goto LAB_0079fa20;
          iVar19 = *(int *)(unaff_EBP + -0x40);
          piVar9 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar15 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var_01;
            }
            cVar6 = (**(code **)(*piVar9 + 8))(4,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)));
            if (cVar6 == '\0') break;
            if (*(int *)(unaff_EBP + 0xc) < iVar19) {
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              FUN_007a03f8(1,*(undefined2 *)((int)puVar2 + 6));
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
            }
            FUN_007a06e5();
            uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
        }
        else {
LAB_0079fa20:
          iVar19 = *(int *)(unaff_EBP + -0x40);
        }
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + 0xc) < iVar19) {
          iVar19 = iVar19 - *(int *)(unaff_EBP + 0xc);
          do {
            uVar8 = FUN_0079c11f(0x30);
            FUN_007a03f8(1,uVar8);
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
      }
      else {
        uVar8 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        *(undefined4 *)(unaff_EBP + -100) = uVar8;
        uVar17 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_00674910(0);
        FUN_0079b4fd(1,0);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
        if ((char)uVar8 == '\0') {
          do {
            uVar15 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var_00;
            }
            cVar6 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                              (4,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)));
            if (cVar6 == '\0') {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar11 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
              }
              if (*pcVar11 == '\0') break;
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              if (*(short *)((int)puVar2 + 6) != *(short *)(unaff_EBP + -100)) break;
              FUN_00797965(1,0);
              uVar17 = uVar17 + 1;
            }
            else {
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              FUN_007a03f8(1,*(undefined2 *)((int)puVar2 + 6));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar11 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
              }
              if (*pcVar11 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar11 = (char *)&DAT_007f0c98;
                }
                else {
                  FUN_00797b07();
                  pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
                }
                *pcVar11 = *pcVar11 + '\x01';
              }
            }
            FUN_007a06e5();
            uVar8 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
          if (uVar17 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar11 = (char *)&DAT_007f0c98;
            }
            else {
              FUN_00797b07();
              pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
            }
            if (*pcVar11 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar17 = uVar17 + 1;
            }
          }
        }
        pcVar11 = *(char **)(unaff_EBP + -0x90);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)&DAT_007f0c98;
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar17 == 0) || (*pcVar11 == '\x7f')) break;
            uVar18 = uVar17 - 1;
            if (uVar18 == 0) {
LAB_0079f91c:
              if (uVar18 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar12 = (char *)&DAT_007f0c98;
                }
                else {
                  FUN_00797b07();
                  pcVar12 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar11 < *pcVar12) goto LAB_0079f944;
              }
              if ('\0' < pcVar11[1]) {
                pcVar11 = pcVar11 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar18) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar12 = (char *)&DAT_007f0c98;
              }
              else {
                FUN_00797b07();
                pcVar12 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar18);
              }
              if (*pcVar11 == *pcVar12) goto LAB_0079f91c;
LAB_0079f944:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar17 = uVar17 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_00674910(1);
            goto LAB_0079f97f;
          }
        }
        FUN_00674910(1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00674910(1);
      piVar9 = *(int **)(unaff_EBP + -0x24);
    }
LAB_0079fd0c:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_007a0a47();
      psVar16 = *(short **)(unaff_EBP + -0x38);
      while (cVar6 = FUN_007a1c0a(*(undefined4 *)(unaff_EBP + 0x10)), cVar6 == '\0') {
        psVar16 = psVar16 + 1;
        FUN_007a0a47();
        if (psVar16 ==
            (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                     *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2)) break;
        if (*(char *)(puVar2 + 1) == '\0') {
          Peek();
        }
        if (*(short *)((int)puVar2 + 6) != *psVar16) break;
        FUN_007a06e5();
      }
      FUN_007a0a47();
      if (psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                   *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2))
      goto LAB_0079fd9e;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      uVar8 = FUN_0079c11f(0x2d);
      FUN_007a0901(0,1,uVar8);
    }
  }
  else {
LAB_0079fd9e:
    FUN_007a09db(0,DAT_00800314);
  }
  puVar4 = *(undefined1 **)(unaff_EBP + 8);
  *puVar4 = *(undefined1 *)(unaff_EBP + -0x50);
  FUN_007a0afc(0);
  FUN_007a0789(unaff_EBP + -0x50,0,DAT_00800314);
  *(undefined4 *)(unaff_EBP + -0x78) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_007a0afc(1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007a0afc(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


