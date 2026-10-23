// FUN_004260b0 @ 4260b0 size=39

undefined8 __fastcall FUN_004260b0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 in_EAX;
  
  uVar1 = rdtsc();
  *(int *)(param_1 + 4) = (int)uVar1;
  *(int *)(param_1 + 8) = (int)((ulonglong)uVar1 >> 0x20);
  return CONCAT44(param_2,in_EAX);
}


