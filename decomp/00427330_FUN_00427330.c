// FUN_00427330 @ 427330 size=133

uint __thiscall FUN_00427330(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  param_3 = param_3 * param_4;
  if (*(char *)(param_1 + 0x13c) != '\0') {
    uVar2 = FUN_00405ad0(s_No_valid_file__0083a3dc);
    return uVar2 & 0xffffff00;
  }
  iVar1 = FUN_007a6a0f(param_2,1,param_3,*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 != param_3) {
    FUN_007a630a(param_1 + 0x70,s_Error_writing_file__s__0083a40c,param_1 + 8);
    uVar2 = FUN_00405ad0(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    DAT_0088f21a = 1;
    return uVar2 & 0xffffff00;
  }
  param_3 = *(int *)(param_1 + 4) + param_3;
  *(int *)(param_1 + 4) = param_3;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


