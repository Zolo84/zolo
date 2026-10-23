// FUN_006ac380 @ 6ac380 size=469

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006ac380(int param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  iVar10 = (int)param_2;
  iVar5 = FUN_00522770();
  if (*(char *)(iVar5 + 0x37a3) != '\0') {
    iVar5 = (int)param_2;
    uVar12 = param_3;
    FUN_00522770(param_2,param_3);
    cVar4 = FUN_0049f8d0(iVar5,uVar12);
    if (cVar4 != '\0') {
      iVar5 = FUN_005bc744(param_2,*(undefined4 *)((int)param_2 + 0xc),param_3);
      if (DAT_00877648 <= iVar5) {
        return 1;
      }
      iVar6 = FUN_0044e580(param_2,param_3);
      iVar8 = *(int *)(param_1 + 10);
      FUN_00527630(0);
      iVar7 = __ftol();
      iVar8 = (**(code **)(*(int *)(iVar8 + 0x4518) + 4))();
      if ((iVar6 * 3 + 3) * 8 < iVar5) {
        piVar1 = (int *)((int)param_2 + 0x22);
        iVar9 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if ((iVar9 <= iVar7 - iVar8) || (cVar4 = FUN_00525660(), cVar4 != '\0')) {
          if (*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xd0) * 0x18 < iVar5) {
            return 1;
          }
          iVar8 = *(int *)((int)param_2 + 0x26);
          param_2 = 0.0;
          while (iVar8 != 0) {
            iVar8 = *(int *)(iVar8 + 8);
            fVar11 = (float10)FUN_004fd5d0(1);
            param_2 = (float)(fVar11 + (float10)param_2);
          }
          cVar4 = (**(code **)(*(int *)(iVar10 + 0x22e) + 8))();
          if (cVar4 == '\0') {
            param_2 = param_2 * (float)_DAT_007e6838;
          }
          fVar2 = (float)iVar5 * param_2 * DAT_00dc17fc;
          fVar3 = fVar2 * _DAT_007e67d8;
          iVar10 = (**(code **)(*piVar1 + 4))();
          if ((fVar2 * _DAT_007e5dcc + (float)iVar10 * (float)iVar6 * _DAT_00dc17f0) * _DAT_007e67fc
              < fVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


