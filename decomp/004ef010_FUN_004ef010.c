// FUN_004ef010 @ 4ef010 size=244

int __thiscall FUN_004ef010(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar4 = 0;
  local_4 = 1000000;
  iVar3 = 0;
  do {
    FUN_004eef70(param_2 + -0xf,iVar4 + -0xf + param_3,*(int *)(param_1 + 0xb408) + iVar3,0x20);
    iVar3 = iVar3 + 0x80;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x1000);
  param_2 = param_4;
  iVar4 = 0;
  iVar3 = -0xf;
  do {
    iVar5 = -0xf;
    do {
      if (*(int *)(iVar4 + *(int *)(param_1 + 0xb408)) == DAT_00877690) {
        *(undefined4 *)(iVar4 + *(int *)(param_1 + 0xb408)) = 0;
      }
      iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0xb408));
      if ((((iVar1 != 0) && (iVar1 != param_4)) &&
          (iVar2 = *(int *)(param_5 + 0x254 + iVar1 * 0x4b2), iVar2 != 8)) &&
         ((iVar2 != 9 && (iVar2 = iVar3 * iVar3 + iVar5 * iVar5, iVar2 < local_4)))) {
        param_2 = iVar1;
        local_4 = iVar2;
      }
      iVar4 = iVar4 + 4;
      iVar1 = iVar5 + 0x10;
      iVar5 = iVar5 + 1;
    } while (iVar1 < 0x20);
    iVar5 = iVar3 + 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar5 < 0x20);
  return param_2;
}


