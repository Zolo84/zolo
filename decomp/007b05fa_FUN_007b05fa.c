// FUN_007b05fa @ 7b05fa size=69

void FUN_007b05fa(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_00dc5244 = DAT_00dc5244 + 1, DAT_00dc5244 == 0x20)) {
    FUN_007b04e1(0x10);
  }
  return;
}


