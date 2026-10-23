// FUN_004327f0 @ 4327f0 size=91

uint FUN_004327f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  if (((*(int *)(param_2 + 0x12) != *(int *)(param_4 + 0x12)) && (*(int *)(param_4 + 0x254) != 8))
     && (uVar1 = *(int *)(param_4 + 0x254) - 9, uVar1 != 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_004318d0(param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = FUN_004a3020(param_4,0);
  return uVar1;
}


