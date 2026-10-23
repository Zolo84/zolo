// FUN_006e99d0 @ 6e99d0 size=86

uint __thiscall FUN_006e99d0(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_00bd1bac + 8);
  if ((((int)((uVar1 - *(int *)(param_1 + 0x2e)) + -0x10) <= param_2[1]) &&
      (*(char *)(param_1 + 0x32) != '\0')) &&
     (uVar1 = (((int)uVar1 <= *(int *)(param_1 + 0x2e) + 0x300) - 1 & 0xffffff00) + 0x100,
     (int)uVar1 <= *param_2)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


