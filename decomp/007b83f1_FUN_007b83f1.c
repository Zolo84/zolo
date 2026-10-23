// FUN_007b83f1 @ 7b83f1 size=113

undefined8 FUN_007b83f1(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((param_1 < DAT_00dc5c60) &&
     ((*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_007aeb09(param_1);
    uVar2 = FUN_007b8462(param_1,param_2,param_3,param_4);
    FUN_007aeb68(param_1);
    return uVar2;
  }
  puVar1 = (undefined4 *)FUN_007aadca();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_007aadd3();
  *puVar1 = 0;
  return 0xffffffffffffffff;
}


