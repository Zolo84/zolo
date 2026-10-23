// FUN_00451160 @ 451160 size=230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00451160(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float local_4;
  
  local_4 = 10.0;
  cVar2 = FUN_004a0a80();
  if (cVar2 != '\0') {
    local_4 = 25.0;
  }
  cVar2 = FUN_0049ed40(*(undefined4 *)(param_2 + 6));
  if (cVar2 != '\0') {
    local_4 = 0.0;
  }
  iVar3 = FUN_00760760();
  if (((2 < iVar3) && (iVar3 < 7)) &&
     (local_4 = local_4 - *(float *)(param_2 + 0x334c), local_4 <= _DAT_007e3380)) {
    local_4 = _DAT_007e3380;
  }
  if (DAT_00d615f6 != (int *)0x0) {
    piVar4 = DAT_00d615f6;
    do {
      piVar1 = piVar4 + 2;
      iVar3 = *piVar4;
      if ((((*(int *)(iVar3 + 0x1a) == *(int *)(param_2 + 6)) ||
           (*(int *)(iVar3 + 0x16) == *(int *)(param_2 + 6))) &&
          ((*(int *)(iVar3 + 0x1a) == *(int *)(param_1 + 6) ||
           (*(int *)(iVar3 + 0x16) == *(int *)(param_1 + 6))))) && (*(int *)(iVar3 + 0x1e) == 2)) {
        local_4 = local_4 + _DAT_007e4090;
        break;
      }
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  local_4 = local_4 + *(float *)(param_1 + 0x334c);
  if (_DAT_007e3380 <= local_4) {
    *(float *)(param_1 + 0x334c) = local_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x334c) = 0;
  return;
}


