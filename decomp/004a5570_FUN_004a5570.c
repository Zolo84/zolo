// FUN_004a5570 @ 4a5570 size=184

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a5570(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (*(int *)(param_4 + 0x288) < 0x1c6) {
    return (float10)_DAT_007e3380;
  }
  for (puVar2 = *(undefined4 **)(*(int *)(param_4 + 0x1c2) + 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    cVar3 = (**(code **)(*(int *)*puVar2 + 0x2c))();
    if (cVar3 != '\0') {
      uVar4 = FUN_006ac760();
      cVar3 = FUN_0044b280(uVar4);
      if (cVar3 != '\0') {
        uVar4 = FUN_00525c20();
        FUN_006ac630(uVar4);
      }
    }
  }
  return (((float10)*(float *)(param_3 + 0x30) * (float10)*(float *)(param_2 + 0x18) +
          ((float10)*(float *)(param_3 + 0x20) * (float10)*(float *)(param_2 + 8) -
          ((float10)*(float *)(param_2 + 0x20) * (float10)*(float *)(param_3 + 8)) /
          (float10)*(float *)(iVar1 + 0x2ac))) -
         ((float10)*(float *)(param_2 + 0x24) * (float10)*(float *)(param_3 + 0x1c)) /
         (float10)*(float *)(iVar1 + 0x2ac)) * (float10)*(float *)(iVar1 + 0x2b0);
}


