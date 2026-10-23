// FUN_0044ad90 @ 44ad90 size=134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044ad90(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 * _DAT_007e34c0;
  *(float *)(param_1 + 0x398c) = param_2 + param_2 + *(float *)(param_1 + 0x398c);
  *(float *)(param_1 + 0x3994) = param_2 + *(float *)(param_1 + 0x3994);
  *(float *)(param_1 + 0x3990) = fVar1 + *(float *)(param_1 + 0x3990);
  FUN_0049eb10(-param_2);
  FUN_0049eb40(-(param_2 + param_2));
  FUN_0049eb70(-fVar1);
  return;
}


