// FUN_004a0c10 @ 4a0c10 size=247

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004a0c10(int param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  float local_8;
  
  iVar6 = (&DAT_0089cad8)[(int)param_2];
  local_8 = 0.0;
  param_2 = 0.0;
  puVar3 = *(undefined4 **)(iVar6 + 0xe892);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    iVar4 = FUN_004e9370(*puVar3);
    param_2 = (float)*(int *)(iVar4 + 0x19e) + param_2;
    puVar3 = puVar1;
    if ((*(int *)(iVar4 + 0x3d8) == param_1) ||
       ((*(int *)(param_1 + 0x3350) != 0 &&
        (*(int *)(*(int *)(iVar4 + 0x3d8) + 0x3350) == *(int *)(param_1 + 0x3350))))) {
      local_8 = (float)*(int *)(iVar4 + 0x19e) + local_8;
    }
  }
  uVar5 = FUN_004e9370(*(undefined4 *)(iVar6 + 0x117de));
  if (*(int *)(uVar5 + 0x3d8) == param_1) {
    iVar6 = FUN_00527630(0);
    uVar5 = FUN_00527630(0);
    if ((int)uVar5 <= iVar6 / 2) {
      uVar7 = (undefined2)(uVar5 >> 0x10);
      uVar5 = CONCAT22(uVar7,(ushort)(param_2 < _DAT_007e3374) << 8 |
                             (ushort)(NAN(param_2) || NAN(_DAT_007e3374)) << 10 |
                             (ushort)(param_2 == _DAT_007e3374) << 0xe);
      if (param_2 >= _DAT_007e3374) {
        fVar2 = (param_2 + param_2) * _DAT_007e6808;
        uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < local_8) << 8 |
                               (ushort)(NAN(fVar2) || NAN(local_8)) << 10 |
                               (ushort)(fVar2 == local_8) << 0xe);
        if (fVar2 < local_8 || (fVar2 == local_8) != 0) {
          return CONCAT31((int3)(uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}


