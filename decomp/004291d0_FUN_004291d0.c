// FUN_004291d0 @ 4291d0 size=83

void __fastcall FUN_004291d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      iVar2 = *(int *)(param_1[2] + uVar3 * 4);
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 4);
        FUN_00796cd8(iVar2);
        iVar2 = iVar1;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_1[2] + -4 + uVar3 * 4) = 0;
    } while (uVar3 < (uint)param_1[1]);
  }
  *param_1 = 0;
  FUN_00796cd8(param_1[2]);
  return;
}


