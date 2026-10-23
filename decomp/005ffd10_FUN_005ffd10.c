// FUN_005ffd10 @ 5ffd10 size=66

void __thiscall FUN_005ffd10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00428ee0(param_1 + 0x96);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    uVar2 = FUN_0058bcc0(*(undefined4 *)(DAT_00d0ca90 + 6),param_2,param_3,0);
    *(undefined4 *)(param_1 + 0x92) = uVar2;
  }
  return;
}


