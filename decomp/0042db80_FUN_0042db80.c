// FUN_0042db80 @ 42db80 size=148

int __thiscall FUN_0042db80(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + *param_1 +
          ((int)param_1[1] + ((int)param_1[2] + *(short *)(param_1 + 4) * 0xc) * 0x1e) * 0x18;
  *(short *)(param_1 + 4) = (short)(iVar1 / 0x21c0) - (short)(iVar1 / -0x79000000);
  iVar1 = iVar1 % 0x21c0;
  param_1[2] = (char)(iVar1 / 0x2d0) - (char)(iVar1 / -0x4c000000);
  iVar1 = iVar1 % 0x2d0;
  param_1[1] = ((char)(iVar1 / 0x18) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x2aaaaaab >> 0x3f);
  *param_1 = (char)(iVar1 % 0x18);
  return iVar1 / 0x18;
}


