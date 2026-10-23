// FUN_007aa596 @ 7aa596 size=280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007aa596(char *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8c [136];
  
  if (param_1 == (char *)0x0) {
LAB_007aa63c:
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      param_2[1] = 0;
      *param_2 = 0x43;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_0087d108,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_0087d084,param_1), iVar1 != 0)) {
      iVar1 = FUN_007aa6d6(local_8c,param_1);
      if ((iVar1 != 0) || (iVar1 = FUN_007b49ca(local_8c,&DAT_00dc51a0,local_8c), iVar1 == 0))
      goto LAB_007aa63c;
      _DAT_00dc51a8 = (uint)DAT_00dc51a4;
      FUN_007aa7a2(&DAT_0087d108,local_8c);
      if (*param_1 == '\0') {
        param_1 = &DAT_0087d108;
      }
      FUN_007a74f0(&DAT_0087d084,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_007a71b0(param_3,&DAT_00dc51a0,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_007a71b0(param_4,&DAT_00dc51a8,4);
    }
    FUN_007a74f0(param_2,&DAT_0087d108);
    puVar2 = &DAT_0087d108;
  }
  return puVar2;
}


