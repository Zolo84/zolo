// FUN_00606020 @ 606020 size=274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00606020(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  int iVar4;
  float local_4;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x162);
  do {
    fVar3 = (float10)FUN_004a45e0(iVar1);
    local_4 = (float)fVar3;
    if ((iVar1 == 4) || (iVar1 == 5)) {
      local_4 = 100.0;
    }
    iVar4 = iVar1;
    FUN_005f8440(iVar1);
    fVar3 = (float10)FUN_004a45e0(iVar4);
    fVar3 = -fVar3;
    if (local_4 <= _DAT_007e4088) {
      if (local_4 < _DAT_007e3380) {
        local_4 = 0.0;
      }
    }
    else {
      local_4 = 100.0;
    }
    if (fVar3 <= (float10)_DAT_007e3380) {
      if (fVar3 < (float10)_DAT_007e5e7c) {
        fVar3 = (float10)_DAT_007e5e7c;
      }
    }
    else {
      fVar3 = (float10)_DAT_007e3380;
    }
    fVar3 = (fVar3 + (float10)_DAT_007e4088) * (float10)_DAT_007e68e0;
    local_4 = (local_4 + _DAT_007e4088) * _DAT_007e68e0;
    if (_DAT_007eeea0 < local_4) {
      local_4 = 0.9999;
    }
    if (fVar3 < (float10)_DAT_007e408c) {
      fVar3 = (float10)_DAT_007e408c;
    }
    iVar1 = iVar1 + 1;
    *(float *)(*piVar2 + 0x9c) = local_4;
    *(float *)(*piVar2 + 0x98) = (float)fVar3;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 6);
  return;
}


