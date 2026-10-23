// FUN_004260e0 @ 4260e0 size=37

undefined8 __fastcall FUN_004260e0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *(int *)(param_1 + 0xc) = (int)uVar1 - *(int *)(param_1 + 4);
  return CONCAT44(param_2,*(undefined4 *)(param_1 + 0xc));
}


