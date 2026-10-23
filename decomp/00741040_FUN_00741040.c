// FUN_00741040 @ 741040 size=140

void FUN_00741040(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  
  pcVar2 = _malloc(0x200);
  uVar3 = FUN_007a6615(param_1,&DAT_0082eeb4);
  FUN_007a67c4(pcVar2,1,0x200,uVar3);
  FUN_007a6429(uVar3);
  cVar6 = '\0';
  uVar4 = 0;
  piVar5 = &DAT_00874228;
  do {
    iVar1 = *piVar5;
    uVar7 = uVar4 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    piVar5 = piVar5 + 1;
    (&DAT_00d4bcec)[uVar4] = pcVar2[iVar1] - (&DAT_008742a8)[uVar7 * 4];
    cVar6 = cVar6 + pcVar2[iVar1];
    uVar4 = uVar4 + 1;
  } while ((int)piVar5 < 0x8742a8);
  if (cVar6 != *pcVar2) {
    FUN_007a64d3(0);
  }
  FUN_007a77fa(pcVar2);
  return;
}


