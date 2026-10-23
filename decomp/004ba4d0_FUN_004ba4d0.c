// FUN_004ba4d0 @ 4ba4d0 size=109

void __thiscall FUN_004ba4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x80) + 0x34))(param_2);
  (**(code **)(**(int **)(param_1 + 0x84) + 0x34))(param_2);
  iVar1 = *(int *)(param_1 + 0x80);
  if (*(int *)(iVar1 + 0x46) == 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  else {
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    if (-1 < *(int *)(iVar1 + 0x1c)) goto LAB_004ba512;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
LAB_004ba512:
  iVar1 = *(int *)(param_1 + 0x84);
  if (*(int *)(iVar1 + 0x46) == 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x18) < 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  if (*(int *)(iVar1 + 0x1c) < 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}


