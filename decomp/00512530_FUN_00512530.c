// FUN_00512530 @ 512530 size=37

int __fastcall FUN_00512530(char *param_1)

{
  return (int)*param_1 +
         ((int)param_1[1] + ((int)param_1[2] + *(short *)(param_1 + 4) * 0xc) * 0x1e) * 0x18;
}


