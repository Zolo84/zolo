// FUN_00616df0 @ 616df0 size=145

int __thiscall FUN_00616df0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(param_2);
  iVar2 = FUN_00428ee0(param_1 + 0x2e);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  if ((*(char *)(*(int *)(param_1 + 0x34) + 0x96) != '\0') && (iVar2 != 0)) {
    FUN_00449290(param_1 + 0x2e);
    FUN_0045c660(*(undefined4 *)(param_1 + 0x38));
    *(int *)(DAT_00d0ca90 + 0x21eac) = iVar2;
    return 1;
  }
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x12) + 4))(unaff_retaddr);
  }
  return iVar1;
}


