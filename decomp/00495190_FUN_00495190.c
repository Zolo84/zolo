// FUN_00495190 @ 495190 size=67

undefined4 FUN_00495190(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428ee0(*(int *)(param_1 + 4) + 0x12);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -8;
  }
  if ((iVar1 != 0) && ((&DAT_0089cad8)[*(int *)(*(int *)(param_1 + 4) + 0x18)] != 0)) {
    FUN_00585820(*(undefined4 *)((&DAT_0089cad8)[*(int *)(*(int *)(param_1 + 4) + 0x18)] + 6));
  }
  return 0;
}


