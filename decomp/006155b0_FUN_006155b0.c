// FUN_006155b0 @ 6155b0 size=1027

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006155b0(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  char *pcVar11;
  double dVar12;
  undefined4 local_110;
  undefined2 local_10c;
  char local_108 [260];
  
  DAT_00cf8508 = 0;
  fVar10 = (float10)FUN_00586a70(param_2,0,(&DAT_0089cad8)[*(int *)(param_1 + 200)]);
  fVar1 = (float)fVar10;
  iVar3 = FUN_004a5c40(0xc,*(undefined4 *)(param_1 + 200));
  if ((iVar3 == 0) && (param_2 != 9)) {
    pcVar11 = s_DIPROL_NO_SPY_0085f5b0;
  }
  else {
    if ((fVar1 <= *(float *)(*(int *)(param_1 + 0x90) + 0x39c8)) ||
       ((fVar1 <= _DAT_007e3380 || (param_2 == 9)))) {
      DAT_00cf5908 = 0;
      switch(param_2) {
      case 0:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_STEAL_TECH_ROLL_0085f590;
        break;
      case 1:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_MINISTER_ASSASSINATION_ROLL_0085f570;
        break;
      case 2:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_SMEAR_CAMPAIGN_ROLL_0085f530;
        break;
      case 3:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_COUP_ROLL_0085f520;
        break;
      case 4:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_SABOTAGE_INDUSTRY_ROLL_0085f504;
        break;
      case 5:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_NUCLEAR_SABOTAGE_ROLL_0085f4e8;
        break;
      case 6:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_FOUND_PARTISANS_ROLL_0085f4cc;
        break;
      case 7:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_MASSMEDIA_ROLL_0085f4b8;
        break;
      case 8:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_DISRUPT_TECHTEAM_ROLL_0085f49c;
        break;
      case 9:
        cVar2 = FUN_0042dd70();
        if (cVar2 != '\0') {
          pcVar11 = (char *)FUN_0042b6c9();
          uVar6 = 0xffffffff;
          do {
            pcVar9 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar9 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar9;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          pcVar11 = pcVar9 + -uVar6;
          pcVar9 = (char *)&DAT_00cf7d08;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar9 = pcVar9 + 1;
          }
          local_110 = *(undefined4 *)
                       (*(int *)(param_1 + 0x90) + 0x1b16 +
                       *(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 6) * 6);
          local_10c = *(undefined2 *)
                       (*(int *)(param_1 + 0x90) +
                        *(int *)((&DAT_0089cad8)[*(int *)(param_1 + 200)] + 6) * 6 + 0x1b1a);
          FUN_0079168d(local_108,&local_110);
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_00839650;
          do {
            pcVar9 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar9 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar9;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar11 = (char *)&DAT_00cf7d08;
          do {
            pcVar8 = pcVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar8;
          } while (cVar2 != '\0');
          pcVar11 = pcVar9 + -uVar6;
          pcVar9 = pcVar8 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar9 = pcVar9 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar11 = local_108;
          do {
            pcVar9 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar9 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar9;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar11 = (char *)&DAT_00cf7d08;
          do {
            pcVar8 = pcVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar8;
          } while (cVar2 != '\0');
          pcVar11 = pcVar9 + -uVar6;
          pcVar9 = pcVar8 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar9 = pcVar9 + 1;
          }
          return &DAT_00cf7d08;
        }
        if ((*(float *)(*(int *)(param_1 + 0x90) + 0x39c8) < fVar1) && (_DAT_007e3380 < fVar1)) {
          pcVar11 = s_DIPROL_COST_0085f5a4;
          goto LAB_0061561d;
        }
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_INCREASE_INTELLIGENCE_FOUNDI_0085f548;
        break;
      case 10:
        dVar12 = (double)fVar1;
        uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
        pcVar11 = s_SPY_COUNTER_ESPIONAGE_ROLL_0085f480;
        break;
      default:
        return (undefined4 *)0x0;
      }
      uVar5 = FUN_0042b6c9(pcVar11);
      FUN_007a630a(&DAT_00cf8508,s__s__s____f_0085f470,uVar5,uVar4,dVar12);
      return (undefined4 *)&DAT_00cf8508;
    }
    pcVar11 = s_DIPROL_COST_0085f5a4;
  }
LAB_0061561d:
  dVar12 = (double)fVar1;
  uVar4 = FUN_0042b6c9(pcVar11);
  FUN_007a630a(&DAT_00cf8508,uVar4,dVar12);
  return (undefined4 *)&DAT_00cf8508;
}


