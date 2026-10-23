// FUN_0047c4b0 @ 47c4b0 size=175

undefined4 FUN_0047c4b0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_00428ee0((short)(*(int *)(param_1 + 4) + 0xe));
  if (((iVar3 != 0) && (iVar3 != 8)) &&
     (*(undefined1 *)(iVar3 + 0xd4) = 0, *(int *)(*(int *)(param_1 + 4) + 0x14) == 0)) {
    sVar1 = *(short *)(DAT_00893530 + 0x18);
    *(undefined4 *)(iVar3 + 200) = 0xbb9;
    *(int *)(iVar3 + 0xcc) = sVar1 + -1;
  }
  iVar3 = FUN_004993a0();
  piVar4 = (int *)FUN_0048c9c0(*(undefined2 *)(iVar3 + 0xe),
                               (short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10));
  cVar2 = (**(code **)(*piVar4 + 0x24))();
  if (cVar2 != '\0') {
    iVar3 = FUN_004993a0();
    piVar4 = (int *)FUN_0048c9c0(*(undefined2 *)(iVar3 + 0xe),
                                 (short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10));
    (**(code **)(*piVar4 + 0x18))();
  }
  return 0;
}


