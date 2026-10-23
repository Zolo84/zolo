// FUN_0041ba20 @ 41ba20 size=899

undefined4 FUN_0041ba20(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  piVar1 = *(int **)(param_1 + 0x20);
  bVar3 = false;
  bVar5 = false;
LAB_0041ba3d:
  do {
    do {
      if (piVar1[2] == 1) {
        bVar4 = 0;
        while ((*(int *)(*piVar1 + 0x14) != 0 && (piVar1[0x14] < piVar1[0x13]))) {
          bVar4 = 1;
          **(undefined1 **)(*piVar1 + 0x10) = *(undefined1 *)(piVar1[0xb] + piVar1[0x14]);
          piVar1[0x14] = piVar1[0x14] + 1;
          *(int *)(*piVar1 + 0x14) = *(int *)(*piVar1 + 0x14) + -1;
          *(int *)(*piVar1 + 0x10) = *(int *)(*piVar1 + 0x10) + 1;
          *(int *)(*piVar1 + 0x18) = *(int *)(*piVar1 + 0x18) + 1;
          if (*(int *)(*piVar1 + 0x18) == 0) {
            piVar8 = (int *)(*piVar1 + 0x1c);
            *piVar8 = *piVar8 + 1;
          }
        }
        bVar5 = (bool)(bVar5 | bVar4);
        if ((piVar1[0x14] < piVar1[0x13]) ||
           (((piVar1[1] == 4 && (piVar1[3] == 0)) &&
            ((0xff < (uint)piVar1[0xd] || (piVar1[0xe] < 1)))))) goto LAB_0041bd7f;
        piVar1[0x11] = 0;
        piVar1[0x13] = 0;
        piVar1[0x14] = 0;
        piVar1[0x98] = -1;
        piVar8 = piVar1 + 0x16;
        for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        piVar1[0x9b] = piVar1[0x9b] + 1;
        piVar1[2] = 2;
        if (((piVar1[1] == 3) && (piVar1[3] == 0)) &&
           ((0xff < (uint)piVar1[0xd] || (piVar1[0xe] < 1)))) goto LAB_0041bd7f;
      }
    } while (piVar1[2] != 2);
    bVar4 = 0;
    if (piVar1[1] == 2) {
      while ((piVar1[0x11] < piVar1[0x12] && (((undefined4 *)*piVar1)[1] != 0))) {
        bVar4 = 1;
        uVar7 = (uint)**(byte **)*piVar1;
        uVar2 = piVar1[0xd];
        if (uVar7 == uVar2) {
LAB_0041bbc4:
          if (piVar1[0xe] == 0xff) {
LAB_0041bbd4:
            if (uVar2 < 0x100) {
              FUN_0041bdb0(piVar1);
            }
            piVar1[0xd] = uVar7;
            piVar1[0xe] = 1;
          }
          else {
            piVar1[0xe] = piVar1[0xe] + 1;
          }
        }
        else {
          if (piVar1[0xe] != 1) {
            if (uVar7 == uVar2) goto LAB_0041bbc4;
            goto LAB_0041bbd4;
          }
          piVar1[0x98] = *(uint *)(&DAT_00839700 + ((uint)piVar1[0x98] >> 0x18 ^ uVar2 & 0xff) * 4)
                         ^ piVar1[0x98] << 8;
          *(undefined1 *)(uVar2 + 0x58 + (int)piVar1) = 1;
          *(char *)(piVar1[9] + piVar1[0x11]) = (char)uVar2;
          piVar1[0xd] = uVar7;
          piVar1[0x11] = piVar1[0x11] + 1;
        }
        *(int *)*piVar1 = *(int *)*piVar1 + 1;
        *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + -1;
        *(int *)(*piVar1 + 8) = *(int *)(*piVar1 + 8) + 1;
        if (*(int *)(*piVar1 + 8) == 0) {
          piVar8 = (int *)(*piVar1 + 0xc);
          *piVar8 = *piVar8 + 1;
        }
      }
    }
    else {
      while (((piVar1[0x11] < piVar1[0x12] && (((undefined4 *)*piVar1)[1] != 0)) && (piVar1[3] != 0)
             )) {
        bVar4 = 1;
        uVar7 = (uint)**(byte **)*piVar1;
        uVar2 = piVar1[0xd];
        if (uVar7 == uVar2) {
LAB_0041bca8:
          if (piVar1[0xe] == 0xff) {
LAB_0041bcb8:
            if (uVar2 < 0x100) {
              FUN_0041bdb0(piVar1);
            }
            piVar1[0xd] = uVar7;
            piVar1[0xe] = 1;
          }
          else {
            piVar1[0xe] = piVar1[0xe] + 1;
          }
        }
        else {
          if (piVar1[0xe] != 1) {
            if (uVar7 == uVar2) goto LAB_0041bca8;
            goto LAB_0041bcb8;
          }
          piVar1[0x98] = *(uint *)(&DAT_00839700 + ((uint)piVar1[0x98] >> 0x18 ^ uVar2 & 0xff) * 4)
                         ^ piVar1[0x98] << 8;
          *(undefined1 *)(uVar2 + 0x58 + (int)piVar1) = 1;
          *(char *)(piVar1[9] + piVar1[0x11]) = (char)uVar2;
          piVar1[0xd] = uVar7;
          piVar1[0x11] = piVar1[0x11] + 1;
        }
        *(int *)*piVar1 = *(int *)*piVar1 + 1;
        *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + -1;
        *(int *)(*piVar1 + 8) = *(int *)(*piVar1 + 8) + 1;
        if (*(int *)(*piVar1 + 8) == 0) {
          piVar8 = (int *)(*piVar1 + 0xc);
          *piVar8 = *piVar8 + 1;
        }
        piVar1[3] = piVar1[3] + -1;
      }
    }
    bVar3 = (bool)(bVar3 | bVar4);
    if ((piVar1[1] == 2) || (piVar1[3] != 0)) break;
    if ((uint)piVar1[0xd] < 0x100) {
      FUN_0041bdb0(piVar1);
    }
    piVar1[0xd] = 0x100;
    piVar1[0xe] = 0;
    FUN_0041e2a0(piVar1,piVar1[1] == 4);
    piVar1[2] = 1;
  } while( true );
  if (piVar1[0x11] < piVar1[0x12]) {
    if (*(int *)(*piVar1 + 4) == 0) {
LAB_0041bd7f:
      if ((!bVar3) && (!bVar5)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_0041e2a0(piVar1,0);
    piVar1[2] = 1;
  }
  goto LAB_0041ba3d;
}


