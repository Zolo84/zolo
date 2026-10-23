// FUN_004f2560 @ 4f2560 size=135

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f2560(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (_DAT_007e3374 - *(float *)(param_1 + 0x46)) *
          (_DAT_007e3374 - *(float *)(param_1 + 0x4e)) * (float)*(int *)(param_1 + 0x24);
  if (_DAT_007e8418 < *(float *)(param_1 + 0x42)) {
    fVar3 = fVar3 / *(float *)(param_1 + 0x42);
  }
  FUN_007a8a7e((double)fVar3);
  __ftol();
  uVar2 = *(undefined4 *)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
  FUN_0042dc20();
  *param_2 = uVar2;
  *(undefined2 *)(param_2 + 1) = uVar1;
  return;
}


