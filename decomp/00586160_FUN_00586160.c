// FUN_00586160 @ 586160 size=49

void __fastcall FUN_00586160(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x3b30) = 0;
  iVar2 = param_1 + 0xc;
  do {
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x3b2c);
    FUN_005885b0(iVar1);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x2c;
  } while (iVar1 < 0x158);
  return;
}


