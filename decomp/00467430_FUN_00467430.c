// FUN_00467430 @ 467430 size=42

float10 FUN_00467430(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0044c5b0(param_1,param_2);
  iVar2 = FUN_0044c630(param_1);
  return (float10)*(float *)(iVar2 + 0x14) + (float10)*(float *)(iVar1 + 0x14);
}


