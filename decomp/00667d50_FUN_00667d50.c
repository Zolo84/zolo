// FUN_00667d50 @ 667d50 size=87

float10 __thiscall FUN_00667d50(int param_1,int *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x30))();
  return (float10)*(float *)(iVar1 + 0x24) * (float10)*(float *)(param_1 + 0x28) +
         (float10)*(float *)(iVar1 + 0x20) * (float10)*(float *)(param_1 + 0x24) +
         (float10)*(float *)(iVar1 + 0x34) * (float10)*(float *)(param_1 + 0x20) +
         (float10)*(float *)(iVar1 + 0x14) * (float10)*(float *)(param_1 + 0x1c) +
         (float10)*(float *)(iVar1 + 0x18) * (float10)*(float *)(param_1 + 0x18) +
         (float10)*(float *)(iVar1 + 0xc) * (float10)*(float *)(param_1 + 0x14) +
         (float10)*(float *)(iVar1 + 0x10) * (float10)*(float *)(param_1 + 0x10) +
         (float10)param_3 * (float10)*(float *)(param_1 + 8) +
         (float10)*(float *)(iVar1 + 8) * (float10)*(float *)(param_1 + 0xc);
}


