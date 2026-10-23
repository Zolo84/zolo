// FUN_004dc9d0 @ 4dc9d0 size=320

undefined4 __thiscall FUN_004dc9d0(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  
  if ((DAT_00aa10d8 & 1) == 0) {
    DAT_00aa10d8 = DAT_00aa10d8 | 1;
    DAT_00a98c70 = 0xffffffff;
    DAT_00a98c74 = 0xffffffff;
    FUN_007a63e8(&DAT_004dcb10);
  }
  bVar2 = (byte)param_4;
  uVar1 = -0x20 << (bVar2 & 0x1f);
  if (((((uVar1 & param_2) == (uVar1 & DAT_00a98c70)) &&
       ((uVar1 & param_3) == (uVar1 & DAT_00a98c74))) && (param_4 == DAT_00847870)) &&
     (*(char *)(param_1 + 4) == '\0')) {
    uVar1 = (0x20 << (bVar2 & 0x1f)) - 1;
    return *(undefined4 *)
            (DAT_00aa4320 +
            (uint)(byte)PTR_DAT_00847868
                        [((int)(uVar1 & param_2) >> (bVar2 & 0x1f)) +
                         ((int)(uVar1 & param_3) >> (bVar2 & 0x1f)) * 0x40] * 4);
  }
  DAT_00a98c70 = param_2;
  DAT_00a98c74 = param_3;
  DAT_00847870 = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  if ((int)param_2 < 0) {
    param_2 = param_2 + 0x7500;
  }
  if (0x74ff < (int)param_2) {
    param_2 = param_2 - 0x7500;
  }
  if ((0 < (int)param_3) && ((int)param_3 < 0x2d00)) {
    FUN_004dafb0(param_2,param_3,param_4);
    FUN_004dc6c0(0,0,5);
    uVar1 = (0x20 << (bVar2 & 0x1f)) - 1;
    return *(undefined4 *)
            (DAT_00aa4320 +
            (uint)(byte)PTR_DAT_00847868
                        [((int)(uVar1 & param_2) >> (bVar2 & 0x1f)) +
                         ((int)(uVar1 & param_3) >> (bVar2 & 0x1f)) * 0x40] * 4);
  }
  return 0;
}


