// FUN_004283b0 @ 4283b0 size=123

undefined4 __fastcall FUN_004283b0(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if ((((uVar1 == 0x11) || (uVar1 == 7)) || (uVar1 == 6)) || (0x1267 < uVar1)) {
    if (((DAT_0088f2cc == 0) ||
        ((*(int *)(param_1 + 6) == DAT_0088f28e && (*(short *)(param_1 + 4) == DAT_0088f28c)))) ||
       (*(short *)(param_1 + 4) == -2)) {
      return 0;
    }
    puVar2 = (undefined2 *)FUN_00428f70();
    FUN_00429290(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
  }
  *(undefined2 *)(param_1 + 4) = 0xfffe;
  return 1;
}


