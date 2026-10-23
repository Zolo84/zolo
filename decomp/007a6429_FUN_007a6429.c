// FUN_007a6429 @ 7a6429 size=49

undefined4 FUN_007a6429(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_007a6720(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_007a6772(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}


