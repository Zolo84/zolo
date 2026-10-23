// FUN_007a3e0c @ 7a3e0c size=1451

undefined4 * FUN_007a3e0c(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int unaff_EBP;
  undefined1 *puVar13;
  int iVar14;
  char *pcVar15;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piVar6 = (int *)FUN_007a4adf(uVar5,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = piVar6;
  }
  else {
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar6 = (int *)FUN_007a4bae(uVar5,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = piVar6;
  }
  FUN_0074c280();
  uVar7 = (**(code **)(*piVar6 + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = uVar7;
  FUN_007a4608(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (uVar7 < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar8 = *(char **)(unaff_EBP + -0xa0);
    pcVar15 = (char *)&DAT_007f0c98;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)&DAT_007f0c98;
    }
    if ('\0' < *pcVar8) {
      uVar4 = (**(code **)(*piVar6 + 8))();
      *(undefined1 *)(unaff_EBP + -0x10) = uVar4;
      if (*(int *)(unaff_EBP + -0xa0) != 0) {
        pcVar15 = *(char **)(unaff_EBP + -0xa0);
      }
      uVar7 = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar15, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < uVar7)))
      {
        uVar7 = uVar7 - (int)cVar1;
        FUN_007a4589(uVar7,1,*(undefined4 *)(unaff_EBP + -0x10));
        if ('\0' < pcVar15[1]) {
          pcVar15 = pcVar15 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  iVar11 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar9 = (undefined4 *)(**(code **)(iVar11 + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar9;
    uVar10 = FUN_007a4636(unaff_EBP + -0x20);
    uVar5 = DAT_007f33d8;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00674710(uVar10,0,uVar5);
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(iVar11 + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar9;
    uVar10 = FUN_007a464d(unaff_EBP + -0x20);
    uVar5 = DAT_007f33d8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00674710(uVar10,0,uVar5);
  }
  FUN_00674910(1);
  *(undefined1 *)(unaff_EBP + -0x90) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    uVar10 = FUN_007a461f(unaff_EBP + -0x20);
    uVar5 = DAT_007f33d8;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00674710(uVar10,0,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00674910(1);
  }
  bVar3 = false;
  uVar12 = 0;
  uVar7 = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + uVar7);
    if (cVar1 == ' ') {
      bVar3 = true;
    }
    else if (cVar1 == '$') {
      uVar12 = uVar12 + *(int *)(unaff_EBP + -0x88);
    }
    else if (cVar1 == '+') {
      uVar12 = uVar12 + *(int *)(unaff_EBP + -0x3c);
    }
    else if (cVar1 == 'v') {
      uVar2 = *(uint *)(unaff_EBP + 0x14);
      if (uVar2 < *(uint *)(unaff_EBP + 0x2c)) {
        iVar11 = 0;
      }
      else {
        iVar11 = (uVar2 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar12 = uVar12 + (uint)(uVar2 != 0) + *(int *)(unaff_EBP + 0x2c) + iVar11;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)uVar7 < 1) || (uVar7 <= uVar12)) {
    iVar11 = 0;
  }
  else {
    iVar11 = uVar7 - uVar12;
  }
  uVar7 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = iVar11;
  uVar7 = uVar7 & 0x1c0;
  *(uint *)(unaff_EBP + -0x80) = uVar7;
  if ((uVar7 != 0x40) && ((uVar7 != 0x100 || (!bVar3)))) {
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      FUN_0074d720(*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x30);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar10 = *(undefined4 *)(unaff_EBP + 0x10);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (uVar7 == 0x100) {
        iVar11 = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          FUN_0074d720(*(undefined4 *)(unaff_EBP + 0x1c));
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar10 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
      }
      goto LAB_007a42f4;
    }
    if (cVar1 == '$') {
      iVar11 = *(int *)(unaff_EBP + -0x88);
      FUN_00797b07();
      puVar13 = *(undefined1 **)(unaff_EBP + -0x8c);
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        FUN_0074d720(*puVar13);
        puVar13 = puVar13 + 1;
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x5c);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x58);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
LAB_007a41a5:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_00797b07();
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0xc);
        uVar4 = **(undefined1 **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_0074d720(CONCAT31((int3)((uint)*(undefined1 **)(unaff_EBP + -0x40) >> 8),uVar4));
        uVar5 = *(undefined4 *)(unaff_EBP + -0x54);
        uVar10 = *(undefined4 *)(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        goto LAB_007a41a5;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        iVar11 = *(int *)(unaff_EBP + 0x2c);
        FUN_00797b07();
        puVar13 = *(undefined1 **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x10);
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          FUN_0074d720(*puVar13);
          puVar13 = puVar13 + 1;
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x74);
        uVar10 = *(undefined4 *)(unaff_EBP + -0x70);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
      }
      else {
        uVar7 = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < uVar7) {
          FUN_00797b07();
          iVar11 = *(int *)(unaff_EBP + 0x14);
          puVar13 = *(undefined1 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar14 = uVar7 - iVar11; iVar14 != 0; iVar14 = iVar14 + -1) {
            FUN_0074d720(*puVar13);
            puVar13 = puVar13 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x68);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x30) = uVar4;
          FUN_0074d720(*(undefined4 *)(unaff_EBP + -0x30));
          FUN_00797b07();
          *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + 0xc);
          puVar13 = (undefined1 *)
                    ((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                     *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0x28)) - iVar11);
          *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            FUN_0074d720(*puVar13);
            puVar13 = puVar13 + 1;
          }
          uVar5 = *(undefined4 *)(unaff_EBP + -0x7c);
          uVar10 = *(undefined4 *)(unaff_EBP + -0x78);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        }
        else {
          FUN_0074d720(0x30);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x94) = uVar4;
          FUN_0074d720(*(undefined4 *)(unaff_EBP + -0x94));
          *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar11 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x2c); iVar11 != 0;
              iVar11 = iVar11 + -1) {
            FUN_0074d720(0x30);
          }
          iVar11 = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x4c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x48);
          FUN_00797b07();
          puVar13 = *(undefined1 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            FUN_0074d720(*puVar13);
            puVar13 = puVar13 + 1;
          }
          uVar5 = *(undefined4 *)(unaff_EBP + -100);
          uVar10 = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        }
      }
      goto LAB_007a41a5;
    }
LAB_007a42f4:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      uVar7 = *(uint *)(unaff_EBP + -0x3c);
      if (1 < uVar7) {
        FUN_00797b07();
        puVar13 = *(undefined1 **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        while (uVar7 = uVar7 - 1, uVar7 != 0) {
          puVar13 = puVar13 + 1;
          FUN_0074d720(*puVar13);
        }
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar10 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar10;
      }
      iVar11 = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        FUN_0074d720(*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar9 = *(undefined4 **)(unaff_EBP + 8);
      *puVar9 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar9[1] = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_00674910(1);
      FUN_00674910(1);
      FUN_00674910(1);
      FUN_00674910(1);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar9;
    }
    uVar7 = *(uint *)(unaff_EBP + -0x80);
  } while( true );
}


