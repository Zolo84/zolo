// FUN_006b0620 @ 6b0620 size=72

void __fastcall FUN_006b0620(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x7c) = &PTR_LAB_007f0c68;
  iVar2 = *(int *)(param_1 + 0x80);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


