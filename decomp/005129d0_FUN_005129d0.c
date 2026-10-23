// FUN_005129d0 @ 5129d0 size=24

int __fastcall FUN_005129d0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((9 < iVar1) && ((iVar1 < 0x12 || (iVar1 == 0x15)))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


