// FUN_0044c550 @ 44c550 size=94

void __thiscall FUN_0044c550(int param_1,int param_2,undefined4 param_3)

{
  short *psVar1;
  char cVar2;
  
  param_1 = param_1 + param_2 * 0x12;
  cVar2 = (**(code **)(*(int *)(param_1 + 0x55c0) + 0x24))(param_3);
  if (cVar2 == '\0') {
    for (psVar1 = *(short **)(param_1 + 0x55c4); psVar1 != (short *)0x0;
        psVar1 = *(short **)(psVar1 + 3)) {
      if (*psVar1 < (short)param_3) {
        FUN_0045af60(param_3,psVar1);
        return;
      }
    }
    FUN_0045af10(param_3);
  }
  return;
}


