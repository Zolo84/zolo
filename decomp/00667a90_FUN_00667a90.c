// FUN_00667a90 @ 667a90 size=66

void __fastcall FUN_00667a90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = &PTR_LAB_007e6edc;
  iVar2 = param_1[3];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_LAB_007f0c08;
  return;
}


