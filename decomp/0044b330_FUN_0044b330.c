// FUN_0044b330 @ 44b330 size=451

void __thiscall FUN_0044b330(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  uVar5 = 0xffffffff;
  pcVar3 = param_2;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  pcVar7 = (char *)(param_1 + 0x1b);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = FUN_004af6b0(param_2);
  pcVar3 = (char *)FUN_004af5c0(uVar2);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  pcVar7 = (char *)(param_1 + 0x51a);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar3 = (char *)FUN_004af610(uVar2);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  pcVar7 = (char *)(param_1 + 0x61a);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar3 = (char *)FUN_004af660(uVar2);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  pcVar7 = (char *)(param_1 + 0x71a);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = FUN_00413d60(s_counter_bmp_0083c640);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  FUN_007a630a(local_200,s_counter__s_s_bmp_0083c724,param_1 + 0x1b,param_1 + 0x31a);
  if (DAT_00dc3a00 == '\0') {
    FUN_007a630a(local_100,s_gfx_palette__s_0082f1e4,local_200);
    iVar4 = FUN_007a6615(local_100,&DAT_0082eeb4);
  }
  else {
    FUN_007a630a(local_100,s__s_gfx_palette__s_0083c710,&DAT_00dc3a00,local_200);
    iVar4 = FUN_007a6615(local_100,&DAT_0082eeb4);
    if (iVar4 != 0) goto LAB_0044b4d2;
    FUN_007a630a(local_100,s_gfx_palette__s_0082f1e4,local_200);
    iVar4 = FUN_007a6615(local_100,&DAT_0082eeb4);
  }
  if (iVar4 == 0) {
    return;
  }
LAB_0044b4d2:
  uVar2 = FUN_00413d60(local_200);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  FUN_007a6429(iVar4);
  return;
}


