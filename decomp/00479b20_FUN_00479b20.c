// FUN_00479b20 @ 479b20 size=115

undefined4 FUN_00479b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c120(*(int *)(param_1 + 4) + 0xe);
  *(undefined4 *)(iVar1 + 0x11c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  *(undefined4 *)(iVar1 + 0x120) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
  *(undefined4 *)(iVar1 + 0x132) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
  *(undefined4 *)(iVar1 + 0x12e) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
  *(undefined4 *)(iVar1 + 0x150) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x26);
  *(undefined4 *)(iVar1 + 0x154) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2a);
  if (*(char *)(*(int *)(param_1 + 4) + 0x24) != '\0') {
    FUN_004d2ee0();
  }
  return 3;
}


