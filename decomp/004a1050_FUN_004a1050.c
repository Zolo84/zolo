// FUN_004a1050 @ 4a1050 size=2656

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_004a1050(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = param_4;
  iVar6 = param_2;
  iVar7 = (&DAT_0089cad8)[param_4];
  if (param_2 == 0x1a) {
    uVar2 = FUN_004a3f60();
    return uVar2;
  }
  if (iVar7 == 0) {
    return false;
  }
  iVar4 = FUN_00585e50(param_2,param_3,iVar7);
  if (0 < iVar4) {
    param_4 = param_1[0xe72];
    iVar4 = FUN_00585e50(iVar6,param_3,iVar7);
    iVar5 = __ftol();
    iVar6 = param_2;
    if (iVar5 < iVar4) {
      return false;
    }
  }
  switch(iVar6) {
  case 0:
    uVar2 = (**(code **)(*param_1 + 0x450))(iVar1,0);
    return uVar2;
  case 1:
    uVar2 = FUN_004a30f0(iVar1);
    return uVar2;
  case 2:
    if (((param_1[0xcd4] != 0) && (cVar3 = FUN_004a30f0(iVar1), cVar3 != '\0')) &&
       ((cVar3 = FUN_004a1de0(param_1[0xcd4],iVar1), cVar3 != '\0' &&
        (cVar3 = FUN_004a1fe0(param_1[0xcd4]), cVar3 != '\0')))) {
      return true;
    }
    break;
  case 3:
    if (*(int *)(iVar7 + 0x3350) == 0) {
      return false;
    }
    cVar3 = FUN_004a1fe0(*(int *)(iVar7 + 0x3350));
    if (cVar3 == '\0') {
      return false;
    }
    if (iVar1 == 0) {
      return false;
    }
    if (iVar1 == 0xa3) {
      return false;
    }
    if (iVar1 == 0x157) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 == *(int *)((int)param_1 + 6)) {
      return false;
    }
    cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
    if (cVar3 != '\0') {
      return false;
    }
    iVar7 = FUN_00584c90();
    bVar8 = iVar7 == iVar1;
    goto LAB_004a1901;
  case 4:
    if (param_1[0xcd4] == 0) {
      return false;
    }
    cVar3 = FUN_004a1c10(param_1[0xcd4]);
    goto LAB_004a18be;
  case 5:
    if (param_1[0xcd4] == 0) {
      return false;
    }
    cVar3 = FUN_00584e20(iVar1);
    if (cVar3 == '\0') {
      return false;
    }
    iVar7 = *(int *)((int)param_1 + 6);
    iVar6 = FUN_00584c90();
    if (iVar6 != iVar7) {
      return false;
    }
    cVar3 = *(char *)(*(int *)((int)param_1 + 0x12da) + 0x32 + iVar1 * 0x2c);
    goto LAB_004a123e;
  case 6:
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 != *(int *)((int)param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
    return false;
  case 7:
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 == *(int *)((int)param_1 + 6)) {
      return false;
    }
    goto LAB_004a198f;
  case 8:
    cVar3 = FUN_005861a0(iVar1);
    if (cVar3 == '\x01') {
      return false;
    }
    cVar3 = *(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c);
LAB_004a123e:
    if (cVar3 == '\0') {
LAB_004a1246:
      cVar3 = FUN_004a0a20(iVar1);
      if (((cVar3 != '\0') && (iVar1 != 0)) &&
         ((iVar1 != 0xa3 &&
          (((iVar1 != 0x157 && ((&DAT_0089cad8)[iVar1] != 0)) &&
           (iVar1 != *(int *)((int)param_1 + 6))))))) {
LAB_004a18fa:
        cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
        bVar8 = cVar3 == '\0';
LAB_004a1901:
        if (bVar8) {
          return true;
        }
      }
    }
    break;
  case 9:
    cVar3 = FUN_005861a0(iVar1);
    if (cVar3 != '\0') {
      param_3 = param_1[0x1142];
      do {
        if (param_3 == 0) goto LAB_004a1246;
        FUN_00498700(&param_2,0);
        iVar7 = FUN_0051b230();
      } while ((*(int *)(iVar7 + 0x3d4) == 0) ||
              (iVar7 = FUN_0051b230(), *(int *)(*(int *)(iVar7 + 0x3d4) + 6) != iVar1));
    }
    break;
  case 10:
    iVar7 = (&DAT_0089cad8)[iVar1];
    cVar3 = FUN_005861a0(*(undefined4 *)((int)param_1 + 6));
    if ((iVar7 == 0) == (bool)cVar3) {
      return false;
    }
    goto LAB_004a18b6;
  case 0xb:
    if (param_1[0xcd4] == 0) {
      return false;
    }
    if (*(int *)(iVar7 + 0x3350) != param_1[0xcd4]) {
      return false;
    }
    if (*(char *)(*(int *)((int)param_1 + 6) + 0x34ac + iVar7) != '\0') {
      return false;
    }
    if (((iVar1 != 0) && (iVar1 != 0xa3)) && (iVar1 != 0x157)) {
      if ((&DAT_0089cad8)[iVar1] == 0) {
        return false;
      }
      if (iVar1 != *(int *)((int)param_1 + 6)) {
        cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
        return cVar3 == '\0';
      }
      return false;
    }
    return false;
  default:
    return true;
  case 0xd:
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (param_1[0xcd4] != 0) {
      if (param_1[0xcd4] == *(int *)((&DAT_0089cad8)[iVar1] + 0x3350)) {
        return true;
      }
      return false;
    }
    return false;
  case 0xe:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) != '\0') {
      return false;
    }
    cVar3 = FUN_005861c0(iVar1);
    if (cVar3 != '\0') {
      return false;
    }
    if (*(float *)(param_1[0x91] + 0x3a) < _DAT_007e3374) {
      return false;
    }
    goto LAB_004a1a82;
  case 0xf:
    uVar2 = FUN_004a0b90(iVar1);
    return uVar2;
  case 0x10:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) == '\0') {
      return false;
    }
    cVar3 = FUN_004a0c10(iVar1);
    if (cVar3 == '\0') {
      return false;
    }
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 != *(int *)((int)param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
    return false;
  case 0x11:
    if (((((*(char *)(iVar1 + 0x3354 + (int)param_1) != '\0') && (iVar1 != 0)) &&
         ((iVar1 != 0xa3 && ((iVar1 != 0x157 && ((&DAT_0089cad8)[iVar1] != 0)))))) &&
        (iVar1 != *(int *)((int)param_1 + 6))) &&
       ((((cVar3 = FUN_0042dd70(DAT_00893530 + 0x14), cVar3 == '\0' && ((&DAT_0089cad8)[iVar1] != 0)
          ) && (_DAT_007e3374 <= *(float *)(param_1[0x91] + 0x32))) &&
        (cVar3 = FUN_005861c0(iVar1), cVar3 == '\0')))) {
      return true;
    }
    break;
  case 0x12:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) != '\0') {
      return false;
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30);
    if ((iVar7 != 0) && (iVar7 != *(int *)((int)param_1 + 6))) {
      return false;
    }
    iVar7 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30);
    if ((iVar7 != 0) && (iVar7 != iVar1)) {
      return false;
    }
    if (((iVar1 != 0) && (iVar1 != 0xa3)) && (iVar1 != 0x157)) {
      if ((&DAT_0089cad8)[iVar1] == 0) {
        return false;
      }
      if (iVar1 != *(int *)((int)param_1 + 6)) {
        cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
        return cVar3 == '\0';
      }
      return false;
    }
    return false;
  case 0x13:
    cVar3 = FUN_005861e0(iVar1);
    if (cVar3 == '\x01') {
      return false;
    }
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + (iVar1 * 0xb + 0xb) * 4) != '\0') {
      return false;
    }
