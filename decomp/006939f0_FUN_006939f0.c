// FUN_006939f0 @ 6939f0 size=1260

void __fastcall FUN_006939f0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int *piVar11;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  float local_28;
  float local_24;
  float local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d5488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c = param_1;
  FUN_00457e10();
  local_8 = 0;
  piVar8 = *(int **)(*(int *)(param_1 + 10) + 0x4508);
joined_r0x00693a32:
  do {
    do {
      do {
        if (piVar8 == (int *)0x0) {
          local_8 = 0xffffffff;
          FUN_00527230();
          ExceptionList = local_10;
          return;
        }
        local_30 = (int *)piVar8[2];
        piVar11 = (int *)*piVar8;
        piVar3 = (int *)FUN_0051b230();
        local_18 = piVar3;
        cVar2 = (**(code **)(*piVar11 + 0x28))();
        piVar8 = local_30;
      } while (cVar2 == '\0');
      (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
      piVar8 = local_30;
    } while (piVar3[0xf6] == 0);
    local_2c = *(int **)(piVar3[0xf6] + 6);
    piVar4 = (int *)FUN_006a9d50();
    piVar8 = local_30;
  } while ((((local_2c == piVar4) ||
            (((cVar2 = (**(code **)(*(int *)piVar11[0x7d] + 0x100))(), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(int *)piVar11[0x7d] + 0xe4))(), piVar8 = local_30,
              cVar2 == '\0')) || (cVar2 = FUN_00525720(), piVar8 = local_30, cVar2 != '\0')))) ||
           (((cVar2 = (**(code **)(*(int *)((int)piVar11 + 0x22e) + 8))(), piVar8 = local_30,
             cVar2 == '\0' || (*(char *)((int)piVar11 + 0x17b) != '\0')) ||
            (iVar5 = (**(code **)(piVar11[0x47] + 4))(), piVar8 = local_30, iVar5 != 0)))) ||
          (piVar11[3] == 0));
  if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + *(int *)(piVar3[0xf6] + 6) * 0x2c + 0x2c
               ) == '\0') {
    uVar6 = FUN_006a9d50();
    cVar2 = FUN_0044b300(uVar6);
    local_11 = '\x01';
    if (cVar2 != '\0') goto LAB_00693b4e;
  }
  else {
LAB_00693b4e:
    local_11 = '\0';
  }
  uVar6 = FUN_006a9d50();
  cVar2 = FUN_0044b300(uVar6);
  if (cVar2 != '\0') goto code_r0x00693b72;
  goto LAB_00693cb2;
code_r0x00693b72:
  if (((int *)piVar11[0x7d] != (int *)0x0) &&
     (cVar2 = (**(code **)(*(int *)piVar11[0x7d] + 0x104))(), piVar8 = local_30, cVar2 != '\0'))
  goto joined_r0x00693a32;
  piVar8 = *(int **)(*(int *)((int)local_18 + 0x482) + 0x6c);
  local_1c = piVar8;
  cVar2 = FUN_00525660();
  if (cVar2 == '\0') {
    if (piVar8 == (int *)0x0) goto LAB_00693cbd;
    iVar5 = FUN_004ccb2c(*(undefined4 *)(param_1 + 10));
    iVar7 = FUN_006a9d50();
    piVar8 = local_1c;
    if ((iVar5 != iVar7) && (cVar2 = FUN_004ccdd8(), cVar2 != '\0')) {
      iVar5 = FUN_004ccb2c(*(undefined4 *)(param_1 + 10));
      iVar5 = (&DAT_0089cad8)[iVar5];
      if ((iVar5 != 0) && (iVar5 != *(int *)(param_1 + 10))) {
        cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb8) + 0x24))
                          (*(undefined4 *)(iVar5 + 6));
        if (cVar2 != '\0') goto LAB_00693cbd;
        local_2c = (int *)((float)*(int *)(param_1 + 0x50) *
                          *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb86));
        local_34 = (int)ROUND((float)local_2c);
        iVar7 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
        if ((local_34 < iVar7 + *(int *)(param_1 + 0x54)) ||
           (iVar7 = FUN_006a9d50(), *(char *)(iVar7 + 0x11862 + iVar5) != '\0')) goto LAB_00693cbd;
        local_2c = (int *)(*(int *)(param_1 + 10) + 0xe);
        uVar6 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
        uVar6 = (**(code **)(*piVar11 + 0xc))(uVar6);
        uVar6 = (**(code **)(*local_2c + 0xc))(uVar6);
        FUN_00458570(s__s_turns___s__over_to__s_00867f0c,uVar6);
        FUN_0045c890(piVar11,iVar5);
        iVar5 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      }
