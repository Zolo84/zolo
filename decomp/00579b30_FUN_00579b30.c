// FUN_00579b30 @ 579b30 size=198

void __thiscall FUN_00579b30(int param_1,uint param_2)

{
  MCIERROR MVar1;
  DWORD DVar2;
  int iVar3;
  short sVar4;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (*(char *)(param_1 + 4) == '\0') {
    sVar4 = (short)param_2;
    if ((sVar4 != 0) && (sVar4 <= *(short *)(param_1 + 6))) {
      iVar3 = (int)sVar4;
      local_c = DAT_00dc4a58 & 0xffff;
      local_8 = param_2 & 0xff;
      local_4 = ((uint)CONCAT21(*(undefined2 *)(param_1 + 0x260 + iVar3 * 2),
                                *(undefined1 *)(param_1 + 0x198 + iVar3 * 2)) << 8 |
                (uint)*(ushort *)(param_1 + 0xd0 + iVar3 * 2)) << 8 | local_8;
      MVar1 = mciSendCommandA(DAT_00bd00fc,0x806,0xd,(DWORD_PTR)&local_c);
      if (MVar1 == 0) {
        DVar2 = timeGetTime();
        *(DWORD *)(param_1 + 0x32c) = DVar2;
        *(undefined4 *)(param_1 + 0x330) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        *(short *)(param_1 + 0x328) = sVar4;
        *(short *)(param_1 + 0x32a) = sVar4;
      }
    }
  }
  return;
}


