// FUN_00427480 @ 427480 size=95

uint __thiscall FUN_00427480(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_007a8307(*(undefined4 *)(param_1 + 0x6c),param_2,2);
  if (iVar1 != 0) {
    FUN_007a630a(param_1 + 0x70,s_Error_seeking_in_file__s__0083a3c0,param_1 + 8);
    uVar2 = FUN_00405ad0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    DAT_0088f21a = 1;
    return uVar2 & 0xffffff00;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0x138) - param_2;
  return 1;
}


