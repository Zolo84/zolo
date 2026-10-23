// FUN_00586fe0 @ 586fe0 size=26

float10 __thiscall FUN_00586fe0(int param_1,int param_2)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 4);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pfVar1 = (float *)pfVar1[2];
  }
  return (float10)*pfVar1;
}


