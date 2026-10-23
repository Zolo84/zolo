// FUN_006037d0 @ 6037d0 size=848

undefined4 __thiscall FUN_006037d0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int unaff_EBX;
  int iVar10;
  int unaff_ESI;
  byte *pbVar11;
  int unaff_EDI;
  int *piVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_218;
  void *pvStack_214;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cfa4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00601530(param_2);
  iVar10 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)];
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 0x28))(&local_218);
    uVar4 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))();
    uVar5 = FUN_0042b6c9(s_SPY_FOUND_PARTISANS_TITLE_0085e678);
    FUN_007a630a(auStack_110,uVar5,uVar4);
    iVar9 = local_218 + 0x24;
    uVar15 = 0;
    uVar5 = 0xffff;
    uVar4 = DAT_00bd1bac;
    iVar6 = FUN_00415bd0(iVar9,DAT_00bd1bac,0xffff,0);
    iVar6 = iVar6 / 2 + (int)param_1;
    puVar14 = auStack_110;
    FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
    FUN_00413509(puVar14,iVar6,iVar9,uVar4,uVar5,uVar15);
    piVar12 = DAT_00d615f6;
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      iVar6 = *piVar12;
      piVar12 = piVar2;
      if (*(int *)(iVar6 + 0x1e) == 2) {
        if (((*(int *)(iVar6 + 0x1a) == *(int *)(iVar10 + 6)) &&
            (*(int *)(iVar6 + 0x16) == *(int *)(DAT_00d0ca90 + 6))) ||
           ((*(int *)(iVar6 + 0x1a) == *(int *)(DAT_00d0ca90 + 6) &&
            (*(int *)(iVar6 + 0x16) == *(int *)(iVar10 + 6))))) break;
      }
    }
    pvStack_214 = operator_new(0x72);
    piVar12 = (int *)0x0;
    puStack_8 = (undefined1 *)0x0;
    if (pvStack_214 != (void *)0x0) {
      piVar12 = (int *)FUN_00434930(0x140,0x8c,0,0);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    uVar3 = FUN_00584270(0xff,0xbd,0);
    iVar10 = 0;
    *(undefined2 *)((int)piVar12 + 0x5a) = uVar3;
    FUN_007a630a(auStack_210,&DAT_0085e368,s_SPY_FOUND_PARTISANS_LINE_0085e65c,0);
    pbVar7 = (byte *)FUN_0042b6c9(auStack_210);
    pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
    pbVar11 = pbVar7;
    do {
      bVar1 = *pcVar8;
      bVar13 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_0060397b:
        iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto joined_r0x00603982;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar8[1];
      bVar13 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_0060397b;
      pcVar8 = pcVar8 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
joined_r0x00603982:
    if (iVar6 != 0) {
      iVar10 = iVar10 + 1;
      FUN_007a630a(auStack_210,&DAT_0085e368,s_SPY_FOUND_PARTISANS_LINE_0085e65c,iVar10);
      FUN_004361a0(pbVar7);
      pbVar7 = (byte *)FUN_0042b6c9(auStack_210);
      pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
      pbVar11 = pbVar7;
      do {
        bVar1 = *pcVar8;
        bVar13 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_006039e1:
          iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto joined_r0x00603982;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar8[1];
        bVar13 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_006039e1;
        pcVar8 = pcVar8 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
      goto joined_r0x00603982;
    }
    (**(code **)(*piVar12 + 0x34))(param_1 + 4,local_218 + 0x44);
    (**(code **)(*(int *)((int)piVar12 + 0x12) + 0x10))(0);
    (**(code **)(**(int **)(unaff_EBX + 0x8e) + 0x34))(unaff_EDI + 0x2c,unaff_ESI + 0x72);
    (**(code **)(*(int *)(*(int *)(unaff_EBX + 0x8e) + 0x12) + 0x10))(0);
    iVar10 = FUN_0064ec40(6,*(undefined4 *)(unaff_EBX + 0x7e));
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    uVar4 = FUN_0042b6c9(s_T_CHANCE_0085de5c);
    FUN_007a630a(auStack_10c,s__s___d_0085de54,uVar4,iVar10);
    uVar4 = DAT_00bd1bac;
    uVar17 = 0;
    uVar16 = 0;
    uVar5 = __ftol(0,0);
    uVar15 = __ftol(uVar5);
    uVar5 = FUN_00584270(uVar15,uVar5,uVar16);
    iVar6 = (int)pvStack_214 + 0xff;
    iVar10 = FUN_00415bd0(iVar6,uVar4,uVar5);
    iVar10 = iVar10 / 2 + local_218;
    puVar14 = auStack_10c;
    FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
    FUN_00413509(puVar14,iVar10,iVar6,uVar4,uVar5,uVar17);
    if (piVar12 != (int *)0x0) {
      (**(code **)*piVar12)(1);
    }
  }
  ExceptionList = local_c;
  return 0;
}


