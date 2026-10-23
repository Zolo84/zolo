// FUN_007aeb8a @ 7aeb8a size=101

undefined4 FUN_007aeb8a(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_00dc5c60) &&
     ((*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_007aeb09(param_1);
    uVar1 = FUN_007aebef(param_1,param_2,param_3);
    FUN_007aeb68(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_007aadca();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_007aadd3();
  *puVar2 = 0;
  return 0xffffffff;
}


