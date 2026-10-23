// FUN_006097b0 @ 6097b0 size=204

undefined4 __fastcall FUN_006097b0(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x14))
              ((short)*(undefined4 *)(param_1 + 0xe),(short)*(undefined4 *)(param_1 + 0x12));
  }
  *(undefined1 *)(param_1 + 0x36) = 1;
  uVar1 = FUN_004a0d30(6,0,*(undefined4 *)(param_1 + 0x40),DAT_0088f28c,
                       (short)((uint)DAT_0088f28e >> 0x10));
  *(undefined1 *)(param_1 + 0x36) = uVar1;
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar2 = FUN_00584270(0xff,0xff,0xff);
  }
  if (*(char *)(param_1 + 0x36) == '\0') {
    uVar2 = FUN_00584270(0x80,0x80,0x80);
  }
  FUN_00413483(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0xe),
               *(undefined4 *)(param_1 + 0x12),DAT_00bd1bac,uVar2,0);
  return 0;
}


