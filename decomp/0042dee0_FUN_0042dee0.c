// FUN_0042dee0 @ 42dee0 size=176

char * __thiscall FUN_0042dee0(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (((((((int)*(short *)(param_1 + 4) - (int)*(short *)(param_2 + 4)) * 0xc - (int)param_2[2]
              ) + (int)param_1[2]) * 0x1e - (int)param_2[1]) + (int)param_1[1]) * 0x18 -
          (int)*param_2) + (int)*param_1;
  *(short *)(param_1 + 4) = (short)(iVar1 / 0x21c0) - (short)(iVar1 / -0x79000000);
  iVar1 = iVar1 % 0x21c0;
  param_1[2] = (char)(iVar1 / 0x2d0) - (char)(iVar1 / -0x4c000000);
  iVar1 = iVar1 % 0x2d0;
  param_1[1] = ((char)(iVar1 / 0x18) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x2aaaaaab >> 0x3f);
  *param_1 = (char)(iVar1 % 0x18);
  return param_1;
}


