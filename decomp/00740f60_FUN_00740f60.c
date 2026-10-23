// FUN_00740f60 @ 740f60 size=85

void FUN_00740f60(char *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  
  cVar4 = '\0';
  uVar2 = 0;
  piVar3 = &DAT_00874228;
  do {
    iVar1 = *piVar3;
    uVar5 = uVar2 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    piVar3 = piVar3 + 1;
    (&DAT_00d4bcec)[uVar2] = param_1[iVar1] - (&DAT_008742a8)[uVar5 * 4];
    cVar4 = cVar4 + param_1[iVar1];
    uVar2 = uVar2 + 1;
  } while ((int)piVar3 < 0x8742a8);
  if (cVar4 != *param_1) {
    FUN_007a64d3(0);
  }
  return;
}


