// FUN_005088c0 @ 5088c0 size=747

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005088c0(int *param_1,float param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_4;
  
  iVar6 = (int)param_2;
  piVar1 = (int *)(DAT_00ab27b4 + (int)param_2 * 0x4b2);
  if (param_2 == 0.0) {
    if (param_3 != 0) goto LAB_0050894c;
  }
  else {
    if (param_3 != 0) {
LAB_0050894c:
      if (param_1[3] == 0) {
        iVar2 = *(int *)(param_3 + 0x264);
        param_1[0x90] = *(int *)(param_3 + 0xc);
        FUN_005172c0(param_1);
        cVar7 = FUN_00444290();
        if (cVar7 != '\0') {
          uVar9 = *(undefined4 *)(param_1[0x92] + 6);
          uVar8 = (**(code **)(*piVar1 + 0xc))(param_2);
          uVar10 = (**(code **)(*param_1 + 0xc))(uVar8);
          FUN_006eab80(0xad,uVar9,&DAT_0088ebf8,uVar10,uVar8,param_2);
        }
        local_4 = _DAT_007e3380;
        *(undefined1 *)(param_1 + 0x94) = 0;
        piVar1 = *(int **)((int)param_1 + 0x26);
        param_2 = _DAT_007e3380;
        while (piVar1 != (int *)0x0) {
          piVar3 = (int *)piVar1[2];
          iVar4 = *piVar1;
          param_2 = *(float *)(iVar4 + 0x10c) * *(float *)(iVar4 + 0xf0) * _DAT_007e8690 + param_2;
          local_4 = *(float *)(iVar4 + 0x108) * *(float *)(iVar4 + 0xf0) * _DAT_007e8690 + local_4;
          piVar1 = piVar3;
          if (iVar2 != 0x1b) {
            fVar5 = *(float *)(iVar4 + 0xf4) * _DAT_00877370;
            if (fVar5 < _DAT_007e3380) {
              fVar5 = _DAT_007e3380;
            }
            *(float *)(iVar4 + 0xf4) = fVar5;
          }
        }
        iVar2 = param_1[0x92];
        if (*(float *)(iVar2 + 0x39b4) < param_2) {
          param_2 = *(float *)(iVar2 + 0x39b4);
        }
        if (*(float *)(iVar2 + 0x39c4) < local_4) {
          local_4 = *(float *)(iVar2 + 0x39c4);
        }
        FUN_004ed460(param_2,0);
        FUN_004ea3b0(local_4);
        FUN_0049ec10(0,-param_2);
        FUN_0049ec10(5,-local_4);
        iVar2 = DAT_00893530;
        param_1[0x4d] = *(int *)(DAT_00893530 + 0x14);
        *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar2 + 0x18);
        FUN_0051b240(iVar6);
        return;
      }
      cVar7 = (**(code **)(**(int **)(param_3 + 0x2aa) + 0x24))(param_1);
      if (cVar7 == '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
        param_1[0x90] = param_1[3];
        FUN_00517160(param_1);
        cVar7 = FUN_0042e980();
        if (cVar7 != '\0') {
          FUN_006ad4e0(0,&LAB_00509d00,param_1);
        }
        cVar7 = FUN_00444290();
        if (cVar7 == '\0') {
          return;
        }
        uVar9 = *(undefined4 *)(param_1[0x92] + 6);
        uVar8 = (**(code **)(*piVar1 + 0xc))(param_2);
        uVar10 = (**(code **)(*param_1 + 0xc))(uVar8);
        FUN_006eab80(0xac,uVar9,&DAT_0088ebf8,uVar10,uVar8,param_2);
        return;
      }
      FUN_005172c0(param_1);
      return;
    }
    if ((piVar1[0x95] == 8) || (piVar1[0x95] == 9)) {
      if (DAT_00dc4b5e == '\0') {
        return;
      }
      uVar9 = *(undefined4 *)((int)piVar1 + 0x12);
      uVar8 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
      uVar8 = (**(code **)(*param_1 + 0xc))(uVar8);
      uVar9 = (**(code **)(*piVar1 + 0xc))(uVar9,uVar8);
      FUN_00429a00(s_Wrong_province___s___d__for__s___0084a0c4,uVar9);
      return;
    }
  }
  if (param_1[0x90] != 0) {
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  FUN_0051b240(param_2);
  return;
}


