// FUN_00578750 @ 578750 size=59

void __fastcall FUN_00578750(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_007eacc0;
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


