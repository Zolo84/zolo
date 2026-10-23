// FUN_00407a00 @ 407a00 size=268

void __thiscall FUN_00407a00(int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_2 + 0x238) == 2) {
    iVar2 = *(int *)(param_2 + 0xc);
    iVar7 = *(int *)(param_2 + 0x18);
    iVar6 = FUN_0057adc0(*(undefined4 *)(param_2 + 0x2c));
    piVar1 = param_4 + 1;
    iVar3 = *param_4;
    iVar8 = param_1[6];
    iVar4 = param_1[3];
    param_4 = (int *)param_3[1];
    iVar6 = iVar6 + *piVar1 * iVar7 + iVar3 * iVar2;
    iVar2 = *param_3;
    iVar7 = (**(code **)(*param_1 + 8))();
    iVar8 = iVar7 + iVar2 * iVar4 + (int)param_4 * iVar8;
    iVar7 = param_3[2];
    iVar3 = *(int *)(param_2 + 0xc);
    if ((iVar6 != 0) && (iVar8 != 0)) {
      iVar4 = param_1[6];
      iVar5 = *(int *)(param_2 + 0x18);
      if ((int)param_4 < param_3[3]) {
        do {
          FUN_004295c0(iVar6,iVar8,(iVar7 - iVar2) * iVar3);
          iVar6 = iVar6 + iVar5;
          iVar8 = iVar8 + iVar4;
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < param_3[3]);
      }
    }
    FUN_0057ae50(*(undefined4 *)(param_2 + 0x2c));
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


