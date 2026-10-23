// FUN_006c8860 @ 6c8860 size=78

void __fastcall FUN_006c8860(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007f7194;
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x1e));
  param_1[1] = &PTR_LAB_007f720c;
  iVar2 = param_1[2];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


