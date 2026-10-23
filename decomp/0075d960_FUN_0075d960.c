// FUN_0075d960 @ 75d960 size=344

void FUN_0075d960(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_2;
  iVar5 = (int)param_2 % (DAT_00877690 + -1) + 1;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if (DAT_00877690 <= iVar5) {
    iVar5 = DAT_00877690 + -1;
  }
  param_2 = 0;
  cVar3 = *(char *)(DAT_00893530 + 0x16);
  do {
    cVar2 = FUN_004e8480();
    if ((((cVar2 == '\0') &&
         (iVar6 = iVar5 * 0x4b2 + DAT_00ab27b4, *(int *)(iVar5 * 0x4b2 + 0x254 + DAT_00ab27b4) != 9)
         ) && (*(char *)(iVar6 + 0x180) == '\0')) && (iVar6 = *(int *)(iVar6 + 0x250), iVar6 != 8))
    {
      if (iVar6 != 5) {
LAB_0075da2f:
        *(int *)(param_1 + 0x32) = iVar5;
        iVar6 = iVar5 * 0x4b2;
        *(undefined1 *)(iVar6 + 0x3e9 + DAT_00ab27b4) = 1;
        FUN_0049a100(iVar5);
        uVar4 = uVar1 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(param_1 + 0x36) = uVar4;
        *(int *)(param_1 + 0x2c) = (int)uVar1 % 5 + 1;
        cVar3 = FUN_004e8460();
        if (cVar3 == '\0') {
          *(undefined4 *)(iVar6 + 0x3ac + DAT_00ab27b4) = 2;
          return;
        }
        *(undefined4 *)(iVar6 + 0x3ac + DAT_00ab27b4) = 3;
        return;
      }
      cVar2 = FUN_004ea7d0();
      if (cVar2 == '\0') {
        if ((cVar3 < '\v') && ('\x02' < cVar3)) goto LAB_0075da2f;
      }
      else if ((cVar3 < '\x05') || ('\b' < cVar3)) goto LAB_0075da2f;
    }
    iVar5 = iVar5 + 1;
    if (DAT_00877690 <= iVar5) {
      iVar5 = 1;
    }
    param_2 = param_2 + 1;
    if (DAT_00877690 * 2 < (int)param_2) {
      return;
    }
  } while( true );
}


