// FUN_00417900 @ 417900 size=447

undefined4 * __fastcall FUN_00417900(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_34 [4];
  int local_24;
  int local_20 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9d36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007e381c;
  param_1[2] = &PTR_LAB_007e3818;
  DAT_0088ebfc = DAT_0088ebfc + 1;
  local_4 = 1;
  if (DAT_0088ebfc == 1) {
    puVar1 = operator_new(0xc);
    local_4._0_1_ = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0x3ff;
      pvVar2 = operator_new(0xffc);
      puVar1[2] = pvVar2;
      uVar3 = 0;
      if (puVar1[1] != 0) {
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)(puVar1[2] + -4 + uVar3 * 4) = 0;
        } while (uVar3 < (uint)puVar1[1]);
      }
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    DAT_0088ec00 = puVar1;
    FUN_00418780();
  }
  pvVar2 = operator_new(0x94);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00416730();
  }
  param_1[5] = 0;
  param_1[4] = 0x8c;
  param_1[6] = 4;
  param_1[7] = 10;
  param_1[8] = 1;
  param_1[3] = uVar4;
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar6 = param_1 + 4;
  piVar7 = local_34;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar6 = *(int **)(DAT_0088ec00[2] +
                    ((uint)(local_34[0] +
                           (local_34[1] + (local_34[2] + (local_34[3] + local_24 * 4) * 4) * 4) * 8)
                    % (uint)DAT_0088ec00[1]) * 4);
  do {
    if (piVar6 == (int *)0x0) {
LAB_00417aa0:
      iVar5 = 0;
LAB_00417aa2:
      FUN_00419480(iVar5);
      ExceptionList = local_c;
      return param_1;
    }
    piVar7 = (int *)(*piVar6 + 0x10);
    piVar8 = local_20;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((((local_20[1] == local_34[1]) && (local_20[0] == local_34[0])) &&
        (local_20[2] == local_34[2])) && ((local_20[3] == local_34[3] && (local_10 == local_24)))) {
      if (piVar6 != (int *)0x0) {
        iVar5 = *piVar6;
        goto LAB_00417aa2;
      }
      goto LAB_00417aa0;
    }
    piVar6 = (int *)piVar6[1];
  } while( true );
}


