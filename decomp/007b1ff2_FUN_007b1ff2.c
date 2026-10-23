// FUN_007b1ff2 @ 7b1ff2 size=96

float10 FUN_007b1ff2(undefined4 param_1,double param_2,double param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_008801b0 == 0) {
    fVar2 = (float10)FUN_007b2659(1,param_1,param_2,param_3,param_2 + param_3,param_4);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_007aadca();
  *puVar1 = 0x21;
  FUN_007b2932();
  return (float10)(param_2 + param_3);
}


