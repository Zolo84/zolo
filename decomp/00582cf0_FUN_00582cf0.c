// FUN_00582cf0 @ 582cf0 size=96

undefined4 __thiscall FUN_00582cf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_2 + 0xc) = 1;
    return 1;
  }
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
  return 1;
}


