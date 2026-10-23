// FUN_007accc5 @ 7accc5 size=123

void FUN_007accc5(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 *param_8,undefined4 param_9,
                 int param_10)

{
  int iVar1;
  
  if (param_7 != 0) {
    FUN_007ace85(param_1,param_2,param_6,param_7);
  }
  if (param_10 == 0) {
    param_10 = param_2;
  }
  FUN_007a5f5c(param_10,param_1);
  FUN_007acc11(param_2,param_4,param_5,*param_8);
  *(int *)(param_2 + 8) = param_8[1] + 1;
  iVar1 = FUN_007acd40(param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,0x100)
  ;
  if (iVar1 != 0) {
    FUN_007a5f13(iVar1,param_2);
  }
  return;
}


