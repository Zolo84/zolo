// FUN_0050c0d0 @ 50c0d0 size=620

undefined1 __thiscall FUN_0050c0d0(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1d:
  case 0x21:
    cVar6 = FUN_0044beb0();
    if ((cVar6 == '\0') &&
       ((iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 8)), *(int *)(iVar8 + 0x3d8) == 0 ||
        ((iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 8)), *(int *)(iVar8 + 0x3d8) != 0 &&
         (iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 8)),
         *(int *)(*(int *)(iVar8 + 0x3d8) + 6) != 0x157)))))) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 4) == 0) || (cVar6 = FUN_0042dd70(DAT_00893530 + 0x14), cVar6 != '\0')) {
    return 0;
  }
  if (((*(int *)(param_1 + 4) != 0) && (*(short *)(param_1 + 0x1c) != 0)) &&
     (cVar6 = FUN_0042dd70(DAT_00893530 + 0x14), cVar6 == '\0')) {
    return 0;
  }
  uVar2 = *(undefined4 *)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
  if (((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x11) == '\0')) &&
     ((param_2[3] != *(int *)(param_1 + 8) &&
      (cVar6 = (**(code **)(*param_2 + 0x28))(), cVar6 == '\0')))) {
    uVar7 = FUN_005bc744(param_2,param_2[3],*(undefined4 *)(param_1 + 8));
    FUN_0042db80(uVar7);
  }
  FUN_004e9370(*(undefined4 *)(param_1 + 8));
  cVar6 = FUN_004ec380(uVar2,uVar1);
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    return 0;
  }
  FUN_004e9370(*(undefined4 *)(param_1 + 8));
  cVar6 = FUN_004ec380(uVar2,uVar1);
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    return 0;
  }
  iVar8 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  if (iVar8 < 1) {
    return 0;
  }
  cVar6 = (**(code **)(*param_2 + 0x30))();
  if ((cVar6 != '\0') && (cVar6 = FUN_0051a490(), cVar6 != '\0')) {
    return 0;
  }
  piVar5 = *(int **)((int)param_2 + 0x26);
  do {
    if (piVar5 == (int *)0x0) {
      cVar6 = (**(code **)(*param_2 + 0x30))();
      if (cVar6 != '\0') {
        iVar8 = FUN_0051b230();
        if ((3 < *(int *)(iVar8 + 0x3ac)) && (*(int *)(iVar8 + 0x3ac) < 6)) {
          return 0;
        }
      }
      return 1;
    }
    piVar3 = (int *)piVar5[2];
    iVar8 = *piVar5;
    fVar4 = *(float *)(iVar8 + 0xf4);
    fVar9 = (float10)FUN_004fd510();
    if ((float10)fVar4 < fVar9 * (float10)*(float *)(param_1 + 0x2e)) {
      return 0;
    }
    piVar5 = piVar3;
  } while (*(float *)(iVar8 + 0xf0) * *(float *)(param_1 + 0xc) <= *(float *)(iVar8 + 0xec));
  return 0;
}


