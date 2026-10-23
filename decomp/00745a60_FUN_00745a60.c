// FUN_00745a60 @ 745a60 size=52

void __thiscall FUN_00745a60(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  do {
    bVar2 = (byte)uVar1;
    uVar1 = uVar1 + 8;
    *(char *)(iVar3 + param_1) =
         (char)((0xff000000U >> (bVar2 & 0x1f) & param_2) >> (0x18 - bVar2 & 0x1f));
    iVar3 = iVar3 + 1;
  } while (uVar1 < 0x20);
  return;
}