LAB_004a18b6:
    cVar3 = FUN_004a0a20(iVar1);
LAB_004a18be:
    if (cVar3 == '\0') {
      return false;
    }
    if (iVar1 == 0) {
      return false;
    }
    if (iVar1 == 0xa3) {
      return false;
    }
    if (iVar1 == 0x157) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 == *(int *)((int)param_1 + 6)) {
      return false;
    }
    goto LAB_004a18fa;
  case 0x14:
    cVar3 = FUN_005861e0(iVar1);
    if (cVar3 == '\0') {
      return false;
    }
    if (*(float *)(param_1[0x91] + 0x36) < _DAT_007e3374) {
      return false;
    }
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    iVar6 = *(int *)((int)param_1 + 6);
    goto LAB_004a1982;
  case 0x15:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) != '\0') {
      return false;
    }
    iVar6 = *(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30);
    if ((iVar6 != 0) && (iVar6 != *(int *)((int)param_1 + 6))) {
      return false;
    }
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30);
    if ((iVar6 != 0) && (iVar6 != iVar1)) {
      return false;
    }
    cVar3 = (**(code **)(*(int *)(param_1[0x48] + 0x1c0) + 0x24))(iVar1);
    if (cVar3 != '\0') {
      return false;
    }
    cVar3 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x120) + 0x1c0) + 0x24))
                      (*(undefined4 *)((int)param_1 + 6));
    if (cVar3 != '\0') {
      return false;
    }
    if (DAT_00dc1540 == '\0') {
      return false;
    }
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 != *(int *)((int)param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
    return false;
  case 0x16:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + 0x35 + iVar1 * 0x2c) == '\0') {
      return false;
    }
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
    if (iVar1 != *(int *)((int)param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
    return false;
  case 0x17:
    iVar7 = FUN_00428ee0(&stack0x00000010);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar7 + -8;
    }
    if ((*(int *)(iVar7 + 0x16) != *(int *)((int)param_1 + 6)) &&
       (*(int *)(iVar7 + 0x1a) != *(int *)((int)param_1 + 6))) {
      return false;
    }
    goto LAB_004a1a82;
  case 0x18:
    if (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) == '\0') {
      return false;
    }
LAB_004a1a82:
    uVar2 = FUN_004a0a20(iVar1);
    return uVar2;
  case 0x19:
    iVar6 = *(int *)((int)param_1 + 6);
    if (*(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30) != iVar6) {
      return false;
    }
    if (((iVar1 == 0) || (iVar1 == 0xa3)) || (iVar1 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[iVar1] == 0) {
      return false;
    }
LAB_004a1982:
    if (iVar1 == iVar6) {
      return false;
    }
LAB_004a198f:
    cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
    return cVar3 == '\0';
  case 0x1b:
    if ((param_1[0xcd4] != 0) && (*(int *)(iVar7 + 0x3350) == param_1[0xcd4])) {
      return true;
    }
    return false;
  }
  return false;
}


