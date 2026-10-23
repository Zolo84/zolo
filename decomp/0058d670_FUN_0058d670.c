// FUN_0058d670 @ 58d670 size=391

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058d670(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x1b4) + -1;
  if (iVar2 < param_3) {
    param_3 = iVar2;
  }
  if (0 < param_3 - param_2) {
    iVar2 = *(int *)(param_1 + 0x1c6);
    *(undefined2 *)(DAT_00bd1bac + 0x25a) = *(undefined2 *)(param_1 + 0x1c0);
    uVar3 = __ftol();
    fVar1 = (float)iVar2 - _DAT_007e3374;
    do {
      uVar4 = __ftol();
      if ((param_2 < 0) || (*(int *)(param_1 + 0x1b8) <= param_2)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
      }
      iVar2 = __ftol();
      if (fVar1 < (float)iVar2) {
        iVar2 = __ftol();
        iVar2 = iVar2 + -1;
      }
      param_2 = param_2 + 1;
      if ((param_2 < 0) || (*(int *)(param_1 + 0x1b8) <= param_2)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
      }
      iVar5 = __ftol();
      if (fVar1 < (float)iVar5) {
        iVar5 = __ftol();
        iVar5 = iVar5 + -1;
      }
      FUN_004014d0(uVar3,iVar2,uVar4,iVar5);
      uVar3 = uVar4;
    } while (param_2 < param_3);
  }
  return;
}


