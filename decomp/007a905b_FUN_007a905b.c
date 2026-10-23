// FUN_007a905b @ 7a905b size=46

uint FUN_007a905b(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_0087cfdc) {
    uVar1 = FUN_007a81f0(param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_0087cdd0 + param_1 * 2) & 0x107;
}


