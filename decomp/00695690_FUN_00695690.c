// FUN_00695690 @ 695690 size=772

float10 __thiscall FUN_00695690(int param_1,float param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  undefined ***pppuVar15;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined **local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38;
  undefined **local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5523;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)((int)param_2 + 0x12);
  param_2 = 10000.0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_007e6eac;
  pppuVar15 = &local_20;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0044e1d0(pppuVar15);
  FUN_004ca7c3(pppuVar15);
  FUN_004734e0();
  local_34 = &PTR_FUN_007e5258;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar12 = 1;
  do {
    iVar9 = FUN_006a9d50();
    if ((iVar12 == iVar9) || (cVar8 = FUN_0044b300(iVar12), piVar3 = local_30, cVar8 != '\0')) {
      piVar2 = local_2c;
      pvVar10 = operator_new(0xe);
      local_4._0_1_ = 2;
      if (pvVar10 == (void *)0x0) {
        local_2c = (int *)0x0;
      }
      else {
        local_2c = (int *)FUN_00473a90(iVar12,piVar2,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar9 = local_28 + 1;
      bVar13 = local_28 != 0;
      piVar3 = local_2c;
      local_28 = iVar9;
      if (bVar13) {
        piVar2[2] = (int)local_2c;
        piVar3 = local_30;
      }
    }
    local_30 = piVar3;
    iVar12 = iVar12 + 1;
    piVar3 = local_30;
  } while (iVar12 < 0x157);
  do {
    if (piVar3 == (int *)0x0) {
      local_34 = &PTR_LAB_007e3ff0;
      piVar3 = local_30;
      while (piVar3 != (int *)0x0) {
        piVar2 = (int *)piVar3[2];
        FUN_00796cd8(piVar3);
        piVar3 = piVar2;
      }
      local_30 = (int *)0x0;
      local_2c = (int *)0x0;
      local_28 = 0;
      local_20 = &PTR_FUN_007e6eac;
      iVar12 = local_1c;
      while (iVar12 != 0) {
        iVar9 = *(int *)(iVar12 + 8);
        FUN_00796cd8(iVar12);
        iVar12 = iVar9;
      }
      ExceptionList = local_c;
      return (float10)param_2;
    }
    piVar2 = (int *)piVar3[2];
    piVar6 = *(int **)((&DAT_0089cad8)[*piVar3] + 0xe86e);
    while (piVar3 = piVar2, piVar6 != (int *)0x0) {
      piVar3 = (int *)piVar6[2];
      iVar12 = *piVar6;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_48 = &PTR_FUN_007e6eac;
      local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
      local_4._0_1_ = 3;
      FUN_004ca7c3(&local_48);
      iVar9 = local_1c;
      piVar6 = piVar3;
      if (local_3c < 1) {
        local_4 = CONCAT31(local_4._1_3_,1);
        local_48 = &PTR_FUN_007e6eac;
        FUN_00499f60();
      }
      else {
joined_r0x0069580a:
        if (iVar9 == 0) {
          local_4 = CONCAT31(local_4._1_3_,1);
          local_48 = &PTR_FUN_007e6eac;
          FUN_00499f60();
        }
        else {
          puVar11 = (undefined4 *)FUN_005162a0(local_50,0);
          iVar7 = local_44;
          iVar4 = *(int *)*puVar11;
          do {
            if (iVar7 == 0) goto joined_r0x0069580a;
            FUN_005162a0(local_4c,0);
            cVar8 = FUN_004ed600(*(undefined4 *)(param_1 + 10),*(undefined4 *)(iVar4 + 0x12));
          } while (cVar8 == '\0');
          piVar3 = *(int **)(iVar12 + 0x2c);
          while (piVar3 != (int *)0x0) {
            piVar5 = (int *)piVar3[2];
            iVar12 = *piVar3;
            piVar3 = piVar5;
            if ((((*(char *)(iVar12 + 0x470) != '\0') && (iVar9 = FUN_004ece90(), iVar9 != 0)) &&
                (cVar8 = FUN_006a0ca0(*(undefined4 *)(iVar12 + 0x12)), cVar8 == '\0')) &&
               (fVar14 = (float10)FUN_0044a9c0(*(undefined4 *)(iVar12 + 0x12),uVar1),
               fVar14 < (float10)param_2)) {
              fVar14 = (float10)FUN_0044a9c0(*(undefined4 *)(iVar12 + 0x12),uVar1);
              param_2 = (float)fVar14;
            }
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          local_48 = &PTR_FUN_007e6eac;
          iVar12 = local_44;
          while (iVar12 != 0) {
            iVar9 = *(int *)(iVar12 + 8);
            FUN_00796cd8(iVar12);
            iVar12 = iVar9;
          }
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
        }
      }
    }
  } while( true );
}


