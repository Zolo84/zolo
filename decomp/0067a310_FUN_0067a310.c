// FUN_0067a310 @ 67a310 size=528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067a310(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_1c = 0.0;
  local_c = 0.0;
  local_10 = 0.0;
  FUN_00677010(&local_18,&local_14,&local_1c,&local_c,&local_10);
  FUN_00679900(&local_18);
  local_4 = (float)FUN_0044ab40();
  iVar3 = FUN_0044ab40();
  if (iVar3 < 1) {
    local_4 = 1.4013e-45;
  }
  local_4 = (float)(int)local_4;
  fVar4 = (float10)FUN_0044ab50();
  if (fVar4 / (float10)local_4 < (float10)local_18) {
    local_18 = (float)(fVar4 / (float10)local_4);
  }
  iVar3 = *(int *)(param_1 + 10);
  if (*(float *)(iVar3 + 0x234) <= _DAT_007e34c0) {
    if (*(float *)(iVar3 + 0x3bb8) <= *(float *)(iVar3 + 0x39c4)) {
      cVar2 = FUN_0044beb0();
      if ((((cVar2 != '\0') && (_DAT_007e3848 <= *(float *)(*(int *)(param_1 + 10) + 0x39cc))) &&
          (fVar1 = *(float *)(*(int *)(param_1 + 10) + 0x39f4) / local_4, local_1c < fVar1)) &&
         (local_14 = (((_DAT_007e3374 - local_10) - local_18) - local_1c) - local_c,
         fVar1 < local_14)) {
        local_14 = fVar1;
      }
      iVar3 = *(int *)(param_1 + 10);
      local_8 = *(float *)(iVar3 + 0x3a00) / local_4;
      if ((local_1c < local_8) &&
         (local_1c = (((_DAT_007e3374 - local_10) - local_18) - local_14) - local_c,
         local_8 < local_1c)) {
        local_1c = local_8;
      }
    }
    if (*(float *)(iVar3 + 0x3b34) <= _DAT_007e3380) {
      local_10 = (((_DAT_007e3374 - local_c) - local_18) - local_14) - local_1c;
    }
    else {
      local_c = (((_DAT_007e3374 - local_10) - local_18) - local_14) - local_1c;
    }
  }
  else {
    local_c = (((_DAT_007e3374 - local_10) - local_18) - local_14) - local_1c;
  }
  FUN_0045dcb0(local_c,local_10,local_18,local_14,local_1c);
  return;
}


