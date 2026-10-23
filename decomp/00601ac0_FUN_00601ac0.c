// FUN_00601ac0 @ 601ac0 size=868

undefined4 __thiscall FUN_00601ac0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int local_218;
  int local_214 [65];
  undefined1 auStack_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf8ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00601530(param_2);
  iVar12 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)];
  if (iVar12 != 0) {
    local_218 = iVar12;
    (**(code **)(*param_1 + 0x28))(local_214);
    uVar4 = (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
    uVar5 = FUN_0042b6c9(s_SPY_INCREASE_INTELLIGENCE_FOUNDI_0085e568);
    FUN_007a630a(auStack_110,uVar5,uVar4);
    iVar11 = local_214[0] + 0x24;
    uVar16 = 0;
    uVar5 = 0xffff;
    uVar4 = DAT_00bd1bac;
    iVar6 = FUN_00415bd0(iVar11,DAT_00bd1bac,0xffff,0);
    iVar6 = iVar6 / 2 + local_218;
    puVar15 = auStack_110;
    FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
    FUN_00413509(puVar15,iVar6,iVar11,uVar4,uVar5,uVar16);
    piVar8 = DAT_00d615f6;
    while (piVar8 != (int *)0x0) {
      piVar2 = (int *)piVar8[2];
      iVar6 = *piVar8;
      piVar8 = piVar2;
      if (*(int *)(iVar6 + 0x1e) == 2) {
        piVar2 = (int *)(iVar12 + 6);
        if (((*(int *)(iVar6 + 0x1a) == *piVar2) &&
            (iVar12 = unaff_EBX, *(int *)(iVar6 + 0x16) == *(int *)(DAT_00d0ca90 + 6))) ||
           ((*(int *)(iVar6 + 0x1a) == *(int *)(DAT_00d0ca90 + 6) &&
            (*(int *)(iVar6 + 0x16) == *piVar2)))) break;
      }
    }
    pvVar7 = operator_new(0x72);
    iVar12 = 0;
    puStack_8 = (undefined1 *)0x0;
    if (pvVar7 == (void *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_00434930(0x140,0x8c,0,0);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    uVar3 = FUN_00584270(0xff,0xbd,0);
    *(undefined2 *)((int)piVar8 + 0x5a) = uVar3;
    (**(code **)(*piVar8 + 0x34))(local_218 + 0x10,local_214[0] + 0x44);
    if (*(int *)((int)param_1 + 0x7e) == *(int *)(DAT_00d0ca90 + 6)) {
      FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_DEFENSE_INTELLIGENCE_FOUNDIN_0085e518,0);
      pbVar9 = (byte *)FUN_0042b6c9(&local_218);
      pcVar10 = s_UNKNOWN_STRING_WANTED_0083c758;
      pbVar13 = pbVar9;
      do {
        bVar1 = *pcVar10;
        bVar14 = bVar1 < *pbVar13;
        if (bVar1 != *pbVar13) {
LAB_00601d77:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto joined_r0x00601d7e;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar10[1];
        bVar14 = bVar1 < pbVar13[1];
        if (bVar1 != pbVar13[1]) goto LAB_00601d77;
        pcVar10 = pcVar10 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
joined_r0x00601d7e:
      if (iVar6 != 0) {
        iVar12 = iVar12 + 1;
        FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_DEFENSE_INTELLIGENCE_FOUNDIN_0085e518,iVar12);
        FUN_004361a0(pbVar9);
        pbVar9 = (byte *)FUN_0042b6c9(&local_218);
        pcVar10 = s_UNKNOWN_STRING_WANTED_0083c758;
        pbVar13 = pbVar9;
        do {
          bVar1 = *pcVar10;
          bVar14 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_00601de3:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto joined_r0x00601d7e;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar10[1];
          bVar14 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_00601de3;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
        goto joined_r0x00601d7e;
      }
    }
    else {
      FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_INCREASE_INTELLIGENCE_FOUNDI_0085e540,0);
      pbVar9 = (byte *)FUN_0042b6c9(&local_218);
      pcVar10 = s_UNKNOWN_STRING_WANTED_0083c758;
      pbVar13 = pbVar9;
      do {
        bVar1 = *pcVar10;
        bVar14 = bVar1 < *pbVar13;
        puVar17 = unaff_EBP;
        if (bVar1 != *pbVar13) {
LAB_00601ca4:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto joined_r0x00601cab;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar10[1];
        bVar14 = bVar1 < pbVar13[1];
        if (bVar1 != pbVar13[1]) goto LAB_00601ca4;
        pcVar10 = pcVar10 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
joined_r0x00601cab:
      if (iVar6 != 0) {
        iVar12 = iVar12 + 1;
        FUN_007a630a(&local_218,&DAT_0085e368,s_SPY_INCREASE_INTELLIGENCE_FOUNDI_0085e540,iVar12);
        puVar18 = puVar17;
        FUN_004361a0(pbVar9);
        pbVar9 = (byte *)FUN_0042b6c9(&local_218);
        pcVar10 = s_UNKNOWN_STRING_WANTED_0083c758;
        pbVar13 = pbVar9;
        do {
          bVar1 = *pcVar10;
          bVar14 = bVar1 < *pbVar13;
          unaff_EBP = puVar17;
          if (bVar1 != *pbVar13) {
LAB_00601d12:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            puVar17 = puVar18;
            goto joined_r0x00601cab;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar10[1];
          bVar14 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_00601d12;
          pcVar10 = pcVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
        puVar17 = puVar18;
        goto joined_r0x00601cab;
      }
    }
    (**(code **)(*(int *)((int)unaff_EBP + 0x12) + 0x10))(0);
    if (unaff_EBP != (undefined4 *)0x0) {
      (**(code **)*unaff_EBP)(1);
    }
  }
  ExceptionList = local_c;
  return 0;
}


