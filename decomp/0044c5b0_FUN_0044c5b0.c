// FUN_0044c5b0 @ 44c5b0 size=101

void __thiscall FUN_0044c5b0(int param_1,int param_2,short param_3)

{
  short *psVar1;
  char cVar2;
  
  if (param_3 == -1) {
    param_3 = -1;
    for (psVar1 = *(short **)(param_1 + 0x55c4 + param_2 * 0x12); psVar1 != (short *)0x0;
        psVar1 = *(short **)(psVar1 + 3)) {
      if ((param_3 < *psVar1) &&
         (cVar2 = (**(code **)(*(int *)(param_1 + param_2 * 0x12 + 0x6970) + 0x24))(*psVar1),
         cVar2 == '\0')) {
        param_3 = *psVar1;
      }
    }
  }
  FUN_00789ce0(param_2,(int)param_3);
  return;
}


