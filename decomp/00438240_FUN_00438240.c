// FUN_00438240 @ 438240 size=214

undefined4 __thiscall FUN_00438240(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = (**(code **)(*param_2 + 8))();
    if (iVar3 == 0xe) {
      iVar3 = *(int *)(param_2[1] + 0x16);
      iVar2 = *(int *)(param_2[1] + 0x1a);
      if ((((*(int *)(param_1 + 0x1c) < iVar3) && (iVar3 < *(int *)(param_1 + 0x24))) &&
          (*(int *)(param_1 + 0x20) < iVar2)) && (iVar2 < *(int *)(param_1 + 0x28))) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x39) = 1;
        *(undefined1 *)(param_1 + 0x3a) = 1;
        return 3;
      }
      *(undefined1 *)(param_1 + 0x39) = 0;
      *(undefined1 *)(param_1 + 0x3a) = 0;
    }
    else if (iVar3 == 0x16) {
      if (*(char *)(param_1 + 0x39) == '\x01') {
        FUN_00438340(param_2);
        return 3;
      }
    }
    else if (((iVar3 == 0x1c) && (*(char *)(param_1 + 0x39) == '\x01')) &&
            (iVar3 = *(int *)(param_1 + 0x34) + 1, *(int *)(param_1 + 0x34) = iVar3, iVar3 == 10)) {
      if (*(char *)(param_1 + 0x3a) == '\0') {
        *(undefined1 *)(param_1 + 0x3a) = 1;
        uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x38) = uVar1;
        return 0;
      }
      *(undefined1 *)(param_1 + 0x3a) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      return 0;
    }
  }
  return 0;
}


