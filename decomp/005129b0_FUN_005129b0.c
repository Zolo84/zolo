// FUN_005129b0 @ 5129b0 size=24

int __fastcall FUN_005129b0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((0xb < iVar1) && ((iVar1 < 0x10 || (iVar1 == 0x15)))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


