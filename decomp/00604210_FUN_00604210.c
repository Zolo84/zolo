// FUN_00604210 @ 604210 size=811

undefined4 __thiscall FUN_00604210(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_218;
  void *pvStack_214;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cfaae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00601530(param_2);
  iVar11 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)];
  if (iVar11 != 0) {
    (**(code **)(*param_1 + 0x28))(&local_218);
    uVar4 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))();
    uVar5 = FUN_0042b6c9(s_SPY_SMEAR_CAMPAIGN_TITLE_0085e6d4);
    FUN_007a630a(auStack_110,uVar5,uVar4);
    iVar10 = local_218 + 0x24;
    uVar15 = 0;
    uVar5 = 0xffff;
    uVar4 = DAT_00bd1bac;
    iVar6 = FUN_00415bd0(iVar10,DAT_00bd1bac,0xffff,0);
    iVar6 = iVar6 / 2 + (int)param_1;
    puVar14 = auStack_110;
    FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
    FUN_00413509(puVar14,iVar6,iVar10,uVar4,uVar5,uVar15);
    piVar7 = DAT_00d615f6;
    while (piVar7 != (int *)0x0) {
      piVar2 = (int *)piVar7[2];
      iVar6 = *piVar7;
      piVar7 = piVar2;
      if (*(int *)(iVar6 + 0x1e) == 2) {
        if (((*(int *)(iVar6 + 0x1a) == *(int *)(iVar11 + 6)) &&
            (*(int *)(iVar6 + 0x16) == *(int *)(DAT_00d0ca90 + 6))) ||
           ((*(int *)(iVar6 + 0x1a) == *(int *)(DAT_00d0ca90 + 6) &&
            (*(int *)(iVar6 + 0x16) == *(int *)(iVar11 + 6))))) break;
      }
    }
    pvStack_214 = operator_new(0x72);
    iVar11 = 0;
    puStack_8 = (undefined1 *)0x0;
    if (pvStack_214 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_00434930(0x140,0x8c,0,0);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    uVar3 = FUN_00584270(0xff,0xbd,0);
    *(undefined2 *)((int)piVar7 + 0x5a) = uVar3;
    (**(code **)(*piVar7 + 0x34))(param_1 + 4,local_218 + 0x44);
    FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_SMEAR_CAMPAIGN_LINE_0085e6bc,0);
    pbVar8 = (byte *)FUN_0042b6c9(&local_218);
    pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
    pbVar12 = pbVar8;
    do {
      bVar1 = *pcVar9;
      bVar13 = bVar1 < *pbVar12;
      if (bVar1 != *pbVar12) {
LAB_006043d4:
        iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto joined_r0x006043db;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar9[1];
      bVar13 = bVar1 < pbVar12[1];
      if (bVar1 != pbVar12[1]) goto LAB_006043d4;
      pcVar9 = pcVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
joined_r0x006043db:
    if (iVar6 != 0) {
      iVar11 = iVar11 + 1;
      FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_SMEAR_CAMPAIGN_LINE_0085e6bc,iVar11);
      FUN_004361a0(pbVar8);
      pbVar8 = (byte *)FUN_0042b6c9(&local_218);
      pcVar9 = s_UNKNOWN_STRING_WANTED_0083c758;
      pbVar12 = pbVar8;
      do {
        bVar1 = *pcVar9;
        bVar13 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_0060443a:
          iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto joined_r0x006043db;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar9[1];
        bVar13 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_0060443a;
        pcVar9 = pcVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
      goto joined_r0x006043db;
    }
    (**(code **)(*(int *)((int)piVar7 + 0x12) + 0x10))(0);
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
    iVar11 = FUN_0064ec40(2,*(undefined4 *)((int)param_1 + 0x7e));
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    uVar4 = FUN_0042b6c9(s_T_CHANCE_0085de5c);
    FUN_007a630a(auStack_10c,s__s___d_0085de54,uVar4,iVar11);
    uVar4 = DAT_00bd1bac;
    uVar17 = 0;
    uVar16 = 0;
    uVar5 = __ftol(0,0);
    uVar15 = __ftol(uVar5);
    uVar5 = FUN_00584270(uVar15,uVar5,uVar16);
    iVar6 = (int)pvStack_214 + 200;
    iVar11 = FUN_00415bd0(iVar6,uVar4,uVar5);
    iVar11 = iVar11 / 2 + local_218;
    puVar14 = auStack_10c;
    FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
    FUN_00413509(puVar14,iVar11,iVar6,uVar4,uVar5,uVar17);
  }
  ExceptionList = local_c;
  return 0;
}


