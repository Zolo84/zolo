// FUN_0069c570 @ 69c570 size=73

void __fastcall FUN_0069c570(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007f5124;
  param_1[0x10] = &PTR_LAB_007e4a74;
  iVar2 = param_1[0x11];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_006ad140();
  return;
}


