// FUN_0061ef90 @ 61ef90 size=138

undefined4 __fastcall FUN_0061ef90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_00428ee0(param_1 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -0x14;
  }
  iVar2 = FUN_00428ee0(param_1 + 0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  if ((iVar1 != 0) && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x38))
              (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12));
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(unaff_ESI);
    return 0;
  }
  if ((iVar2 != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x38))
              (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12));
    (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(unaff_ESI);
  }
  return 0;
}


