// FUN_005257b0 @ 5257b0 size=74

void __thiscall FUN_005257b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x248);
  }
  FUN_0078d960(*(undefined4 *)(param_2 + 0x74),*(int *)(param_1 + 0x264),
               *(undefined4 *)(iVar1 + 0xe360 + *(int *)(param_1 + 0x264) * 4),param_3);
  return;
}


