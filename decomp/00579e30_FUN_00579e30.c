// FUN_00579e30 @ 579e30 size=131

int __fastcall FUN_00579e30(int param_1)

{
  short sVar1;
  DWORD DVar2;
  
  if (((*(char *)(param_1 + 4) == '\0') && (sVar1 = *(short *)(param_1 + 0x328), sVar1 != 0)) &&
     (sVar1 <= *(short *)(param_1 + 6))) {
    if (*(char *)(param_1 + 5) == '\0') {
      sVar1 = *(short *)(param_1 + 0x328);
      DVar2 = timeGetTime();
      if (DVar2 - *(int *)(param_1 + 0x32c) < (uint)(*(short *)(param_1 + 8 + sVar1 * 2) * 1000)) {
        return (int)sVar1;
      }
    }
    else if ((uint)(*(int *)(param_1 + 0x330) - *(int *)(param_1 + 0x32c)) <
             (uint)(*(short *)(param_1 + 8 + sVar1 * 2) * 1000)) {
      return (int)sVar1;
    }
  }
  return 0;
}


