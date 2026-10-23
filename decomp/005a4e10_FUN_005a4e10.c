// FUN_005a4e10 @ 5a4e10 size=1749

void FUN_005a4e10(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  double dVar8;
  float local_13c;
  float local_138;
  int local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  int local_118;
  float local_114;
  int local_110;
  undefined1 local_108 [260];
  
  iVar3 = DAT_00bda0f8;
  local_110 = 0;
  local_134 = 0;
  local_118 = 0;
  local_114 = 0.0;
  local_12c = 0.0;
  local_11c = 0.0;
  local_138 = 0.0;
  local_13c = 0.0;
  local_124 = 0.0;
  local_120 = 0.0;
  local_128 = 0.0;
  local_130 = 0.0;
  piVar2 = *(int **)(DAT_00bda0f8 + 0x4508);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar4 = *(int **)(*piVar2 + 0x26);
    while (piVar2 = piVar1, piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      if (*(char *)(*piVar4 + 0x160) == '\0') {
        if (*(char *)(*piVar4 + 0x161) == '\0') {
          local_118 = local_118 + 1;
          fVar7 = (float10)FUN_004fd7c0();
          local_11c = (float)(fVar7 + (float10)local_11c);
          fVar7 = (float10)FUN_004fd5d0();
          local_124 = (float)(fVar7 + (float10)local_124);
          fVar7 = (float10)FUN_004fcd20();
          local_130 = (float)(fVar7 + (float10)local_130);
          piVar4 = piVar2;
        }
        else {
          local_134 = local_134 + 1;
          fVar7 = (float10)FUN_004fd7c0();
          local_12c = (float)(fVar7 + (float10)local_12c);
          fVar7 = (float10)FUN_004fd5d0();
          local_13c = (float)(fVar7 + (float10)local_13c);
          fVar7 = (float10)FUN_004fcd20();
          local_128 = (float)(fVar7 + (float10)local_128);
          piVar4 = piVar2;
        }
      }
      else {
        local_110 = local_110 + 1;
        fVar7 = (float10)FUN_004fd7c0();
        local_114 = (float)(fVar7 + (float10)local_114);
        fVar7 = (float10)FUN_004fd5d0();
        local_138 = (float)(fVar7 + (float10)local_138);
        fVar7 = (float10)FUN_004fcd20();
        local_120 = (float)(fVar7 + (float10)local_120);
        piVar4 = piVar2;
      }
    }
  }
  piVar2 = *(int **)(iVar3 + 0x451c);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar3 = *piVar2;
    piVar2 = piVar1;
    if ((*(char *)(iVar3 + 0x154) == '\0') && (*(char *)(iVar3 + 0x162) == '\0')) {
      if (*(char *)(iVar3 + 0x160) == '\0') {
        if (*(char *)(iVar3 + 0x161) == '\0') {
          local_118 = local_118 + 1;
          fVar7 = (float10)FUN_004fd7c0();
          local_11c = (float)(fVar7 + (float10)local_11c);
          fVar7 = (float10)FUN_004fd5d0();
          local_124 = (float)(fVar7 + (float10)local_124);
          fVar7 = (float10)FUN_004fcd20();
          local_130 = (float)(fVar7 + (float10)local_130);
        }
        else {
          local_134 = local_134 + 1;
          fVar7 = (float10)FUN_004fd7c0();
          local_12c = (float)(fVar7 + (float10)local_12c);
          fVar7 = (float10)FUN_004fd5d0();
          local_13c = (float)(fVar7 + (float10)local_13c);
          fVar7 = (float10)FUN_004fcd20();
          local_128 = (float)(fVar7 + (float10)local_128);
        }
      }
      else {
        fVar7 = (float10)FUN_004fd7c0();
        local_114 = (float)(fVar7 + (float10)local_114);
        fVar7 = (float10)FUN_004fd5d0();
        local_138 = (float)(fVar7 + (float10)local_138);
        fVar7 = (float10)FUN_004fcd20();
        local_120 = (float)(fVar7 + (float10)local_120);
      }
    }
  }
  FUN_0042b6c9();
  uVar5 = FUN_004106d0();
  uVar6 = FUN_0042b6c9(s_EYR_ARMY_00858af0);
  FUN_007a630a(local_108,s__s__i_00858ae8,uVar6);
  uVar6 = FUN_00584270(200,100,100);
  FUN_004107f0(uVar5,local_108,(float)local_118,uVar6);
  uVar6 = FUN_0042b6c9(s_EYR_NAVY_00858adc);
  FUN_007a630a(local_108,s__s__i_00858ae8,uVar6);
  uVar6 = FUN_00584270(100,100,200);
  FUN_004107f0(uVar5,local_108,(float)local_134,uVar6);
  uVar6 = FUN_0042b6c9(s_EYR_AIRFORCE_00858acc);
  FUN_007a630a(local_108,s__s__i_00858ae8,uVar6);
  uVar6 = FUN_00584270(100,200,200);
  FUN_004107f0(uVar5,local_108,(float)local_110,uVar6);
  FUN_0042b6c9();
  uVar5 = FUN_004106d0();
  dVar8 = (double)local_11c;
  uVar6 = FUN_0042b6c9(s_EYR_ARMY_00858af0);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6,dVar8);
  uVar6 = FUN_00584270(200,100,100);
  FUN_004107f0(uVar5,local_108,local_11c,uVar6);
  dVar8 = (double)local_12c;
  uVar6 = FUN_0042b6c9(s_EYR_NAVY_00858adc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6,dVar8);
  uVar6 = FUN_00584270(100,100,200);
  FUN_004107f0(uVar5,local_108,local_12c,uVar6);
  uVar6 = FUN_0042b6c9(s_EYR_AIRFORCE_00858acc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6);
  uVar6 = FUN_00584270(100,200,200);
  FUN_004107f0(uVar5,local_108,local_114,uVar6);
  FUN_0042b6c9();
  uVar5 = FUN_004106d0();
  uVar6 = FUN_0042b6c9(s_EYR_ARMY_00858af0);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6);
  uVar6 = FUN_00584270(200,100,100);
  FUN_004107f0(uVar5,local_108,local_124,uVar6);
  dVar8 = (double)local_13c;
  uVar6 = FUN_0042b6c9(s_EYR_NAVY_00858adc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6,dVar8);
  uVar6 = FUN_00584270(100,100,200);
  FUN_004107f0(uVar5,local_108,local_13c,uVar6);
  uVar6 = FUN_0042b6c9(s_EYR_AIRFORCE_00858acc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6);
  uVar6 = FUN_00584270(100,200,200);
  FUN_004107f0(uVar5,local_108,local_138,uVar6);
  FUN_0042b6c9();
  uVar5 = FUN_004106d0();
  dVar8 = (double)local_130;
  uVar6 = FUN_0042b6c9(s_EYR_ARMY_00858af0);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6,dVar8);
  uVar6 = FUN_00584270(200,100,100);
  FUN_004107f0(uVar5,local_108,local_130,uVar6);
  uVar6 = FUN_0042b6c9(s_EYR_NAVY_00858adc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6);
  uVar6 = FUN_00584270(100,100,200);
  FUN_004107f0(uVar5,local_108,local_128,uVar6);
  dVar8 = (double)local_120;
  uVar6 = FUN_0042b6c9(s_EYR_AIRFORCE_00858acc);
  FUN_007a630a(local_108,s__s___0f_00858ab4,uVar6,dVar8);
  uVar6 = FUN_00584270(100,200,200);
  FUN_004107f0(uVar5,local_108,local_120,uVar6);
  FUN_00410600();
  return;
}


