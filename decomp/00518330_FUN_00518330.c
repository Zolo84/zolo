// FUN_00518330 @ 518330 size=1073

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00518330(int param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int local_30 [2];
  int local_28;
  int *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  piVar6 = param_2;
  local_8 = param_1;
  cVar7 = FUN_00523ab0(*(undefined4 *)(param_1 + 0x248),param_3);
  if (cVar7 != '\0') {
    return 1;
  }
  if (*(int *)((int)param_2 + 0x176) != 0) {
    return 1;
  }
  iVar9 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  if (0 < iVar9) {
    iVar9 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
    if (((0 < iVar9) &&
        ((((*(int *)(param_1 + 0x264) < 2 || (cVar7 = FUN_0050c360(param_1), cVar7 == '\0')) &&
          (iVar9 = *(int *)(param_1 + 0x264), iVar9 != 0x1c)) && ((iVar9 != 2 && (iVar9 != 0x1b)))))
        ) && ((iVar9 != 0x17 &&
              (((cVar7 = (**(code **)(*param_2 + 0x70))(), *(int *)(local_8 + 0x264) != 0x18 ||
                (param_2[0x99] == 0x17)) || (cVar7 != '\0')))))) {
      if (*(char *)(local_8 + 0x271) == '\0') {
        FUN_0051b230();
        cVar8 = FUN_004e5a40();
        if (cVar8 == '\0') {
          return 0;
        }
      }
      if (*(char *)(local_8 + 0x270) == '\0') {
        FUN_0051b230();
        cVar8 = FUN_004e5a40();
        if (cVar8 != '\0') {
          return 0;
        }
      }
      local_1c = 1.0;
      local_20 = 0.0;
      local_c = 1.0;
      if ((*(int *)(local_8 + 0x264) == 0x18) && (param_2[0x99] == 0x17)) {
        local_1c = *(float *)(*(int *)(local_8 + 0x248) + 0xe3c0) + _DAT_007e3374;
        pcVar10 = (char *)FUN_0042e060(local_30,param_2 + 0x4d);
        iVar9 = (((int)pcVar10[1] + ((int)pcVar10[2] + *(short *)(pcVar10 + 4) * 0xc) * 0x1e) *
                 -0x18 + 6) - (int)*pcVar10;
        if (0 < iVar9) {
          local_20 = (float)(iVar9 * 0x14);
        }
        iVar9 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        local_24 = (int *)(float)iVar9;
        iVar9 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
        local_c = (float)local_24 / (float)iVar9;
        if ((float)_DAT_007e7828 < local_c) {
          local_c = 1.0;
        }
      }
      local_14 = 1.0;
      fVar1 = (*(float *)(*(int *)(local_8 + 0x248) + 0x37c2) + *(float *)(param_2[0x92] + 0x37c6))
              - _DAT_007e7a60;
      if (_DAT_007e3380 < fVar1) {
        local_14 = fVar1 * _DAT_007e543c + _DAT_007e3374;
      }
      piVar2 = *(int **)((int)param_2 + 0x26);
      iVar9 = local_8;
      while (piVar2 != (int *)0x0) {
        local_24 = (int *)piVar2[2];
        local_30[0] = *piVar2;
        piVar2 = local_24;
        if (*(char *)(local_30[0] + 0x161) != '\0') {
          local_10 = *(float *)(local_30[0] + 0x2dc) * local_c;
          local_18 = local_10 * local_14;
          iVar4 = local_30[0];
          piVar5 = *(int **)(iVar9 + 0x26);
          while (piVar2 = local_24, piVar5 != (int *)0x0) {
            piVar2 = (int *)piVar5[2];
            iVar11 = *piVar5;
            piVar5 = piVar2;
            if (*(char *)(iVar11 + 0x161) != '\0') {
              if (*(char *)(iVar4 + 0x15e) == '\0') {
                fVar1 = *(float *)(iVar11 + 0x2cc);
                if (*(char *)(iVar11 + 0x15e) == '\0') goto LAB_00518600;
                fVar1 = fVar1 * local_10;
              }
              else {
                fVar1 = *(float *)(iVar11 + 0x2d4);
                if (*(int *)(iVar9 + 0x264) == 0x18) {
LAB_00518600:
                  fVar1 = fVar1 * local_18;
                }
                else {
                  fVar1 = fVar1 * local_10;
                }
              }
              cVar8 = (**(code **)(*(int *)((int)piVar6 + 0x22e) + 8))();
              fVar3 = _DAT_007e34c0;
              if (cVar8 == '\0') {
                fVar3 = _DAT_007e6808;
              }
              param_2 = (int *)(fVar1 * fVar3);
              switch(piVar6[0x99]) {
              case 2:
                fVar1 = _DAT_00877450 / *(float *)(piVar6[0x92] + 0xe368);
                break;
              default:
                goto switchD_00518643_caseD_3;
              case 0x17:
                fVar1 = _DAT_008774f8 / *(float *)(piVar6[0x92] + 0xe3bc);
                break;
              case 0x1c:
                fVar1 = _DAT_00877524 / *(float *)(piVar6[0x92] + 0xe3d0);
                break;
              case 0x20:
                fVar1 = _DAT_00877544 / *(float *)(piVar6[0x92] + 0xe3e0);
              }
              param_2 = (int *)(fVar1 * (float)param_2);
switchD_00518643_caseD_3:
              iVar9 = FUN_00522770();
              if (iVar9 != 0) {
                iVar9 = FUN_00522770();
                param_2 = (int *)(*(float *)(iVar9 + 0x13c60) * (float)param_2);
              }
              iVar9 = FUN_0051b230();
              switch(*(undefined4 *)(iVar9 + 0x3ac)) {
              case 2:
              case 3:
                param_2 = (int *)((float)param_2 * _DAT_007e34c0);
                break;
              case 4:
              case 5:
                param_2 = (int *)((float)param_2 * _DAT_007e40b8);
              }
              param_2 = (int *)((float)param_2 * local_1c + local_20);
              if (cVar7 != '\0') {
                param_2 = (int *)((float)param_2 * _DAT_00dc16d4);
              }
              if ((float)param_2 < _DAT_007e3374) {
                param_2 = (int *)0x3f800000;
              }
              local_28 = (int)ROUND((float)param_2);
              iVar11 = _rand();
              iVar4 = local_30[0];
              iVar9 = local_8;
              if (iVar11 % 10000 < local_28) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


