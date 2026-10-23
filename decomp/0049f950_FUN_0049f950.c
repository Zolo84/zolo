// FUN_0049f950 @ 49f950 size=546

uint __thiscall FUN_0049f950(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  iVar1 = (int)param_2;
  if (*(int *)((int)param_2 + 0x6c) == 0) {
    piVar3 = *(int **)((int)param_2 + 0x58);
    if (((piVar3 != (int *)0x0) && (piVar3 != *(int **)((int)param_1 + 6))) ||
       (piVar3 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),*(char *)((int)param_2 + 0x158)),
       *(char *)((int)param_2 + 0x158) == '\0')) goto LAB_0049fb69;
  }
  else {
    piVar3 = (int *)FUN_00524000();
    if ((char)piVar3 == '\0') goto LAB_0049fb69;
    piVar3 = (int *)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x6c) + 0x11c) + 4))();
    if (piVar3 != (int *)0x0) goto LAB_0049fb69;
    piVar3 = (int *)0x0;
    if ((*(char *)(*(int *)((int)param_2 + 0x6c) + 0x17b) != '\0') ||
       (*(int *)(*(int *)((int)param_2 + 0x6c) + 0xc) < 1)) goto LAB_0049fb69;
    piVar3 = (int *)FUN_00522770();
    if ((piVar3 != param_1) ||
       (piVar3 = *(int **)((int)param_2 + 0x6c), *(char *)((int)piVar3 + 0x251) == '\0'))
    goto LAB_0049fb69;
    if (*(char *)((int)param_2 + 0x160) != '\0') {
      if (piVar3[3] != *(int *)((int)piVar3 + 0x212)) goto LAB_0049fb69;
      uVar4 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))();
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    piVar3 = *(int **)((int)param_2 + 0x88);
    if (piVar3 == (int *)0x0) {
      if (*(char *)(*(int *)((int)param_2 + 0x130) + 0x45c6 + (int)param_1) == '\0') {
        return 0;
      }
    }
    else if (*(char *)((int)piVar3 + 0x453a + (int)param_1) == '\0') goto LAB_0049fb69;
  }
  if (*(char *)((int)param_2 + 0x161) != '\0') {
    cVar2 = FUN_00455130();
    if ((cVar2 != '\0') && (*(int *)((int)param_2 + 0x6c) != 0)) {
      piVar3 = (int *)FUN_004e9370(*(undefined4 *)(*(int *)((int)param_2 + 0x6c) + 0xc));
      if (piVar3[0xf6] == 0) goto LAB_0049fb69;
      iVar5 = FUN_004ece90();
      piVar3 = (int *)0x0;
      if (iVar5 == 0) goto LAB_0049fb69;
    }
  }
  if (-1 < *(int *)((int)param_2 + 0x144)) {
    cVar2 = (**(code **)(*(int *)((int)param_1 + *(int *)((int)param_2 + 0x140) * 0x12 + 0x4be8) +
                        0x24))(*(int *)((int)param_2 + 0x144));
    if ((cVar2 != '\0') &&
       ((iVar5 = *(int *)((int)param_2 + 0x140), *(char *)(iVar5 + 0x4ad0 + (int)param_1) != '\0' ||
        (iVar5 == *(int *)((int)param_2 + 0x130))))) {
LAB_0049fadc:
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  piVar3 = *(int **)((int)param_2 + 0x13c);
  param_2 = (int *)0x0;
  if (0 < (int)piVar3) {
    piVar8 = (int *)(iVar1 + 0x88);
    do {
      iVar6 = FUN_00789ce0(*piVar8,piVar8[5]);
      if ((iVar6 != 0) && (-1 < *(int *)(iVar6 + 0xb8))) {
        uVar7 = (**(code **)(*(int *)((int)param_1 + *(int *)(iVar6 + 0xb4) * 0x12 + 0x55c0) + 0x24)
                )(*(int *)(iVar6 + 0xb8));
        if ((char)uVar7 != '\0') {
          cVar2 = *(char *)(*(int *)(iVar6 + 0xb4) + 0x4b5c + (int)param_1);
          iVar5 = CONCAT31((int3)((uint)uVar7 >> 8),cVar2);
          if ((cVar2 != '\0') || (*(int *)(iVar6 + 0xb4) == *piVar8)) goto LAB_0049fadc;
        }
      }
      piVar3 = (int *)((int)param_2 + 1);
      piVar8 = piVar8 + 1;
      param_2 = piVar3;
    } while ((int)piVar3 < *(int *)(iVar1 + 0x13c));
  }
LAB_0049fb69:
  return (uint)piVar3 & 0xffffff00;
}


