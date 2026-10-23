// FUN_004276c0 @ 4276c0 size=165

int __thiscall FUN_004276c0(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  while( true ) {
    iVar4 = iVar3 + 1;
    if (*(char *)(param_1 + 0x13c) != '\0') {
      FUN_00405ad0(s_No_valid_file__0083a3dc);
      *(undefined1 *)(iVar3 + param_2) = 0;
      return iVar4;
    }
    iVar2 = FUN_007a67c4(iVar3 + param_2,1,1,*(undefined4 *)(param_1 + 0x6c));
    if (iVar2 != 1) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(char *)(iVar3 + param_2) == '\n') {
      *(undefined1 *)(iVar3 + param_2) = 0;
    }
    pcVar1 = (char *)(iVar3 + param_2);
    iVar3 = iVar4;
    if (*pcVar1 == '\0') {
      return iVar4;
    }
  }
  FUN_007a630a(param_1 + 0x70,s_Error_reading_file__s__0083a3f0,param_1 + 8);
  FUN_00405ad0(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x13c) = 1;
  DAT_0088f21a = 1;
  *(undefined1 *)(iVar3 + param_2) = 0;
  return iVar4;
}


