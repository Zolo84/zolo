// FUN_00473cd0 @ 473cd0 size=122

undefined4 FUN_00473cd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xe);
  iVar2 = FUN_00428ee0((short)(*(int *)(param_1 + 4) + 0x12));
  if ((((iVar2 != 0) && (iVar2 != 8)) && (*(char *)(iVar2 + 0xb6) == '\0')) &&
     (*(int *)(iVar2 + 0x12) <= (int)*(short *)(DAT_00893530 + 0x18))) {
    iVar2 = FUN_0044c640((short)uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_004988d0();
      FUN_00458290(uVar1,*(undefined2 *)(iVar2 + 0x12),
                   (short)((uint)*(undefined4 *)(iVar2 + 0x14) >> 0x10));
    }
  }
  return 3;
}


