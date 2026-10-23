// FUN_007ab270 @ 7ab270 size=250

int FUN_007ab270(byte *param_1,uint param_2,byte *param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_8;
  
  local_8 = param_2;
  InterlockedIncrement(&DAT_00dc5c70);
  bVar4 = DAT_00dc5c6c == 0;
  if (!bVar4) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  pbVar2 = param_3;
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_0087d400;
  }
  while ((local_8 != 0 && (bVar1 = *pbVar2, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar3 = pbVar2 + 1;
      bVar1 = *pbVar3;
      if (bVar1 == 0x23) {
        pbVar3 = pbVar2 + 2;
      }
      DAT_00dc5c64 = (uint)(bVar1 == 0x23);
      FUN_007ab36a(CONCAT31((int3)((uint)&param_1 >> 8),*pbVar3),param_4,&param_1,&local_8,param_5);
    }
    else {
      if (((PTR_DAT_0087cdd0[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar2;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar3 = pbVar2;
    }
    pbVar2 = pbVar3 + 1;
  }
  if (bVar4) {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  else {
    FUN_007aaed2(0x13);
  }
  if (local_8 == 0) {
    return 0;
  }
  *param_1 = 0;
  return param_2 - local_8;
}


