// FUN_004bdae0 @ 4bdae0 size=130

void __thiscall FUN_004bdae0(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x46) = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x62) != 0)) {
    *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(*(int *)(param_2 + 0x62) + 6);
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x80);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x84);
  }
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x46) != 0) {
    if (*(int *)(param_1 + 0x18) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(iVar1 + 0x46) == 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    else {
      if (*(int *)(iVar1 + 0x18) < 0) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
      }
      if (-1 < *(int *)(iVar1 + 0x1c)) goto LAB_004bdb49;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
LAB_004bdb49:
  FUN_004b2d30(*(undefined4 *)(param_1 + 0x40),param_2,*(undefined1 *)(param_1 + 0x4e));
  return;
}