LAB_00693cb2:
      piVar8 = local_30;
      if (local_11 == '\0') goto joined_r0x00693a32;
      goto LAB_00693cbd;
    }
  }
  if (piVar8 != (int *)0x0) {
    iVar5 = FUN_004ccb2c(*(undefined4 *)(param_1 + 10));
    iVar7 = FUN_006a9d50();
    if (iVar5 == iVar7) {
      puVar9 = *(undefined4 **)(param_1 + 0x278);
      do {
        if (puVar9 == (undefined4 *)0x0) goto LAB_00693cbd;
        puVar1 = (undefined4 *)puVar9[2];
        local_2c = (int *)*puVar9;
        puVar9 = puVar1;
      } while ((local_2c == (int *)0x0) ||
              (iVar5 = FUN_006813c0(*(undefined4 *)((int)local_18 + 0x12)), iVar5 == 0));
      local_2c = *(int **)((int)local_2c + 0x12);
      uVar6 = (**(code **)(*piVar11 + 0x10))();
      (*(code *)local_2c[0x6a])(uVar6);
      piVar8 = local_30;
      goto joined_r0x00693a32;
    }
  }
LAB_00693cbd:
  FUN_006a9d50();
  local_18 = (int *)0x0;
  local_24 = 1e+06;
  piVar3 = *(int **)(*(int *)(param_1 + 10) + 0xe86e);
  local_2c = (int *)0x0;
  local_28 = 1e+06;
  piVar8 = local_30;
  if (piVar3 != (int *)0x0) {
    do {
      local_1c = (int *)piVar3[2];
      iVar5 = *piVar3;
      local_38 = iVar5;
      cVar2 = (**(code **)(*(int *)(iVar5 + 0x28) + 8))();
      if ((cVar2 == '\0') && (*(undefined4 **)(iVar5 + 0x2c) != (undefined4 *)0x0)) {
        local_38 = local_38 + 0x3a;
        puVar9 = *(undefined4 **)(iVar5 + 0x2c);
        do {
          puVar1 = (undefined4 *)puVar9[2];
          local_20 = 0.0;
          piVar8 = (int *)*puVar9;
          iVar5 = FUN_0051b230();
          piVar3 = (int *)FUN_004c7fad(local_40,*(undefined4 *)(iVar5 + 0x482));
          if (*piVar3 != 0) {
            local_20 = -1000.0;
          }
          fVar10 = (float10)FUN_0044a9c0(*(undefined4 *)((int)piVar8 + 0x12),piVar11[3]);
          fVar10 = fVar10 + (float10)local_20;
          if (fVar10 < (float10)local_24) {
            local_24 = (float)fVar10;
            local_18 = piVar8;
          }
          if ((0 < piVar8[0xf7]) && (fVar10 < (float10)local_28)) {
            local_28 = (float)fVar10;
            local_2c = piVar8;
          }
          param_1 = local_3c;
          puVar9 = puVar1;
        } while (puVar1 != (undefined4 *)0x0);
      }
      piVar4 = local_18;
      piVar3 = local_1c;
    } while (local_1c != (int *)0x0);
    piVar8 = local_30;
    if (local_18 != (int *)0x0) {
      cVar2 = FUN_006ac380(piVar11,*(undefined4 *)((int)local_18 + 0x12));
      if (cVar2 == '\0') {
        iVar5 = FUN_006aaff0(piVar11,piVar4,0);
        piVar8 = local_30;
        if ((iVar5 != 0) && (local_2c != (int *)0x0)) {
          iVar5 = *(int *)((int)local_2c + 0x12);
          iVar7 = (**(code **)(*piVar11 + 0x10))();
          piVar8 = local_30;
          if (((*(int *)(param_1 + 0x7e) != 0) &&
              (((*(char *)(*(int *)(param_1 + 0x7e) + 0xe) != '\0' &&
                (*(int *)(iVar7 + 0xc) != iVar5)) &&
               (cVar2 = FUN_0051a4c0(), piVar8 = local_30, cVar2 != '\0')))) &&
             (cVar2 = FUN_006a0de0(iVar7,iVar5), piVar8 = local_30, cVar2 != '\0')) {
            *(int *)(iVar7 + 0x298) = iVar5;
            *(undefined1 *)(iVar7 + 0x29c) = 0;
            (**(code **)(**(int **)(param_1 + 0x7e) + 0x1a8))(iVar7);
            piVar8 = local_30;
          }
        }
      }
      else {
        uVar6 = *(undefined4 *)((int)piVar4 + 0x12);
        FUN_00522770(piVar11,uVar6);
        FUN_0045fed0(piVar11,uVar6);
        piVar8 = local_30;
      }
    }
  }
  goto joined_r0x00693a32;
}


