// FUN_00667860 @ 667860 size=91

void __fastcall FUN_00667860(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007f0bd4;
  param_1[0x28] = &PTR_LAB_007e6edc;
  iVar2 = param_1[0x29];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = &PTR_LAB_007f0c08;
  return;
}


