// FUN_005e54c0 @ 5e54c0 size=1279

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e54c0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  uint local_50;
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  undefined2 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ce1ee;
  local_10 = ExceptionList;
  local_2c = 0;
  local_30 = local_30 & 0xff000000;
  ExceptionList = &local_10;
  cVar4 = FUN_00433910();
  bVar11 = cVar4 != '\0';
  if (bVar11) {
    local_2c = DAT_00cdb354;
    local_30 = _DAT_00cdb350;
    iVar5 = FUN_005e5440();
    FUN_0042db80((int)ROUND((float)iVar5 * _DAT_00877318));
  }
  bVar2 = !bVar11;
  piVar3 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
joined_r0x005e5557:
  while( true ) {
    do {
      if (piVar3 == (int *)0x0) {
        iVar5 = (**(code **)(**(int **)(DAT_00d0ca90 + 0x21e5a) + 4))();
        if (0 < iVar5) {
          cVar4 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4) +
                              0x28))();
          if (cVar4 == '\x01') {
            (**(code **)(*DAT_00bd0e18 + 0x20))(0x1c);
            ExceptionList = local_10;
            return;
          }
          cVar4 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4) +
                              0x30))();
          if (cVar4 == '\x01') {
            (**(code **)(*DAT_00bd0e18 + 0x20))(0x1a);
            ExceptionList = local_10;
            return;
          }
          (**(code **)(*DAT_00bd0e18 + 0x20))(0x1e);
        }
        ExceptionList = local_10;
        return;
      }
      piVar6 = (int *)piVar3[2];
      piVar15 = (int *)*piVar3;
      cVar4 = FUN_00512a20(piVar15,*(undefined4 *)(*(int *)(param_1 + 100) + 0x10),
                           *(undefined4 *)(param_1 + 0x58));
      piVar3 = piVar6;
    } while (cVar4 == '\0');
    cVar4 = (**(code **)(*piVar15 + 0x28))();
    if ((cVar4 != '\0') && (iVar5 = (**(code **)(piVar15[0x47] + 4))(), iVar5 != 0)) break;
LAB_005e5689:
    iVar5 = *(int *)(*(int *)(param_1 + 100) + 0x10);
    if (iVar5 == 0) {
      local_38 = local_38 & 0xff000000;
      FUN_0050b600(piVar15,1,piVar15[3],0x3f800000,1,1,_DAT_00cdb350,DAT_00cdb354,local_38,0,1,
                   0xffffffff,0,1,0,0xbf800000,bVar2);
    }
    else {
      if (iVar5 != 3) goto LAB_005e5710;
      uVar12 = *(undefined4 *)(param_1 + 0x58);
      FUN_00522770(piVar15,uVar12);
      FUN_0045fed0(piVar15,uVar12);
    }
  }
  bVar16 = false;
  piVar6 = (int *)piVar15[0x48];
  do {
    if (piVar6 == (int *)0x0) goto LAB_005e55ff;
    piVar1 = (int *)piVar6[2];
    iVar5 = *piVar6;
    piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0x84) + 0xc))();
    cVar4 = (**(code **)(*piVar6 + 0x24))(piVar15);
  } while ((cVar4 == '\0') &&
          ((piVar6 = piVar1, *(int *)(iVar5 + 0x74) != 1 ||
           (*(int *)(*(int *)(iVar5 + 0x78) + 0x12) != piVar15[3]))));
  bVar16 = true;
LAB_005e55ff:
  iVar5 = FUN_004e9370(*(undefined4 *)(param_1 + 0x58));
  cVar4 = FUN_004e7940(piVar15[3]);
  if ((cVar4 != '\0') || (*(int *)(param_1 + 0x58) == piVar15[3])) {
    if (*(int *)(iVar5 + 0x3d8) == 0) goto LAB_005e5689;
    cVar4 = FUN_0044a690(*(undefined4 *)(piVar15[0x92] + 6));
    if (cVar4 != '\0') {
      switch(*(undefined4 *)(*(int *)(param_1 + 100) + 0x10)) {
      case 0:
      case 6:
      case 7:
        if (!bVar16) goto LAB_005e5689;
        break;
      case 1:
        if ((!bVar16) || (*(int *)(param_1 + 0x58) != piVar15[3])) goto LAB_005e5689;
      }
    }
  }
  goto switchD_005e5661_caseD_2;
LAB_005e5710:
  if (*(char *)((int)piVar15 + 0x17b) == '\0') {
    if (iVar5 == 8) {
      _DAT_0085bef8 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0xa0);
      iVar5 = *(int *)(*(int *)(param_1 + 100) + 0x10);
      local_40 = local_40 & 0xff000000;
      uVar12 = *(undefined4 *)(param_1 + 0x58);
      uVar13 = _DAT_0085bef8;
      uVar14 = local_40;
      bVar16 = true;
    }
    else {
      bVar16 = bVar2;
      if (iVar5 == -1) {
        local_50 = local_50 & 0xff000000;
        uVar13 = 0x3f800000;
        uVar12 = *(undefined4 *)(param_1 + 0x58);
        iVar5 = 1;
        uVar14 = local_50;
      }
      else {
        local_48 = local_48 & 0xff000000;
        uVar13 = 0x3f800000;
        uVar12 = *(undefined4 *)(param_1 + 0x58);
        uVar14 = local_48;
      }
    }
    FUN_0050b600(piVar15,iVar5,uVar12,uVar13,1,1,_DAT_00cdb350,DAT_00cdb354,uVar14,0,1,0xffffffff,0,
                 1,0,0xbf800000,bVar16);
    if (bVar11) {
      puVar7 = operator_new(0xc);
      local_8 = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        pvVar8 = operator_new(0x1a);
        local_8._0_1_ = 1;
        if (pvVar8 == (void *)0x0) {
          puVar9 = (undefined2 *)0x0;
        }
        else {
          puVar9 = (undefined2 *)FUN_005e59e0();
        }
        puVar7[1] = puVar9;
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined1 *)((int)puVar7 + 9) = 1;
        *puVar7 = &PTR_FUN_007ea61c;
        *(undefined1 *)((int)puVar7 + 10) = 0;
        *puVar9 = 0x2f;
        iVar5 = puVar7[1];
        *(int *)(iVar5 + 8) = piVar15[6];
        local_8 = CONCAT31(local_8._1_3_,2);
        *(short *)(iVar5 + 0xc) = (short)piVar15[7];
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar5 = puVar7[1];
        *(undefined4 *)(iVar5 + 2) = *puVar10;
        *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar10 + 1);
        iVar5 = puVar7[1];
        *puVar7 = &PTR_FUN_007e9fdc;
        *(uint *)(iVar5 + 0xe) = _DAT_00cdb350;
        *(undefined2 *)(iVar5 + 0x12) = DAT_00cdb354;
        iVar5 = puVar7[1];
        *(uint *)(iVar5 + 0x14) = local_30;
        *(undefined2 *)(iVar5 + 0x18) = local_2c;
      }
      local_8 = 0xffffffff;
      FUN_00565ca0(puVar7);
switchD_005e5661_caseD_2:
    }
  }
  goto joined_r0x005e5557;
}


