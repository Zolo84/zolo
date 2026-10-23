// FUN_0046a1b0 @ 46a1b0 size=410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0046a1b0(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float local_8;
  
  iVar3 = (&DAT_0089cad8)[param_2];
  if (iVar3 == 0) {
    return 0;
  }
  if ((DAT_00d610e6 != '\0') && ((&DAT_00dc0fd4)[param_2] == 0)) {
    return 100;
  }
  fVar1 = *(float *)(iVar3 + 0x234);
  fVar6 = (float10)FUN_0076bbb0(param_1,8);
  fVar7 = (float10)FUN_0076bbb0(iVar3,8);
  local_8 = (float)((float10)((*(int *)(param_1 + 0x3954) - *(int *)(iVar3 + 0x3954)) / 5) +
                   ((((float10)(float)fVar6 - fVar7) * (float10)_DAT_007e4088 +
                    (float10)fVar1 + (float10)_DAT_007e5e34) - (float10)*(float *)(param_1 + 0x334c)
                   ));
  fVar1 = _DAT_007e6870;
  if ((*(char *)(*(int *)(iVar3 + 0x12da) + (*(int *)(param_1 + 6) + 1) * 0x2c) != '\0') ||
     (cVar2 = FUN_0044beb0(), fVar1 = _DAT_007e4090, cVar2 != '\0')) {
    local_8 = local_8 - fVar1;
  }
  if (*(int *)(iVar3 + 0x3350) != 0) {
    if (*(int *)(iVar3 + 0x3350) == *(int *)(param_1 + 0x3350)) {
      local_8 = local_8 + _DAT_007e682c;
    }
    else {
      iVar3 = *(int *)(iVar3 + 6);
      iVar4 = FUN_00584c90();
      if (iVar4 == iVar3) {
        local_8 = local_8 - _DAT_007e6828;
      }
      else {
        local_8 = local_8 - _DAT_007e686c;
      }
    }
  }
  iVar3 = FUN_0044d810();
  iVar4 = FUN_0044d810();
  uVar5 = iVar4 - iVar3 >> 0x1f;
  fVar6 = (float10)FUN_0044c670(6,param_2);
  local_8 = (float)((float10)(int)((4 - ((iVar4 - iVar3 ^ uVar5) - uVar5)) * 10) + (float10)local_8
                   + fVar6);
  if ((&DAT_00dc0fd4)[param_2] == 0) {
    iVar3 = FUN_006b5850(*(undefined4 *)(param_1 + 6));
    local_8 = local_8 - (float)(iVar3 * 9);
  }
  return (int)ROUND(local_8);
}


