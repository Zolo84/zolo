// FUN_006730d0 @ 6730d0 size=68

void __thiscall FUN_006730d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_00d11160 = DAT_00d11160 + 1;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  iVar1 = FUN_004e9370(param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4ac) == 0)) {
    *(undefined4 *)(param_1 + 200) = param_2;
    *(int *)(iVar1 + 0x4ac) = param_1;
  }
  return;
}


