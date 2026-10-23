// FUN_0067a990 @ 67a990 size=121

void __fastcall FUN_0067a990(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007f3600;
  param_1[0x55] = &PTR_LAB_007e3ff0;
  iVar2 = param_1[0x56];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x19] = &PTR_LAB_007e3ff0;
  iVar2 = param_1[0x1a];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_006ad140();
  return;
}


