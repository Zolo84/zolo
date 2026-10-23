// FUN_00428020 @ 428020 size=143

undefined4 * __thiscall FUN_00428020(undefined4 *param_1,byte param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  *param_1 = &PTR_FUN_007e3c24;
  uVar1 = *(ushort *)(param_1 + 1);
  if ((((uVar1 == 0x11) || (uVar1 == 7)) || (uVar1 == 6)) || (0x1267 < uVar1)) {
    if (((DAT_0088f2cc == 0) ||
        ((*(int *)((int)param_1 + 6) == DAT_0088f28e && (*(short *)(param_1 + 1) == DAT_0088f28c))))
       || (*(short *)(param_1 + 1) == -2)) goto LAB_00428099;
    puVar2 = (undefined2 *)FUN_00428f70();
    FUN_00429290(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
  }
  *(undefined2 *)(param_1 + 1) = 0xfffe;
LAB_00428099:
  if ((param_2 & 1) != 0) {
    FUN_00796cd8((short)param_1);
  }
  return param_1;
}


