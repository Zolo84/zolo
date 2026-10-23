// FUN_00733b90 @ 733b90 size=366

uint __fastcall FUN_00733b90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0044c640(0);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(0);
    uVar2 = *(uint *)(iVar1 + 0xe);
    if (uVar2 == *(uint *)(param_1 + 0x12)) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(1);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(1);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(2);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(2);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(3);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(3);
    uVar2 = *(uint *)(iVar1 + 0xe);
    if (uVar2 == *(uint *)(param_1 + 0x12)) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(4);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(4);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(5);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(5);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(6);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(6);
    uVar2 = *(uint *)(iVar1 + 0xe);
    if (uVar2 == *(uint *)(param_1 + 0x12)) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(7);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(7);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(8);
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(8);
    uVar2 = *(uint *)(param_1 + 0x12);
    if (*(uint *)(iVar1 + 0xe) == uVar2) goto LAB_00733cf0;
  }
  iVar1 = FUN_0044c640(9);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0044c640(9);
    uVar2 = *(uint *)(iVar1 + 0xe);
    if (uVar2 == *(uint *)(param_1 + 0x12)) {
LAB_00733cf0:
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


