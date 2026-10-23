// FUN_00407180 @ 407180 size=709

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00407180(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            ,int *param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  uint local_20;
  int local_1c;
  uint *local_c;
  
  iVar6 = (**(code **)(*param_1 + 8))();
  iVar7 = (**(code **)(*param_8 + 8))();
  if (*(int *)((int)param_1 + 0x24e) == 1) {
    local_c = (uint *)(*(int *)((int)param_1 + 0x242) + 0x904);
  }
  else if (*(int *)((int)param_1 + 0x24e) == 2) {
    local_c = (uint *)(*(int *)((int)param_1 + 0x242) + 0xd04);
  }
  else {
    local_c = (uint *)(*(int *)((int)param_1 + 0x242) + 0x504);
  }
  iVar3 = param_8[6];
  local_20 = (param_6 & 0xfffffffe) - (param_4 & 0xfffffffe) & 0xfffffff8;
  uVar12 = param_2 & 0xfffffffe;
  if ((7 < (int)local_20) && (7 < param_7 - param_5)) {
    param_2 = param_7 - param_5 >> 2;
    puVar14 = (uint *)(iVar3 * param_3 + iVar7 + uVar12 * 2);
    iVar7 = param_8[1];
    if (iVar7 < (int)(((int)local_20 >> 2) + uVar12)) {
      iVar8 = (((int)local_20 >> 2) - iVar7) + uVar12;
      local_1c = iVar8 * 4;
      local_20 = local_20 + iVar8 * -4;
    }
    else {
      local_1c = 0;
    }
    iVar8 = param_8[2];
    if (iVar8 < (int)(param_2 + param_3)) {
      param_3 = (param_2 - iVar8) + param_3;
      param_2 = param_2 - param_3;
    }
    else {
      param_3 = 0;
    }
    iVar6 = iVar6 + param_5 * param_1[6] + (param_4 & 0xfffffffe);
    iVar10 = param_1[6] * 4;
    if (DAT_00857744 == 1) {
      do {
        do {
          iVar5 = param_3;
          iVar11 = iVar6 + local_20;
          uVar12 = -local_20;
          puVar15 = puVar14;
          do {
            uVar4 = *puVar15;
            bVar1 = *(byte *)(iVar11 + 4 + uVar12);
            *local_c = uVar4;
            bVar2 = *(byte *)(iVar11 + uVar12);
            local_c[1] = (uVar4 & 0x7bde7bde) >> 1;
            puVar13 = puVar15 + 1;
            bVar16 = uVar12 < 0xfffffff8;
            uVar12 = uVar12 + 8;
            *puVar15 = CONCAT22((short)(local_c[bVar1] >> 0x10),
                                CONCAT11(*(undefined1 *)((int)local_c + (uint)bVar2 * 4 + 1),
                                         (char)local_c[bVar2]));
            puVar15 = puVar13;
          } while (bVar16 && uVar12 != 0);
          if (local_1c != 0) {
            uVar12 = -local_1c;
            puVar15 = (uint *)((int)puVar13 + iVar7 * -2);
            do {
              uVar4 = *puVar15;
              bVar1 = *(byte *)(iVar11 + local_1c + 4 + uVar12);
              *local_c = uVar4;
              uVar9 = (uint)*(byte *)(iVar11 + local_1c + uVar12);
              local_c[1] = (uVar4 & 0x7bde7bde) >> 1;
              bVar16 = uVar12 < 0xfffffff8;
              uVar12 = uVar12 + 8;
              *puVar15 = CONCAT22((short)(local_c[bVar1] >> 0x10),
                                  CONCAT11(*(undefined1 *)((int)local_c + uVar9 * 4 + 1),
                                           (char)local_c[uVar9]));
              puVar15 = puVar15 + 1;
            } while (bVar16 && uVar12 != 0);
          }
          puVar14 = (uint *)((int)puVar14 + iVar3);
          iVar6 = iVar6 + iVar10;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        puVar14 = (uint *)((int)puVar14 - iVar8 * iVar3);
        param_2 = param_3;
        param_3 = 0;
      } while (iVar5 != 0);
    }
    else {
      do {
        do {
          iVar5 = param_3;
          iVar11 = iVar6 + local_20;
          uVar12 = -local_20;
          puVar15 = puVar14;
          do {
            uVar4 = *puVar15;
            bVar1 = *(byte *)(iVar11 + 4 + uVar12);
            *local_c = uVar4;
            bVar2 = *(byte *)(iVar11 + uVar12);
            local_c[1] = (uVar4 & 0xf7def7de) >> 1;
            puVar13 = puVar15 + 1;
            bVar16 = uVar12 < 0xfffffff8;
            uVar12 = uVar12 + 8;
            *puVar15 = CONCAT22((short)(local_c[bVar1] >> 0x10),
                                CONCAT11(*(undefined1 *)((int)local_c + (uint)bVar2 * 4 + 1),
                                         (char)local_c[bVar2]));
            puVar15 = puVar13;
          } while (bVar16 && uVar12 != 0);
          if (local_1c != 0) {
            uVar12 = -local_1c;
            puVar15 = (uint *)((int)puVar13 + iVar7 * -2);
            do {
              uVar4 = *puVar15;
              bVar1 = *(byte *)(iVar11 + local_1c + 4 + uVar12);
              *local_c = uVar4;
              uVar9 = (uint)*(byte *)(iVar11 + local_1c + uVar12);
              local_c[1] = (uVar4 & 0xf7def7de) >> 1;
              bVar16 = uVar12 < 0xfffffff8;
              uVar12 = uVar12 + 8;
              *puVar15 = CONCAT22((short)(local_c[bVar1] >> 0x10),
                                  CONCAT11(*(undefined1 *)((int)local_c + uVar9 * 4 + 1),
                                           (char)local_c[uVar9]));
              puVar15 = puVar15 + 1;
            } while (bVar16 && uVar12 != 0);
          }
          puVar14 = (uint *)((int)puVar14 + iVar3);
          iVar6 = iVar6 + iVar10;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        puVar14 = (uint *)((int)puVar14 - iVar8 * iVar3);
        param_2 = param_3;
        param_3 = 0;
      } while (iVar5 != 0);
    }
    (**(code **)(*param_1 + 0xc))();
    (**(code **)(*param_8 + 0xc))();
  }
  return;
}


