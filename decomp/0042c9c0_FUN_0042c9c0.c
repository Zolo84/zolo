// FUN_0042c9c0 @ 42c9c0 size=225

uint FUN_0042c9c0(undefined4 param_1)

{
  undefined4 *puVar1;
  MMRESULT MVar2;
  HANDLE hThread;
  UINT UVar3;
  undefined4 *puVar4;
  timecaps_tag local_8;
  
  puVar1 = operator_new(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x16) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_LAB_007e3db8;
    puVar1[10] = param_1;
    puVar1[2] = 0;
    puVar1[1] = 0x42;
    *(undefined1 *)((int)puVar1 + 0x1e) = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar4 = puVar1;
  }
  DAT_00893530 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    MVar2 = timeGetDevCaps(&local_8,8);
    if (MVar2 == 0) {
      UVar3 = local_8.wPeriodMin;
      if (local_8.wPeriodMin < 2) {
        UVar3 = 1;
      }
      if ((UVar3 < local_8.wPeriodMax) &&
         (local_8.wPeriodMax = local_8.wPeriodMin, local_8.wPeriodMin < 2)) {
        local_8.wPeriodMax = 1;
      }
      timeBeginPeriod(local_8.wPeriodMax);
      hThread = (HANDLE)timeSetEvent(puVar4[10],0,&LAB_0042cb30,0,0);
      *(HANDLE *)((int)puVar4 + 0x1a) = hThread;
      SetThreadPriority(hThread,1);
      puVar4[2] = 1;
      puVar4[8] = 1;
      puVar4[9] = 1;
      return CONCAT31((int3)((uint)*(int *)((int)puVar4 + 0x1a) >> 8),
                      *(int *)((int)puVar4 + 0x1a) != 0);
    }
    return MVar2 & 0xffffff00;
  }
  return (uint)puVar1 & 0xffffff00;
}


