// FUN_004a2180 @ 4a2180 size=706

bool __thiscall FUN_004a2180(int param_1,int param_2,char param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  char extraout_AL;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_2 == 0x157) {
    return false;
  }
  if (*(char *)(param_2 * 0x2c + 0x31 + *(int *)(param_1 + 0x12da)) != '\0') {
    return false;
  }
  cVar3 = FUN_005861a0(param_2);
  if (cVar3 != '\0') {
    return false;
  }
  if (param_2 == *(int *)(param_1 + 6)) {
    return false;
  }
  if (*(char *)(*(int *)(param_1 + 0x12da) + (param_2 * 0xb + 0xb) * 4) != '\0') {
    return false;
  }
  cVar3 = FUN_00586580(param_2);
  if (cVar3 != '\0') {
    return false;
  }
  if (*(char *)(param_2 * 0x2c + 0x32 + *(int *)(param_1 + 0x12da)) != '\0') {
    return false;
  }
  if (param_3 != '\0') {
    return true;
  }
  cVar3 = FUN_005861e0(param_2);
  if (cVar3 != '\0') {
    return false;
  }
  iVar5 = (&DAT_0089cad8)[param_2];
  if (iVar5 == 0) {
    return false;
  }
  if (*(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)) {
    return false;
  }
  if (*(int *)(*DAT_00d12b40 + 0x3fa) == 0) {
    fVar1 = *(float *)(iVar5 + 0x334c);
    fVar6 = (float10)FUN_00761090(0);
    if ((float10)fVar1 < fVar6) {
      return false;
    }
  }
  if (*(int *)(*DAT_00d12b40 + 0x3fa) == 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x244) + 0xaa);
    fVar6 = (float10)FUN_005885d0();
    if ((float10)fVar1 < fVar6) {
      return false;
    }
  }
  if ((DAT_00dc18e8 != '\0') && ((DAT_00dc18e9 != '\0' || (param_1 != DAT_00d0ca90)))) {
    if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) {
      return false;
    }
    iVar2 = *(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30);
    if ((iVar2 != 0) && (*(char *)(*(int *)(param_1 + 0x12da) + (iVar2 * 0xb + 0xb) * 4) == '\0')) {
      return false;
    }
    _param_3 = param_2;
    if ((*(int *)(param_1 + 0x3350) != 0) &&
       (iVar2 = *(int *)(param_1 + 6), iVar4 = FUN_00584c90(), iVar4 != iVar2)) {
      FUN_00584c90();
    }
    if ((*(int *)(iVar5 + 0x3350) != 0) && (iVar5 = FUN_00584c90(), iVar5 != param_2)) {
      _param_3 = FUN_00584c90();
    }
    FUN_005861e0(_param_3);
    if (extraout_AL != '\0') {
      return false;
    }
  }
  if (param_2 == 0xa3) {
    return false;
  }
  if ((&DAT_0089cad8)[param_2] != 0) {
    if (param_2 != *(int *)(param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
    return false;
  }
  return false;
}


