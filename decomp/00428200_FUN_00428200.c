// FUN_00428200 @ 428200 size=123

void __fastcall FUN_00428200(undefined4 *param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  *param_1 = &PTR_FUN_007e3c24;
  uVar1 = *(ushort *)(param_1 + 1);
  if ((((uVar1 == 0x11) || (uVar1 == 7)) || (uVar1 == 6)) || (0x1267 < uVar1)) {
    if (DAT_0088f2cc == 0) {
      return;
    }
    if ((*(int *)((int)param_1 + 6) == DAT_0088f28e) && (*(short *)(param_1 + 1) == DAT_0088f28c)) {
      return;
    }
    if (*(short *)(param_1 + 1) == -2) {
      return;
    }
    puVar2 = (undefined2 *)FUN_00428f70();
    FUN_00429290(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
  }
  *(undefined2 *)(param_1 + 1) = 0xfffe;
  return;
}


