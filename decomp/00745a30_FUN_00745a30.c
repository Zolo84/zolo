// FUN_00745a30 @ 745a30 size=42

int __fastcall FUN_00745a30(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 0;
  do {
    cVar1 = (char)uVar3;
    uVar3 = uVar3 + 8;
    iVar2 = iVar2 + ((uint)*(byte *)(iVar4 + param_1) << (0x18U - cVar1 & 0x1f));
    iVar4 = iVar4 + 1;
  } while (uVar3 < 0x20);
  return iVar2;
}


