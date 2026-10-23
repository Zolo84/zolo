// FUN_004249a0 @ 4249a0 size=776

void FUN_004249a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int in_stack_00001440;
  int *in_stack_00001444;
  int in_stack_00001448;
  int in_stack_0000144c;
  
  FUN_007a69e0();
  if (0 < in_stack_00001448) {
    iVar10 = -(int)in_stack_00001444;
    iVar12 = in_stack_00001448;
    do {
      iVar3 = *in_stack_00001444;
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      *(int *)(&stack0x00000420 + iVar10 + (int)in_stack_00001444) = iVar3 << 8;
      in_stack_00001444 = in_stack_00001444 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  do {
    iVar3 = 1;
    iVar12 = 0;
    param_3 = 0;
    iVar10 = in_stack_00001448;
    if (0 < in_stack_00001448) {
      piVar8 = &param_3;
      iVar15 = 0;
      puVar13 = (undefined4 *)&stack0x00000c30;
      for (iVar7 = in_stack_00001448; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = 0xffffffff;
        puVar13 = puVar13 + 1;
      }
      do {
        iVar12 = iVar12 + 1;
        piVar8 = piVar8 + 1;
        iVar11 = *(int *)(&stack0x00000420 + iVar15);
        *piVar8 = iVar3;
        iVar4 = (&param_3)[iVar12 >> 1];
        iVar7 = *(int *)(&stack0x0000041c + iVar4 * 4);
        iVar5 = iVar12;
        iVar2 = iVar12 >> 1;
        while (iVar11 < iVar7) {
          (&param_3)[iVar5] = iVar4;
          iVar4 = (&param_3)[iVar2 >> 1];
          iVar5 = iVar2;
          iVar2 = iVar2 >> 1;
          iVar7 = *(int *)(&stack0x0000041c + iVar4 * 4);
        }
        (&param_3)[iVar5] = iVar3;
        iVar3 = iVar3 + 1;
        iVar15 = iVar15 + 4;
      } while (iVar3 <= in_stack_00001448);
      if (0x103 < iVar12) {
        FUN_0041b650();
      }
      if (1 < iVar12) {
        piVar8 = &param_3 + iVar12;
        do {
          iVar7 = param_4;
          iVar11 = iVar12 + -1;
          iVar3 = *piVar8;
          param_4 = iVar3;
          piVar8 = piVar8 + -1;
          iVar15 = 1;
          while (iVar4 = iVar15 * 2, iVar4 <= iVar11) {
            if ((iVar4 < iVar11) &&
               (*(int *)(&stack0x0000041c + (&param_4)[iVar15 * 2] * 4) <
                *(int *)(&stack0x0000041c + (&param_3)[iVar15 * 2] * 4))) {
              iVar4 = iVar4 + 1;
            }
            if (*(int *)(&stack0x0000041c + iVar3 * 4) <
                *(int *)(&stack0x0000041c + (&param_3)[iVar4] * 4)) break;
            (&param_3)[iVar15] = (&param_3)[iVar4];
            iVar15 = iVar4;
          }
          (&param_3)[iVar15] = iVar3;
          iVar15 = param_4;
          iVar3 = *piVar8;
          param_4 = iVar3;
          iVar4 = 1;
          while (iVar5 = iVar4 * 2, iVar5 <= iVar12 + -2) {
            if ((iVar5 < iVar12 + -2) &&
               (*(int *)(&stack0x0000041c + (&param_4)[iVar4 * 2] * 4) <
                *(int *)(&stack0x0000041c + (&param_3)[iVar4 * 2] * 4))) {
              iVar5 = iVar5 + 1;
            }
            if (*(int *)(&stack0x0000041c + iVar3 * 4) <
                *(int *)(&stack0x0000041c + (&param_3)[iVar5] * 4)) break;
            (&param_3)[iVar4] = (&param_3)[iVar5];
            iVar4 = iVar5;
          }
          (&param_3)[iVar4] = iVar3;
          iVar10 = iVar10 + 1;
          uVar6 = *(uint *)(&stack0x0000041c + iVar15 * 4);
          *(int *)(&stack0x00000c2c + iVar15 * 4) = iVar10;
          *(int *)(&stack0x00000c2c + iVar7 * 4) = iVar10;
          uVar9 = uVar6 & 0xff;
          uVar14 = *(uint *)(&stack0x0000041c + iVar7 * 4) & 0xff;
          if (uVar9 < uVar14) {
            uVar9 = uVar14;
          }
          uVar6 = (*(uint *)(&stack0x0000041c + iVar7 * 4) & 0xffffff00) + (uVar6 & 0xffffff00) |
                  uVar9 + 1;
          *piVar8 = iVar10;
          *(uint *)(&stack0x0000041c + iVar10 * 4) = uVar6;
          iVar3 = (&param_3)[iVar11 >> 1];
          *(undefined4 *)(&stack0x00000c2c + iVar10 * 4) = 0xffffffff;
          iVar12 = *(int *)(&stack0x0000041c + iVar3 * 4);
          iVar7 = iVar11;
          iVar15 = iVar11 >> 1;
          while ((int)uVar6 < iVar12) {
            (&param_3)[iVar7] = iVar3;
            iVar3 = (&param_3)[iVar15 >> 1];
            iVar7 = iVar15;
            iVar15 = iVar15 >> 1;
            iVar12 = *(int *)(&stack0x0000041c + iVar3 * 4);
          }
          (&param_3)[iVar7] = iVar10;
          iVar12 = iVar11;
        } while (1 < iVar11);
      }
    }
    if (0x203 < iVar10) {
      FUN_0041b650();
    }
    iVar10 = 1;
    bVar1 = false;
    if (in_stack_00001448 < 1) {
      return;
    }
    piVar8 = (int *)&stack0x00000c30;
    do {
      iVar3 = 0;
      for (iVar12 = *piVar8; -1 < iVar12; iVar12 = *(int *)(&stack0x00000c2c + iVar12 * 4)) {
        iVar3 = iVar3 + 1;
      }
      *(char *)(iVar10 + -1 + in_stack_00001440) = (char)iVar3;
      if (in_stack_0000144c < iVar3) {
        bVar1 = true;
      }
      iVar10 = iVar10 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar10 <= in_stack_00001448);
    if (!bVar1) {
      return;
    }
    if (1 < in_stack_00001448) {
      iVar10 = in_stack_00001448 + -1;
      piVar8 = (int *)&stack0x00000420;
      do {
        *piVar8 = ((*piVar8 >> 8) / 2 + 1) * 0x100;
        iVar10 = iVar10 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar10 != 0);
    }
  } while( true );
}


