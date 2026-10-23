// FUN_0043f2a0 @ 43f2a0 size=492

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043f2a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 extraout_var;
  float10 fVar12;
  unkbyte10 extraout_ST0;
  float local_34;
  float local_30;
  int local_10;
  int local_c;
  
  FUN_00407da0();
  fVar5 = _DAT_007e3380;
  *(undefined1 *)(*(int *)(param_1 + 0x62) + 0x252) = 1;
  for (piVar1 = *(int **)(param_1 + 0x82); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    fVar5 = fVar5 + *(float *)(*piVar1 + 2);
  }
  iVar8 = FUN_00415bd0();
  iVar8 = iVar8 / 2;
  iVar9 = FUN_00415be0();
  iVar9 = iVar9 / 2;
  FUN_00415bd0();
  local_c = __ftol();
  local_c = local_c + iVar9;
  local_30 = 0.0;
  if (_DAT_007e3380 < fVar5) {
    local_10 = iVar8;
    puVar7 = *(undefined4 **)(param_1 + 0x82);
    while (puVar7 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar7[2];
      puVar3 = (undefined2 *)*puVar7;
      fVar4 = *(float *)(puVar3 + 1) / fVar5;
      *(undefined2 *)(*(int *)(param_1 + 0x62) + 0x25a) = *puVar3;
      local_34 = 0.0;
      fVar6 = (float)_DAT_007e46d8;
      if (_DAT_007e3348 < (double)(fVar4 + fVar6)) {
        do {
          fVar12 = (float10)local_34 + (float10)local_30;
          if ((float10)(fVar4 + local_30) < fVar12) {
            fVar12 = (float10)(fVar4 + local_30);
          }
          fsin(fVar12 * (float10)_DAT_007e46d0);
          iVar10 = __ftol();
          fcos(extraout_ST0);
          iVar11 = __ftol();
          iVar11 = iVar11 + iVar9;
          iVar10 = iVar10 + iVar8;
          FUN_00403ac0(iVar8,iVar9,local_10,local_c,iVar10,iVar11,CONCAT22(extraout_var,*puVar3));
          local_34 = local_34 + _DAT_007e46cc;
          local_10 = iVar10;
          local_c = iVar11;
        } while (local_34 < fVar4 + fVar6);
      }
      local_30 = fVar4 + local_30;
      puVar7 = puVar2;
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x18))(0xfffffffe,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x10))(0);
  }
  return;
}


