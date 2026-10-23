// FUN_004d6e40 @ 4d6e40 size=340

void FUN_004d6e40(void)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfa4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_00a983ce & 1) == 0) {
    DAT_00a983ce = DAT_00a983ce | 1;
    ExceptionList = &local_c;
    iVar1 = FUN_005841a0();
    DAT_00a6151c = iVar1 + 0x1fU & 0xffffffe0;
  }
  if ((DAT_00a983ce & 2) == 0) {
    DAT_00a983ce = DAT_00a983ce | 2;
    iVar1 = FUN_005841b0();
    DAT_008f00c8 = iVar1 + 0x1fU & 0xffffffe0;
  }
  FUN_004d8e50(0,0,DAT_00a6151c,DAT_008f00c8);
  pvVar2 = operator_new(0x25e);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    DAT_00a98460 = 0;
  }
  else {
    DAT_00a98460 = FUN_004010a0(DAT_00a98438 - DAT_00a98430,DAT_00a9843c - DAT_00a98434,0x10,1);
  }
  *(undefined1 *)(DAT_00a98460 + 0x252) = 0;
  local_4 = 0xffffffff;
  DAT_008f00d0 = (int)((DAT_00a9843c - DAT_00a98434) + (DAT_00a9843c - DAT_00a98434 >> 0x1f & 0x1fU)
                      ) >> 5;
  DAT_00a4ccd0 = (int)((DAT_00a98438 - DAT_00a98430) + (DAT_00a98438 - DAT_00a98430 >> 0x1f & 0x1fU)
                      ) >> 5;
  DAT_00a44c30 = DAT_008f00d0 * DAT_00a4ccd0;
  DAT_00a9840c = operator_new(DAT_00a44c30);
  ExceptionList = local_c;
  return;
}


