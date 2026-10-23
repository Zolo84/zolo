// FUN_00429360 @ 429360 size=80

void __fastcall FUN_00429360(undefined4 *param_1)

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
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}


