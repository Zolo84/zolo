// FUN_00414920 @ 414920 size=141

undefined4 __thiscall FUN_00414920(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1[3] + 0x6a) =
       (uint)(*(char *)(DAT_00ab27b4 + 0x46e + param_1[0xc] * 0x4b2) == '\0');
  cVar1 = *(char *)(DAT_00ab27b4 + 0x3b0 + param_1[0xc] * 0x4b2);
  if (cVar1 != '\0') {
    if (((byte)DAT_00a98444 & 1) != 0) {
      uVar2 = FUN_00419150(param_2);
      return uVar2;
    }
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x18))();
      if (cVar1 != '\0') {
        uVar2 = FUN_00419150(param_2);
        return uVar2;
      }
    }
  }
  return 0;
}


