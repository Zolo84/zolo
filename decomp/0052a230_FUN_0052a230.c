// FUN_0052a230 @ 52a230 size=1081

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052a230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  int local_170;
  int local_16c;
  float local_168;
  int local_164;
  int local_160;
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  char local_140 [32];
  char local_120 [32];
  char local_100 [256];
  
  uVar8 = 0;
  piVar4 = *(int **)(param_1 + 4);
  iVar3 = DAT_00d0ca90;
  while ((piVar4 != (int *)0x0 && (uVar8 < 5))) {
    piVar1 = (int *)piVar4[2];
    iVar6 = *piVar4;
    iVar2 = *(int *)(iVar6 + 0x248);
    piVar4 = piVar1;
    if (iVar2 == iVar3) {
      uVar8 = 5;
    }
    else if (*(char *)(*(int *)(iVar3 + 6) + 0x34ac + iVar2) == '\0') {
      if ((*(int *)(iVar3 + 0x3350) == 0) || (*(int *)(iVar3 + 0x3350) != *(int *)(iVar2 + 0x3350)))
      {
        local_158 = *(float *)(iVar3 + 0x37c2);
        fVar11 = (float10)FUN_0076bbb0(iVar3,9);
        iVar3 = *(int *)(iVar6 + 0x248);
        local_154 = *(float *)(iVar3 + 0x37c6);
        local_15c = *(float *)(*(int *)(iVar3 + 0x244) + 0x82);
        local_168 = (float)((fVar11 + (float10)_DAT_007e3374) * (float10)local_158);
        fVar11 = (float10)FUN_0076bbb0(iVar3,9);
        local_168 = (float)((float10)*(float *)(DAT_00d0ca90 + 0x13c5c) +
                           ((float10)local_168 -
                           ((float10)_DAT_007e4088 - (float10)local_154) *
                           (fVar11 + (float10)_DAT_007e3374) * (float10)local_15c));
        iVar3 = DAT_00d0ca90;
        if (local_168 <= _DAT_007e682c) {
          if (local_168 <= _DAT_007e4090) {
            if (local_168 <= _DAT_007e3380) {
              if (_DAT_007e8d0c < local_168) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          uVar8 = 5;
        }
      }
      else {
        uVar8 = 5;
      }
    }
    else {
      uVar8 = 5;
    }
  }
  if (DAT_00d610dc != '\0') {
    uVar8 = 5;
  }
  local_120[0] = '\0';
  local_140[0] = '\0';
  FUN_005279f0(param_2,&local_16c,&local_170);
  if (uVar8 == 5) {
    if (0 < local_16c) {
      FUN_007a8d98(local_16c,local_120,10);
    }
    if (0 < local_170) {
      FUN_007a8d98(local_170,local_140,10);
    }
  }
  else if (uVar8 == 4) {
    if (0 < local_16c) {
      local_16c = (local_16c / 3) * 3;
      if (local_16c < 1) {
        local_16c = 1;
      }
      FUN_007a630a(local_120,&DAT_0084b408,local_16c);
    }
    if (0 < local_170) {
      local_170 = (local_170 / 3) * 3;
joined_r0x0052a4e9:
      if (local_170 < 1) {
        local_170 = 1;
      }
      FUN_007a630a(local_140,&DAT_0084b408,local_170);
    }
  }
  else if (uVar8 == 3) {
    if (0 < local_16c) {
      local_16c = (local_16c / 5) * 5;
      if (local_16c < 1) {
        local_16c = 1;
      }
      FUN_007a630a(local_120,&DAT_0084b408,local_16c);
    }
    if (0 < local_170) {
      local_170 = (local_170 / 5) * 5;
      goto joined_r0x0052a4e9;
    }
  }
  else {
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_0084b404;
    do {
      pcVar10 = pcVar9;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar5 != '\0');
    uVar8 = ~uVar8;
    pcVar9 = pcVar10 + -uVar8;
    pcVar10 = local_140;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_0084b404;
    do {
      pcVar10 = pcVar9;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar5 != '\0');
    uVar8 = ~uVar8;
    pcVar9 = pcVar10 + -uVar8;
    pcVar10 = local_120;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (local_120[0] == '\0') {
    if (local_140[0] == '\0') goto LAB_0052a5a3;
    pcVar9 = local_140;
  }
  else {
    if (local_140[0] != '\0') {
      FUN_007a630a(local_100,s__s__s_0084b3fc,local_140,local_120);
      goto LAB_0052a5a3;
    }
    pcVar9 = local_120;
  }
  uVar8 = 0xffffffff;
  do {
    pcVar10 = pcVar9;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar9 + 1;
    cVar5 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar5 != '\0');
  uVar8 = ~uVar8;
  pcVar9 = pcVar10 + -uVar8;
  pcVar10 = local_100;
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_0052a5a3:
  cVar5 = FUN_004d8ba0(param_3,param_4,&local_164);
  if (cVar5 != '\0') {
    local_164 = local_164 + 6;
    local_160 = local_160 + 0x18;
    iVar3 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e5e) + 0x10);
    iVar6 = FUN_004129c4(local_100);
    local_144 = iVar3 + local_160;
    local_148 = iVar6 + 2 + local_164;
    local_150 = local_164;
    local_14c = local_160;
    FUN_004045f0(&local_150);
    FUN_004133fd(local_100,local_164 + 1,local_160 + 1,DAT_00bd1bac,0xffff,0);
  }
  return;
}


