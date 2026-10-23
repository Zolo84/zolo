// FUN_006a3b90 @ 6a3b90 size=146

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_006a3b90(int *param_1,int *param_2)

{
  uint uVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x214))();
  (**(code **)(*param_1 + 0x21c))();
  if (_DAT_007e46cc < *(float *)((int)param_1 + 0x96)) {
    fVar2 = (float10)(**(code **)(*param_2 + 0xa4))();
    if (((float10)*(float *)((int)param_1 + 0x92) * (float10)_DAT_007e3650 <
         fVar2 + (float10)*(float *)((int)param_1 + 0x96)) &&
       (*(float *)((int)param_1 + 0x92) < *(float *)((int)param_1 + 0x96))) {
      (**(code **)(*param_1 + 0x18c))(param_2);
      uVar1 = (**(code **)(*param_1 + 0x240))();
      return uVar1 & 0xffffff00;
    }
  }
  uVar1 = FUN_006a2de0(param_2);
  return uVar1;
}


