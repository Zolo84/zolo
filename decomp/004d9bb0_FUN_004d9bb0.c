// FUN_004d9bb0 @ 4d9bb0 size=840

void FUN_004d9bb0(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piStack00000004;
  int *piStack00000008;
  int *piStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int *in_stack_0000cc74;
  int in_stack_0000cc78;
  
  FUN_007a69e0();
  iVar5 = (int)(in_stack_0000cc78 + (in_stack_0000cc78 >> 0x1f & 0x1fU)) >> 5;
  if (iVar5 < 2) {
    iVar5 = 0;
    do {
      FUN_004eef70();
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
  }
  else {
    iVar8 = 0;
    if (0 < in_stack_0000cc78) {
      piStack00000008 = (int *)&stack0x00000024;
      do {
        iStack0000001c = 0;
        piStack00000010 = piStack00000008;
        do {
          iStack00000018 = 0x1267;
          if (0 < iVar5) {
            piStack00000004 = (int *)&stack0x00002024;
            iStack00000014 = iVar5;
            do {
              FUN_004eef70();
              piVar3 = (int *)&stack0x00001024;
              iVar4 = iVar5;
              do {
                iVar6 = *piVar3;
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + -1;
                *(undefined4 *)(&stack0x00003024 + iVar6 * 4) = 0;
              } while (iVar4 != 0);
              piVar3 = (int *)&stack0x00001024;
              iVar4 = iVar5;
              do {
                iVar6 = *piVar3;
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + -1;
                *(int *)(&stack0x00003024 + iVar6 * 4) = *(int *)(&stack0x00003024 + iVar6 * 4) + 1;
              } while (iVar4 != 0);
              iVar6 = -1;
              piVar3 = (int *)&stack0x00001024;
              iVar4 = iVar5;
              do {
                if ((*piVar3 < 0) || (DAT_00877690 + 3 < *piVar3)) {
                  FUN_007a6966();
                }
                iVar1 = *(int *)(&stack0x00003024 + *piVar3 * 4);
                if (iVar6 < iVar1) {
                  *piStack00000004 = *piVar3;
                  iVar6 = iVar1;
                }
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              piStack00000004 = piStack00000004 + 1;
              iStack00000014 = iStack00000014 + -1;
            } while (iStack00000014 != 0);
            piVar3 = (int *)&stack0x00002024;
            iVar4 = iVar5;
            do {
              iVar6 = *piVar3;
              piVar3 = piVar3 + 1;
              iVar4 = iVar4 + -1;
              *(undefined4 *)(&stack0x00003024 + iVar6 * 4) = 0;
            } while (iVar4 != 0);
            piVar3 = (int *)&stack0x00002024;
            iVar4 = iVar5;
            do {
              iVar6 = *piVar3;
              piVar3 = piVar3 + 1;
              iVar4 = iVar4 + -1;
              *(int *)(&stack0x00003024 + iVar6 * 4) = *(int *)(&stack0x00003024 + iVar6 * 4) + 1;
            } while (iVar4 != 0);
          }
          iVar4 = -1;
          if (0 < iVar5) {
            piVar3 = (int *)&stack0x00002024;
            iVar6 = iVar5;
            do {
              if (iVar4 < *(int *)(&stack0x00003024 + *piVar3 * 4)) {
                iVar4 = *(int *)(&stack0x00003024 + *piVar3 * 4);
                iStack00000018 = *piVar3;
              }
              piVar3 = piVar3 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iStack0000001c = iStack0000001c + iVar5;
          *piStack00000010 = iStack00000018;
          piStack00000010 = piStack00000010 + 1;
        } while (iStack0000001c < in_stack_0000cc78);
        iVar8 = iVar8 + iVar5;
        piStack00000008 = piStack00000008 + 0x20;
      } while (iVar8 < in_stack_0000cc78);
    }
  }
  iVar5 = 0;
  do {
    if (0x1f < iVar5) break;
    bVar2 = true;
    iVar8 = -0x20;
    piVar3 = (int *)&stack0x00000024;
    do {
      iVar6 = 0;
      iVar4 = (int)in_stack_0000cc74 - (int)&stack0x00000024;
      do {
        iVar1 = *piVar3;
        *(int *)(iVar4 + (int)piVar3) = iVar1;
        if (iVar1 == 0) {
          if ((iVar6 < 1) || (piVar3[-1] == 0)) {
            if ((iVar8 < -0x1f) || (*(int *)(&stack0x00000024 + (iVar8 + iVar6) * 4) == 0)) {
              if ((iVar6 < 0x1f) && (piVar3[1] != 0)) {
                *(int *)(iVar4 + (int)piVar3) = piVar3[1];
              }
              else if ((iVar8 < 0x3c0) && (piVar3[0x20] != 0)) {
                *(int *)(iVar4 + (int)piVar3) = piVar3[0x20];
              }
              else {
                bVar2 = false;
              }
            }
            else {
              *(int *)(iVar4 + (int)piVar3) = *(int *)(&stack0x00000024 + (iVar8 + iVar6) * 4);
            }
          }
          else {
            *(int *)(iVar4 + (int)piVar3) = piVar3[-1];
          }
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar6 < 0x20);
      iVar8 = iVar8 + 0x20;
    } while (iVar8 < 0x3e0);
    if (!bVar2) {
      piVar3 = in_stack_0000cc74;
      piVar7 = (int *)&stack0x00000024;
      for (iVar8 = 0x400; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar7 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    iVar5 = iVar5 + 1;
  } while (!bVar2);
  iVar5 = 0x400;
  do {
    if (*in_stack_0000cc74 == DAT_00877690) {
      *in_stack_0000cc74 = 0;
    }
    if ((*in_stack_0000cc74 < 0) || (DAT_00877690 + 3 <= *in_stack_0000cc74)) {
      FUN_007a6966();
      *in_stack_0000cc74 = 0;
    }
    in_stack_0000cc74 = in_stack_0000cc74 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


