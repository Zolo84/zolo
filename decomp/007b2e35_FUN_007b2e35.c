// FUN_007b2e35 @ 7b2e35 size=82

uint FUN_007b2e35(ushort param_1,ushort param_2)

{
  int iVar1;
  uint local_8;
  
  if (param_1 == 0xffff) {
    return 0;
  }
  if (param_1 < 0x100) {
    local_8 = (uint)*(ushort *)(PTR_DAT_0087cdd4 + (uint)param_1 * 2);
  }
  else {
    iVar1 = FUN_007b7a87(1,&param_1,1,&local_8,0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return local_8 & 0xffff & (uint)param_2;
}


