// FUN_004f2410 @ 4f2410 size=297

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2410(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float local_18;
  float local_14;
  
  fVar4 = DAT_00dc17e4;
  iVar1 = param_1[9];
  iVar6 = param_1[0xd] + 1;
  local_18 = *(float *)((int)param_1 + 0x4e);
  local_14 = (_DAT_007e3374 - *(float *)((int)param_1 + 0x4e)) *
             (_DAT_007e3374 - *(float *)((int)param_1 + 0x46)) * (float)iVar1;
  fVar2 = *(float *)(*(int *)(param_1[0xb] + 0x244) + 0x42) - _DAT_00dc17e0;
  if (iVar6 < param_1[0xc]) {
    do {
      local_18 = local_18 + fVar4;
      if (fVar2 < local_18) {
        local_18 = fVar2;
      }
      fVar3 = _DAT_007e3374 - local_18;
      cVar5 = (**(code **)(*param_1 + 0x10))();
      if ((cVar5 != '\0') && (*(int *)((int)param_1 + 0x5a) == 1)) {
        fVar3 = _DAT_007e3374;
      }
      iVar6 = iVar6 + 1;
      local_14 = fVar3 * (float)iVar1 + local_14;
    } while (iVar6 < param_1[0xc]);
  }
  iVar1 = DAT_00893530;
  fVar2 = _DAT_007e8418;
  if (_DAT_007e3380 < local_14) {
    *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)(iVar1 + 0x18);
    if (fVar2 < *(float *)((int)param_1 + 0x42)) {
      local_14 = local_14 / *(float *)((int)param_1 + 0x42);
    }
    FUN_007a8a7e((double)local_14);
    __ftol();
    FUN_0042dc20();
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
  }
  return;
}


