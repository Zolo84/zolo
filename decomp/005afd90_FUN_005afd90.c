// FUN_005afd90 @ 5afd90 size=627

void FUN_005afd90(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_8 [8];
  
  if (param_2 == 0) {
    return;
  }
  iVar8 = DAT_00ab27b4 + param_2 * 0x4b2;
  cVar3 = FUN_005239c0();
  if ((cVar3 == '\0') && (param_1[0x99] != 0x17)) {
    FUN_005af430(iVar8,param_1);
    FUN_005af530(iVar8,param_1);
  }
  if ((char)param_1[0x5f] != '\0') goto LAB_005afed3;
  if (((param_1[3] == param_2) && (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0')) &&
     (*(char *)((int)param_1 + 0x17b) == '\0')) {
    bVar2 = false;
    piVar4 = (int *)param_1[0x48];
    if ((int *)param_1[0x48] != (int *)0x0) {
      do {
        piVar1 = piVar4 + 2;
        if (*(int *)(*(int *)(*piVar4 + 0x78) + 0x12) == param_2) {
          bVar2 = true;
        }
        piVar4 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      if (bVar2) goto LAB_005afe54;
    }
    iVar5 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    if (0 < iVar5) {
      uVar6 = FUN_004e8b50(param_1[0x92]);
      FUN_004e8f50(uVar6);
    }
  }
LAB_005afe54:
  if ((((char)param_1[0x5f] == '\0') && (param_1[3] == param_2)) &&
     ((cVar3 = FUN_00523690(param_2), cVar3 != '\0' &&
      ((cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar3 != '\0' &&
       (FUN_005af6b0(iVar8,param_1), *(int *)((int)param_1 + 0x176) == 0)))))) {
    cVar3 = FUN_00523690(param_2);
    if (cVar3 != '\0') {
      FUN_005af8a0(iVar8,param_1);
    }
    if ((*(int *)((int)param_1 + 0x176) == 0) && (cVar3 = FUN_00523690(param_2), cVar3 != '\0')) {
      uVar6 = (**(code **)(*param_1 + 0x18))();
      FUN_0050f230(uVar6);
    }
  }
LAB_005afed3:
  cVar3 = (**(code **)(*param_1 + 0x2c))();
  if ((cVar3 != '\0') &&
     (cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar3 != '\0')) {
    pcVar7 = (char *)FUN_0042e060(auStack_8,param_1 + 0x4d);
    if ((0x17 < (int)*pcVar7 +
                ((int)pcVar7[1] + ((int)pcVar7[2] + *(short *)(pcVar7 + 4) * 0xc) * 0x1e) * 0x18) &&
       ((cVar3 = FUN_00525750(param_2), cVar3 != '\0' && (*(int *)((int)param_1 + 0x176) == 0)))) {
      uVar6 = FUN_004e9370(param_1[0x9a]);
      FUN_005af8a0(uVar6,param_1);
      iVar8 = DAT_00893530;
      if (*(int *)((int)param_1 + 0x176) != 0) {
        param_1[0x4d] = *(int *)(DAT_00893530 + 0x14);
        *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar8 + 0x18);
      }
    }
  }
  iVar8 = (**(code **)(param_1[0x47] + 4))();
  if ((((iVar8 == 0) && (*(int *)((int)param_1 + 0x176) == 0)) &&
      (*(int *)((int)param_1 + 0x282) == param_2)) &&
     (cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar3 != '\0')) {
    if ((param_1[0x99] == 0x12) || (*(char *)((int)param_1 + 0x28a) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar8 = FUN_0051b230();
    if (((*(int *)(iVar8 + 0x254) == 8) || (*(int *)(iVar8 + 0x254) == 9)) && (bVar2)) {
      FUN_00524840();
    }
  }
  return;
}


