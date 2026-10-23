// FUN_00495f20 @ 495f20 size=107

undefined4 FUN_00495f20(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00428ee0(*(int *)(param_1 + 4) + 0xe);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    *(undefined4 *)(iVar2 + 0x138) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
    *(undefined4 *)(iVar2 + 0x13c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
    *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
    *(undefined4 *)(iVar2 + 0x124) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 0x24);
    *(undefined4 *)(iVar2 + 0xfc) = 0;
    *(undefined1 *)(iVar2 + 0x15b) = uVar1;
  }
  return 0;
}


