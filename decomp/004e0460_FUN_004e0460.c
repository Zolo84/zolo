// FUN_004e0460 @ 4e0460 size=292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0460(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  int iVar2;
  int local_8 [2];
  
  FUN_004e2220(local_8);
  iVar2 = 0;
  (**(code **)(*DAT_00a983f0 + 0x10))(0);
  if (DAT_00a98404 != (int *)0x0) {
    iVar1 = 0;
    switch(*(undefined1 *)(DAT_00893530 + 0x16)) {
    case 0:
    case 0xb:
      iVar1 = 0x14;
      break;
    case 1:
    case 10:
      iVar1 = 0xe;
      break;
    case 2:
    case 9:
      iVar1 = 8;
      break;
    case 3:
    case 8:
      iVar1 = 2;
      break;
    case 4:
    case 7:
      iVar1 = -4;
      break;
    case 5:
    case 6:
      iVar1 = -10;
    }
    (**(code **)(*DAT_00a98404 + 0x18))
              (iVar2 - (*(int *)(*(int *)((int)DAT_00a983f0 + 0x2a) + 4) / 0x18) *
                       (int)*(char *)(DAT_00893530 + 0x14),local_8[0] + -0x19 + iVar1);
    FUN_00415ed0(unaff_EDI,unaff_ESI,
                 *(int *)(*(int *)((int)DAT_00a983f0 + 0x2a) + 4) + -4 + unaff_EDI,
                 *(int *)(*(int *)((int)DAT_00a983f0 + 0x2a) + 8) + unaff_ESI);
    (**(code **)(*DAT_00a98404 + 0x10))(0);
  }
  FUN_004e24b0(DAT_00a98468,DAT_00a9846c,DAT_00a98464,&DAT_00a98430);
  _DAT_00847a00 = DAT_00a98468;
  _DAT_00847a04 = DAT_00a9846c;
  return;
}


