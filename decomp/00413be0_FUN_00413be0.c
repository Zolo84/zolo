// FUN_00413be0 @ 413be0 size=93

void FUN_00413be0(void)

{
  int *piVar1;
  
  piVar1 = DAT_0088ebbc;
  if (DAT_0088ebbc != (int *)0x0) {
    if (*(int *)((int)DAT_0088ebbc + 6) != 0) {
      FUN_00414630(*(int *)((int)DAT_0088ebbc + 6),&LAB_00413bd0);
    }
    if (*piVar1 != 0) {
      FUN_00413ae0();
    }
    if (*(int *)((int)piVar1 + 0xe) != 0) {
      FUN_00414630(*(int *)((int)piVar1 + 0xe),&LAB_00413bd0);
    }
    if (*(int *)((int)piVar1 + 10) != 0) {
      FUN_00414630(*(int *)((int)piVar1 + 10),&LAB_00413bd0);
    }
  }
  return;
}


