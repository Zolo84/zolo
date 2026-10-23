// FUN_0040d230 @ 40d230 size=432

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040d230(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *local_8;
  int *local_4;
  
  puVar8 = *(undefined4 **)(param_1 + 0x14);
  if (puVar8 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)puVar8[1];
    local_8 = (int *)*puVar8;
  }
  if (puVar9 == (undefined4 *)0x0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = (int *)*puVar9;
  }
  puVar8 = operator_new(0x16);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar1;
    *(undefined1 *)(puVar8 + 3) = param_3;
    *(undefined4 *)((int)puVar8 + 0xe) = 0;
    *(undefined4 *)((int)puVar8 + 0x12) = 0;
    puVar8[2] = 0;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = puVar8;
    puVar9[1] = iVar2;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x14) = puVar9;
  *(int *)(param_1 + 0x18) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar9;
  }
  piVar4 = (int *)**(int **)(param_1 + 0x14);
  if (local_8 != (int *)0x0) {
    _param_3 = (float)(*piVar4 - *local_8);
    fVar5 = (float)(piVar4[1] - local_8[1]);
    if (_param_3 <= _DAT_007e34cc) {
      if (_param_3 < _DAT_007e34c4) {
        _param_3 = _param_3 + _DAT_007e34c8;
      }
    }
    else {
      _param_3 = _param_3 - _DAT_007e34c8;
    }
    piVar7 = (int *)fVar5;
    fVar6 = _param_3;
    if (local_4 != (int *)0x0) {
      fVar6 = (float)(*piVar4 - *local_4);
      if (fVar6 <= _DAT_007e34cc) {
        if (fVar6 < _DAT_007e34c4) {
          fVar6 = fVar6 + _DAT_007e34c8;
        }
      }
      else {
        fVar6 = fVar6 - _DAT_007e34c8;
      }
      piVar7 = (int *)((float)(piVar4[1] - local_4[1]) * _DAT_007e34c0);
      fVar6 = fVar6 * _DAT_007e34c0;
    }
    local_4 = piVar7;
    *(float *)((int)local_8 + 0xe) = fVar6;
    *(int **)((int)local_8 + 0x12) = local_4;
    FUN_0040cd40(_param_3,fVar5);
    *(float *)((int)piVar4 + 0xe) = _param_3;
    *(float *)((int)piVar4 + 0x12) = fVar5;
  }
  return;
}


