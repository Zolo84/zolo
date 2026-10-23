// FUN_00609560 @ 609560 size=199

undefined4 __fastcall FUN_00609560(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
              ((short)*(undefined4 *)(param_1 + 0xe),(short)*(undefined4 *)(param_1 + 0x12));
  }
  uVar1 = FUN_004a0d30(*(undefined4 *)(param_1 + 0x2e),0,*(undefined4 *)(param_1 + 0x3c),
                       DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10));
  *(undefined1 *)(param_1 + 0x32) = uVar1;
  uVar2 = FUN_00584270(0xff,0xc6,0);
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar2 = FUN_00584270(0xff,0xff,0xff);
  }
  if (*(char *)(param_1 + 0x32) == '\0') {
    uVar2 = FUN_00584270(0x80,0x80,0x80);
  }
  FUN_00413483(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0xe),
               *(undefined4 *)(param_1 + 0x12),DAT_00bd1bac,uVar2,0);
  return 0;
}


