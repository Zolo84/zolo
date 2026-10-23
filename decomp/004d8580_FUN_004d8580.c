// FUN_004d8580 @ 4d8580 size=87

uint FUN_004d8580(int param_1,int param_2)

{
  uint uVar1;
  
  if ((((-1 < param_1) && (param_1 < 0x7500)) && (-1 < param_2)) && (param_2 < 0x2d00)) {
    uVar1 = FUN_004dc9d0(param_1,param_2,DAT_00a98464);
    return uVar1 & ~-(uint)(*(char *)(DAT_00ab27b4 + 0x180 + uVar1 * 0x4b2) != '\0');
  }
  return 0;
}


