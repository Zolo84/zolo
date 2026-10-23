// FUN_0067e620 @ 67e620 size=689

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0067e620(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,int *param_5,
            char param_6,char param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 *local_10;
  undefined1 auStack_4 [4];
  
  local_10 = operator_new(0x12);
  if (local_10 == (undefined4 *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    *(undefined1 *)(local_10 + 4) = 0;
    *local_10 = &PTR_LAB_007f37fc;
  }
  iVar1 = *(int *)((int)param_4 + 4);
joined_r0x0067e661:
  do {
    if (iVar1 == 0) {
      return local_10;
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar4 = FUN_004e9370();
    iVar5 = FUN_005883a0(param_3);
    piVar8 = (int *)(&DAT_0089cad8)[iVar5];
  } while (piVar8 == (int *)0x0);
  bVar2 = false;
  if ((param_7 == '\0') || (*(int *)(iVar4 + 0x46a) == 0)) goto LAB_0067e6b4;
  goto LAB_0067e710;
LAB_0067e6b4:
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x290)) {
    do {
      iVar6 = FUN_004e9370();
      if ((*(int **)(iVar6 + 0x3d4) == piVar8) ||
         (cVar3 = (**(code **)(*param_5 + 0x24))(), cVar3 != '\0')) {
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar4 + 0x290));
    if (bVar2) {
LAB_0067e710:
      if (param_6 == '\0') {
        fVar12 = (float10)FUN_004e4530();
      }
      else {
        fVar11 = (float10)FUN_004e4530();
        fVar12 = (float10)FUN_004e4530();
        fVar12 = (float10)(float)fVar11 - fVar12;
      }
      iVar5 = *(int *)(iVar4 + 0x482);
      param_4 = (float)fVar12;
      if ((iVar5 != 0) && (iVar6 = FUN_0044e1d0(), iVar5 != iVar6)) {
        FUN_0044e1d0();
        piVar7 = (int *)FUN_004c7fad(auStack_4);
        if (*piVar7 == 0) {
          param_4 = param_4 + _DAT_007e4090;
        }
      }
      cVar3 = (**(code **)(*piVar8 + 0x1c))();
      if ((cVar3 != '\0') && (*(int **)(piVar8[0x48] + 0xb1a) != (int *)0x0)) {
        piVar8 = *(int **)(piVar8[0x48] + 0xb1a);
        do {
          piVar7 = piVar8 + 2;
          if (*(int *)*piVar8 == *(int *)(iVar4 + 0x12)) {
            param_4 = param_4 + (float)((int *)*piVar8)[1];
          }
          piVar8 = (int *)*piVar7;
        } while ((int *)*piVar7 != (int *)0x0);
      }
      if (param_7 != '\0') {
        cVar3 = FUN_004e4b60();
        if (cVar3 != '\0') {
          param_4 = param_4 + _DAT_007e4090;
        }
        fVar12 = (float10)FUN_0044a9c0(*(undefined4 *)(iVar4 + 0x12));
        param_4 = (float)((float10)param_4 - fVar12 * (float10)_DAT_007e40b8);
        cVar3 = FUN_004e8ab0();
        if (cVar3 != '\0') {
          param_4 = param_4 - _DAT_007e3834;
        }
      }
      puVar9 = operator_new(8);
      *puVar9 = *(undefined4 *)(iVar4 + 0x12);
      puVar9[1] = param_4;
      for (piVar8 = (int *)local_10[1]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*(float *)(*piVar8 + 4) < param_4) {
          FUN_00680ba0(puVar9);
          goto joined_r0x0067e661;
        }
      }
      iVar4 = local_10[2];
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = puVar9;
        puVar10[1] = iVar4;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar5 = local_10[3];
      local_10[2] = puVar10;
      local_10[3] = iVar5 + 1;
      if (iVar5 == 0) {
        local_10[1] = puVar10;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar10;
      }
    }
  }
  goto joined_r0x0067e661;
}


