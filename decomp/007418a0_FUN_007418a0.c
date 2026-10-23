// FUN_007418a0 @ 7418a0 size=438

undefined4 __thiscall FUN_007418a0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  
  uVar5 = *(uint *)(param_3 + 8);
  uVar7 = uVar5;
  if (DAT_007f33d8 < uVar5) {
    uVar7 = DAT_007f33d8;
  }
  if (param_1 + 0xe == param_3) {
    FUN_00742780(uVar7,DAT_007f33d8);
    FUN_00742780(0,0);
  }
  else {
    if ((uVar7 != 0) && (uVar7 == uVar5)) {
      puVar2 = *(undefined4 **)(param_3 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar2 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar2 = *(undefined4 **)(param_3 + 4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 0x12) = puVar2;
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 0xc);
        *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
        goto LAB_00741964;
      }
    }
    cVar1 = FUN_00674e40(uVar7,1);
    if (cVar1 != '\0') {
      puVar2 = *(undefined4 **)(param_3 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_007f0c98;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x12);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00674e20(uVar7);
    }
  }
LAB_00741964:
  iVar3 = FUN_007420f0();
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  if (param_2 < 1) {
    FUN_0074bc80(s_Port_not_set_to_valid_portnumber_00874420,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x110);
  }
  uVar5 = 0xffffffff;
  pcVar10 = &DAT_0088ebf8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = *(uint *)(param_3 + 8);
  uVar6 = ~uVar5 - 1;
  uVar5 = uVar7;
  if (uVar6 <= uVar7) {
    uVar5 = uVar6;
  }
  bVar12 = false;
  iVar3 = 0;
  bVar13 = true;
  pbVar8 = *(byte **)(param_3 + 4);
  pbVar11 = &DAT_0088ebf8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar12 = *pbVar8 < *pbVar11;
    bVar13 = *pbVar8 == *pbVar11;
    pbVar8 = pbVar8 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar13);
  if (!bVar13) {
    iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  if (((iVar3 == 0) && (uVar6 <= uVar7)) && (uVar7 == uVar6)) {
    FUN_0074bc80(s_No_host_specified_0087440c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x115);
  }
  *(int *)(param_1 + 4) = param_2;
  iVar3 = FUN_00741ff0(param_3);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  iVar3 = Ordinal_4(*(undefined4 *)(param_1 + 0x22),param_1 + 0x26,0x10);
  if (iVar3 < 0) {
    uVar4 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar4;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x1e) = 4;
  return 1;
}


