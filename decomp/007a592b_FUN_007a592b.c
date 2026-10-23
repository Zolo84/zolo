// FUN_007a592b @ 7a592b size=168

void FUN_007a592b(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  undefined *local_10;
  uint local_c;
  
  InterlockedIncrement(&DAT_00dc5c70);
  bVar3 = DAT_00dc5c6c == 0;
  if (!bVar3) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  uVar2 = DAT_00dc5228;
  uVar1 = DAT_00dc5214;
  local_10 = _malloc(0x200);
  bVar4 = local_10 == (undefined *)0x0;
  if (bVar4) {
    local_10 = PTR_DAT_0087cdd0;
  }
  else {
    FUN_007a71b0(local_10,PTR_DAT_0087cdd0,0x200);
  }
  local_c = (uint)!bVar4;
  if (bVar3) {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  else {
    FUN_007aaed2(0x13);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = local_10;
  param_1[3] = local_c;
  return;
}


