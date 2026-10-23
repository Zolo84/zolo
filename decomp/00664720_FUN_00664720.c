// FUN_00664720 @ 664720 size=345

void __fastcall FUN_00664720(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  if (0 < *(int *)(*(int *)((int)param_1 + 10) + 0x117e4)) {
    iVar4 = (**(code **)(*param_1 + 0x1c4))();
    piVar2 = *(int **)(iVar4 + 4);
joined_r0x00664746:
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar4 = *piVar2;
      cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))();
      piVar2 = piVar1;
      if ((cVar3 != '\0') && (iVar5 = (**(code **)(*(int *)(iVar4 + 0x11c) + 4))(), iVar5 == 0)) {
        iVar5 = FUN_0051b230();
        if ((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) {
          cVar3 = FUN_00664680(iVar4);
          if (cVar3 == '\0') {
            fVar7 = (float10)FUN_0051a470();
            iVar5 = (**(code **)(*(int *)(iVar4 + 0x22) + 4))();
            if ((float)fVar7 < (float)(iVar5 * 0x50)) {
              uVar8 = 0;
              uVar6 = FUN_006649f0(*(undefined4 *)(iVar4 + 0xc),0);
              FUN_006aaee0(iVar4,uVar6,uVar8);
              goto joined_r0x00664746;
            }
            piVar1 = *(int **)(iVar4 + 0x26);
            do {
              if (piVar1 == (int *)0x0) {
                cVar3 = FUN_005177f0();
                if (cVar3 == '\0') goto joined_r0x00664746;
                break;
              }
              iVar5 = *piVar1;
              piVar1 = (int *)piVar1[2];
            } while (*(int *)(iVar5 + 0x134) != 0x1e);
          }
          uVar8 = 0;
          uVar6 = FUN_00664880(iVar4,0);
          uVar6 = FUN_004e9370(uVar6,uVar8);
          FUN_006aaee0(iVar4,uVar6,uVar8);
          goto joined_r0x00664746;
        }
      }
      cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))();
      if ((cVar3 != '\0') && (iVar4 = (**(code **)(*(int *)(iVar4 + 0x11c) + 4))(), iVar4 == 0)) {
        FUN_0051b230();
      }
      goto joined_r0x00664746;
    }
  }
  return;
}


