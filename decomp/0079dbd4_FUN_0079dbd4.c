// FUN_0079dbd4 @ 79dbd4 size=113

undefined1 * __thiscall
FUN_0079dbd4(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_5 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  else {
    if (param_5 != 1) {
      *param_2 = *param_6;
      FUN_007a0afc(0);
      FUN_007a0789(param_6,0,DAT_00800314);
      return param_2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  *param_2 = param_2._3_1_;
  FUN_007a0afc(0);
  uVar1 = FUN_007abb46(uVar2);
  FUN_007a0867(uVar2,uVar1);
  return param_2;
}


