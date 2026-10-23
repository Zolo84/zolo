// FUN_006e9c50 @ 6e9c50 size=59

void __fastcall FUN_006e9c50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_007f7f58;
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


