// FUN_0044e580 @ 44e580 size=224

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0044e580(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  fVar6 = (float10)FUN_0044a9c0(*(undefined4 *)(param_2 + 0xc),param_3);
  iVar5 = (**(code **)(*(int *)(param_2 + 0x22) + 4))();
  fVar2 = (float)(param_1[0xe5b] + iVar5);
  if ((float)(param_1[0xe5b] + iVar5) <= _DAT_007e5440) {
    fVar2 = _DAT_007e5440;
  }
  fVar2 = (float)param_1[0xe5a] / fVar2;
  fVar3 = _DAT_007e3374;
  if ((fVar2 <= _DAT_007e3374) && (fVar3 = fVar2, fVar2 <= _DAT_007e5dd0)) {
    fVar3 = _DAT_007e5dd0;
  }
  fVar2 = ((_DAT_0087745c * (float)fVar6 + _DAT_00877458) / fVar3) / (float)param_1[0x38db];
  cVar4 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar4 == '\0') || (DAT_00dc18f4 < 1)) {
    iVar5 = (int)ROUND(fVar2);
  }
  else {
    iVar1 = (int)ROUND(fVar2);
    iVar5 = DAT_00dc18f4;
    if (iVar1 <= DAT_00dc18f4) {
      return iVar1;
    }
  }
  return iVar5;
}


