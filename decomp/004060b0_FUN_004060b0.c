// FUN_004060b0 @ 4060b0 size=129

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004060b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  char *pcVar2;
  
  if (param_1[0xd] == 0) {
    if (param_1[3] == 1) {
      pcVar2 = (char *)(**(code **)(*param_1 + 4))(param_2,param_3);
      if (*pcVar2 == '\0') {
        (**(code **)(*param_1 + 0xc))();
        return 1;
      }
      if (*pcVar2 == '\x01') {
        (**(code **)(*param_1 + 0xc))();
        return 1;
      }
    }
    else if (param_1[3] == 2) {
      puVar1 = (ushort *)(**(code **)(*param_1 + 4))(param_2,param_3);
      if (*puVar1 == _DAT_0088cee8) {
        (**(code **)(*param_1 + 0xc))();
        return 1;
      }
    }
  }
  (**(code **)(*param_1 + 0xc))();
  return 0;
}


