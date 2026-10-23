// FUN_00406c00 @ 406c00 size=685

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00406c00(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            ,int *param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  int local_20;
  int local_1c;
  uint *local_8;
  
  iVar8 = (**(code **)(*param_1 + 8))();
  iVar9 = (**(code **)(*param_8 + 8))();
  if (*(int *)((int)param_1 + 0x24e) == 1) {
    local_8 = (uint *)(*(int *)((int)param_1 + 0x242) + 0x904);
  }
  else if (*(int *)((int)param_1 + 0x24e) == 2) {
    local_8 = (uint *)(*(int *)((int)param_1 + 0x242) + 0xd04);
  }
  else {
    local_8 = (uint *)(*(int *)((int)param_1 + 0x242) + 0x504);
  }
  iVar3 = param_1[6];
  iVar4 = param_8[6];
  local_20 = (param_6 & 0xfffffffe) - (param_4 & 0xfffffffe);
  uVar11 = param_2 & 0xfffffffe;
  param_2 = param_7 - param_5;
  if ((1 < local_20) && (1 < (int)param_2)) {
    puVar14 = (uint *)(iVar4 * param_3 + iVar9 + uVar11 * 2);
    iVar9 = param_8[1];
    if (iVar9 < (int)(local_20 + uVar11)) {
      local_1c = (local_20 - iVar9) + uVar11;
      local_20 = local_20 - local_1c;
    }
    else {
      local_1c = 0;
    }
    iVar5 = param_8[2];
    if (iVar5 < (int)(param_2 + param_3)) {
      param_3 = (param_2 - iVar5) + param_3;
      param_2 = param_2 - param_3;
    }
    else {
      param_3 = 0;
    }
    iVar8 = iVar8 + param_5 * iVar3 + (param_4 & 0xfffffffe);
    if (DAT_00857744 == 1) {
      do {
        do {
          iVar7 = param_3;
          iVar12 = iVar8 + local_20;
          uVar11 = -local_20;
          puVar15 = puVar14;
          do {
            uVar6 = *puVar15;
            bVar1 = *(byte *)(iVar12 + 1 + uVar11);
            *local_8 = uVar6;
            bVar2 = *(byte *)(iVar12 + uVar11);
            local_8[1] = (uVar6 & 0x7bde7bde) >> 1;
            puVar13 = puVar15 + 1;
            bVar16 = uVar11 < 0xfffffffe;
            uVar11 = uVar11 + 2;
            *puVar15 = CONCAT22((short)(local_8[bVar1] >> 0x10),
                                CONCAT11(*(undefined1 *)((int)local_8 + (uint)bVar2 * 4 + 1),
                                         (char)local_8[bVar2]));
            puVar15 = puVar13;
          } while (bVar16 && uVar11 != 0);
          if (local_1c != 0) {
            uVar11 = -local_1c;
            puVar15 = (uint *)((int)puVar13 + iVar9 * -2);
            do {
              uVar6 = *puVar15;
              bVar1 = *(byte *)(iVar12 + local_1c + 1 + uVar11);
              *local_8 = uVar6;
              uVar10 = (uint)*(byte *)(iVar12 + local_1c + uVar11);
              local_8[1] = (uVar6 & 0x7bde7bde) >> 1;
              bVar16 = uVar11 < 0xfffffffe;
              uVar11 = uVar11 + 2;
              *puVar15 = CONCAT22((short)(local_8[bVar1] >> 0x10),
                                  CONCAT11(*(undefined1 *)((int)local_8 + uVar10 * 4 + 1),
                                           (char)local_8[uVar10]));
              puVar15 = puVar15 + 1;
            } while (bVar16 && uVar11 != 0);
          }
          puVar14 = (uint *)((int)puVar14 + iVar4);
          iVar8 = iVar8 + iVar3;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        puVar14 = (uint *)((int)puVar14 - iVar5 * iVar4);
        param_2 = param_3;
        param_3 = 0;
      } while (iVar7 != 0);
    }
    else {
      do {
        do {
          iVar7 = param_3;
          iVar12 = iVar8 + local_20;
          uVar11 = -local_20;
          puVar15 = puVar14;
          do {
            uVar6 = *puVar15;
            bVar1 = *(byte *)(iVar12 + 1 + uVar11);
            *local_8 = uVar6;
            bVar2 = *(byte *)(iVar12 + uVar11);
            local_8[1] = (uVar6 & 0xf7def7de) >> 1;
            puVar13 = puVar15 + 1;
            bVar16 = uVar11 < 0xfffffffe;
            uVar11 = uVar11 + 2;
            *puVar15 = CONCAT22((short)(local_8[bVar1] >> 0x10),
                                CONCAT11(*(undefined1 *)((int)local_8 + (uint)bVar2 * 4 + 1),
                                         (char)local_8[bVar2]));
            puVar15 = puVar13;
          } while (bVar16 && uVar11 != 0);
          if (local_1c != 0) {
            uVar11 = -local_1c;
            puVar15 = (uint *)((int)puVar13 + iVar9 * -2);
            do {
              uVar6 = *puVar15;
              bVar1 = *(byte *)(iVar12 + local_1c + 1 + uVar11);
              *local_8 = uVar6;
              uVar10 = (uint)*(byte *)(iVar12 + local_1c + uVar11);
              local_8[1] = (uVar6 & 0xf7def7de) >> 1;
              bVar16 = uVar11 < 0xfffffffe;
              uVar11 = uVar11 + 2;
              *puVar15 = CONCAT22((short)(local_8[bVar1] >> 0x10),
                                  CONCAT11(*(undefined1 *)((int)local_8 + uVar10 * 4 + 1),
                                           (char)local_8[uVar10]));
              puVar15 = puVar15 + 1;
            } while (bVar16 && uVar11 != 0);
          }
          puVar14 = (uint *)((int)puVar14 + iVar4);
          iVar8 = iVar8 + iVar3;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        puVar14 = (uint *)((int)puVar14 - iVar5 * iVar4);
        param_2 = param_3;
        param_3 = 0;
      } while (iVar7 != 0);
    }
    (**(code **)(*param_1 + 0xc))();
    (**(code **)(*param_8 + 0xc))();
  }
  return;
}


