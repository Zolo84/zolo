// FUN_007545d0 @ 7545d0 size=54

int __thiscall FUN_007545d0(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  do {
    bVar1 = (byte)uVar2;
    uVar2 = uVar2 + 8;
    *(char *)(iVar3 + param_1) =
         (char)((0xff000000U >> (bVar1 & 0x1f) & param_2) >> (0x18 - bVar1 & 0x1f));
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x20);
  return param_1;
}


