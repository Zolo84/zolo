// FUN_0040d1d0 @ 40d1d0 size=52

void __thiscall FUN_0040d1d0(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3a) == '\0') {
    uVar1 = 1;
    if (param_2 == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x22);
    }
    *(undefined4 *)(param_1 + 0x26) = uVar1;
    *(undefined1 *)(param_1 + 0x3a) = 1;
    FUN_0040fd60(param_1,0x15e,0);
  }
  return;
}


