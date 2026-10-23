// FUN_0042e140 @ 42e140 size=85

int __fastcall FUN_0042e140(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)DAT_00d61388._2_1_;
  return (((((int)param_1[1] +
            (((int)param_1[2] + ((int)*(short *)(param_1 + 4) - (int)DAT_00d6138c) * 0xc) - iVar1) *
            0x1e) - (int)(char)((uint)DAT_00d61388 >> 8)) * 0x18 - (int)(char)DAT_00d61388) +
         (int)*param_1) * *(int *)(DAT_00893530 + 4);
}


