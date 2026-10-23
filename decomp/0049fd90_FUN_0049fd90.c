// FUN_0049fd90 @ 49fd90 size=636

uint __thiscall FUN_0049fd90(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char extraout_AL;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint3 uVar8;
  uint3 extraout_var;
  undefined4 uVar9;
  
  uVar3 = FUN_004e9370(param_3);
  if (*(char *)(param_2 + 0x154) != '\0') {
    return uVar3 & 0xffffff00;
  }
  if ((*(int *)(uVar3 + 0x3d8) != 0) &&
     (uVar4 = FUN_0044b280(*(undefined4 *)(param_1 + 6)), (char)uVar4 != '\0')) {
    return uVar4 & 0xffffff00;
  }
  if ((*(int *)(uVar3 + 0x254) == 8) || (*(int *)(uVar3 + 0x254) == 9)) {
    return 0;
  }
  uVar4 = FUN_004a3020(uVar3,0);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  if ((*(char *)(param_2 + 0x162) != '\0') && (param_4 == (int *)0x0)) {
    return 0;
  }
  uVar9 = 0;
  uVar5 = FUN_004e9370(*(undefined4 *)(param_2 + 0x148),0);
  cVar2 = FUN_004a3020(uVar5,uVar9);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_2 + 0x148) = 0;
  }
  iVar6 = FUN_004e9370(*(undefined4 *)(param_2 + 0x148));
  uVar5 = FUN_004a3020(iVar6,0);
  if ((char)uVar5 == '\0') {
    *(undefined4 *)(param_2 + 0x148) = 0;
  }
  if ((*(char *)(param_2 + 0x162) == '\0') ||
     (uVar4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_00dc191d), DAT_00dc191d == '\0')) {
    uVar4 = *(uint *)(param_2 + 0x148);
    if (uVar4 == 0) {
      uVar4 = FUN_0044e1d0();
      if ((uVar4 != 0) && (iVar6 = *(int *)(uVar3 + 0x482), iVar6 != 0)) {
        puVar7 = (undefined4 *)FUN_0044e1d0();
        (**(code **)*puVar7)();
        uVar4 = FUN_004ccb10(iVar6);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
      }
      if (*(int *)(uVar3 + 0x3d4) != param_1) {
        return uVar4 & 0xffffff00;
      }
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x482);
      if (((iVar6 != 0) && (puVar7 = *(undefined4 **)(uVar3 + 0x482), puVar7 != (undefined4 *)0x0))
         && (uVar4 = puVar7[0x13], uVar4 == 0)) {
        (**(code **)*puVar7)();
        uVar4 = FUN_004ccb10(iVar6);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
      }
    }
  }
  iVar6 = CONCAT31((int3)(uVar4 >> 8),*(char *)(param_2 + 0x161));
  if (*(char *)(param_2 + 0x161) != '\0') {
    iVar6 = *(int *)(param_2 + 0x148);
    if (((iVar6 != 0) && (*(int *)(uVar3 + 0x12) != iVar6)) &&
       (uVar4 = FUN_004e9370(iVar6), *(int *)(uVar4 + 0x46a) != 0)) {
      return uVar4 & 0xffffff00;
    }
    if (*(int *)(uVar3 + 0x46a) == 0) {
      return 0;
    }
    iVar6 = FUN_004ece90();
    if ((iVar6 == 0) && (iVar6 = *(int *)(param_2 + 0x148), iVar6 == 0)) {
      return 0;
    }
  }
  iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(param_2 + 0x160));
  if (*(char *)(param_2 + 0x160) == '\0') {
LAB_0049ffd1:
    uVar8 = (uint3)((uint)iVar6 >> 8);
    if (*(char *)(param_2 + 0x162) == '\0') goto LAB_004a0003;
  }
  else {
    iVar6 = FUN_004ece80();
    if (iVar6 == 0) {
      return 0;
    }
    if (((param_4 == (int *)0x0) || (iVar6 = (**(code **)(*param_4 + 0x30))(), (char)iVar6 == '\0'))
       || (iVar6 = (**(code **)(*(int *)((int)param_4 + 0x22) + 4))(), iVar6 < DAT_00dc1614))
    goto LAB_0049ffd1;
    uVar8 = (uint3)((uint)iVar6 >> 8);
    if (*(char *)(param_2 + 0x162) == '\0') {
      return (uint)uVar8 << 8;
    }
  }
  puVar7 = *(undefined4 **)((int)param_4 + 0x26);
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return (uint)uVar8 << 8;
    }
    puVar1 = (undefined4 *)puVar7[2];
    FUN_004a4150(*puVar7,param_2);
    uVar8 = extraout_var;
    puVar7 = puVar1;
  } while (extraout_AL == '\0');
LAB_004a0003:
  return CONCAT31(uVar8,1);
}


