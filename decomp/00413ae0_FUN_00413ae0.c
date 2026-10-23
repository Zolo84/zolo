// FUN_00413ae0 @ 413ae0 size=229

void __fastcall FUN_00413ae0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0x100;
  pbVar5 = (byte *)(param_1 + 0x106);
  do {
    uVar1 = FUN_00584270(pbVar5[-2],pbVar5[-1],*pbVar5);
    *(uint *)(pbVar5 + 0x3fe) = uVar1 * 0x10000 + (uVar1 & 0xffff);
    uVar1 = FUN_00584270(pbVar5[-2] >> 1,pbVar5[-1] >> 1,*pbVar5 >> 1);
    *(uint *)(pbVar5 + 0x7fe) = uVar1 * 0x10000 + (uVar1 & 0xffff);
    uVar2 = __ftol();
    uVar3 = __ftol(uVar2);
    uVar4 = __ftol(uVar3);
    uVar1 = FUN_00584270(uVar4,uVar3,uVar2);
    iVar6 = iVar6 + -1;
    *(uint *)(pbVar5 + 0xbfe) = uVar1 * 0x10000 + (uVar1 & 0xffff);
    pbVar5 = pbVar5 + 4;
  } while (iVar6 != 0);
  return;
}


