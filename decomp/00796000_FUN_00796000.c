// FUN_00796000 @ 796000 size=200

undefined4 __thiscall FUN_00796000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar1 = *(int *)(param_2 + 4);
      iVar2 = *(int *)(param_2 + 8);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = iVar1;
      }
      if (param_2 == *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = iVar2;
      }
      if (param_2 == *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = iVar1;
      }
      FUN_00796cd8(param_2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    else {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


