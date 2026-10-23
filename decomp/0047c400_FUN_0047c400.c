// FUN_0047c400 @ 47c400 size=168

undefined4 FUN_0047c400(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  iVar2 = FUN_00428ee0((short)(*(int *)(param_1 + 4) + 0xe));
  if (((iVar2 != 0) && (iVar2 != 8)) &&
     (*(undefined1 *)(iVar2 + 0xd4) = 1, *(int *)(*(int *)(param_1 + 4) + 0x14) == 0)) {
    *(undefined4 *)(iVar2 + 0xcc) = 0xbb9;
    *(undefined4 *)(iVar2 + 200) = 0xbba;
  }
  iVar2 = FUN_004993a0();
  piVar3 = (int *)FUN_0048c9c0(*(undefined2 *)(iVar2 + 0xe),
                               (short)((uint)*(undefined4 *)(iVar2 + 0x10) >> 0x10));
  cVar1 = (**(code **)(*piVar3 + 0x24))();
  if (cVar1 == '\0') {
    iVar2 = FUN_004993a0();
    uVar4 = *(undefined2 *)(iVar2 + 0xe);
    uVar5 = (undefined2)((uint)*(undefined4 *)(iVar2 + 0x10) >> 0x10);
    FUN_0048c9c0(uVar4,uVar5);
    FUN_004739f0(uVar4,uVar5);
  }
  return 0;
}


