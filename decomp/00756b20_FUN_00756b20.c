// FUN_00756b20 @ 756b20 size=77

void __thiscall FUN_00756b20(int param_1,int param_2,uint param_3)

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
         (char)((0xff000000U >> (bVar2 & 0x1f) & param_3) >> (0x18 - bVar2 & 0x1f));
    iVar3 = iVar3 + 1;
  } while (uVar1 < 0x20);
  while (param_3 != 0) {
    *(undefined1 *)(param_3 + 3 + param_1) = *(undefined1 *)(param_2 + (param_3 - 1));
    param_3 = param_3 - 1;
  }
  return;
}


