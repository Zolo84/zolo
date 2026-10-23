// FUN_004bc880 @ 4bc880 size=66

void __fastcall FUN_004bc880(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007e7720;
  param_1[10] = &PTR_LAB_007e3ff0;
  iVar2 = param_1[0xb];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


