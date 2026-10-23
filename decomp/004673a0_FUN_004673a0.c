// FUN_004673a0 @ 4673a0 size=139

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_004673a0(int param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_2;
  if (param_2 != 1.96182e-43) {
    iVar2 = FUN_0044c3d0(param_2,param_4);
    iVar3 = FUN_0044c620(param_2);
    param_2 = *(float *)(iVar3 + 0x14) + *(float *)(iVar2 + 0x14);
    if (_DAT_007e5440 <= param_2) goto LAB_004673e5;
  }
  param_2 = 0.001;
LAB_004673e5:
  if (param_3 != 0) {
    iVar2 = FUN_0044c5b0(param_3,param_5);
    iVar3 = FUN_0044c630(param_3);
    param_2 = *(float *)(iVar3 + 0x14) + *(float *)(iVar2 + 0x14) + param_2;
  }
  return (float10)*(float *)(param_1 + 0x40a2 + iVar1 * 4) * (float10)param_2 *
         (float10)_DAT_007e543c;
}


