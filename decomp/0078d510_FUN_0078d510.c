// FUN_0078d510 @ 78d510 size=460

undefined4 __thiscall FUN_0078d510(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  float10 fVar8;
  float local_c;
  float local_8;
  
  iVar7 = 0x8c;
  local_8 = 0.0;
  local_c = 0.0;
  do {
    while( true ) {
      while( true ) {
        iVar2 = FUN_00535490();
        if (iVar2 == 1) break;
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 4) {
          FUN_005343dc();
          param_1 = param_1 + (iVar7 + param_3 * 0x8c) * 8;
          *(float *)(param_1 + 0x356e6) = local_c;
          *(float *)(param_1 + 0x356ea) = local_8;
          return 0;
        }
      }
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0x141) break;
      if (iVar2 == 0x354) {
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        local_8 = (float)fVar8;
      }
      else if (iVar2 == 0x355) {
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        local_c = (float)fVar8;
      }
      else {
        FUN_005349b0(s_Unknown_Upgrade_Modifier__0087b544);
      }
    }
    iVar7 = FUN_004fdae0(param_2 + 0x40c);
    if (iVar7 == 0x8c) {
      FUN_005349b0(s_Unknown_Unit_Type_in_upgrade_pat_0087b520);
    }
    iVar2 = (&DAT_00dbd1a2)[param_3];
    iVar1 = (&DAT_00dbd1a2)[iVar7];
    if (iVar2 < 0xc != iVar1 < 0xc) goto LAB_0078d643;
    if ((iVar2 < 0xc) || ((0x14 < iVar2 && (iVar2 != 0x8c)))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if ((iVar1 < 0xc) || ((0x14 < iVar1 && (iVar1 != 0x8c)))) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    if (cVar6 != cVar5) goto LAB_0078d643;
    if ((iVar2 < 0x15) || (iVar2 == 0x8c)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if ((iVar1 < 0x15) || (iVar1 == 0x8c)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    if (cVar6 != cVar5) {
LAB_0078d643:
      uVar3 = FUN_004fe7e0(iVar7);
      uVar3 = FUN_005341fe(uVar3);
      uVar3 = FUN_004fe7e0(param_3,uVar3);
      uVar3 = FUN_005341fe(uVar3);
      FUN_00429a00(s_ERROR___Invalid_upgrade_path___c_0087b4cc,uVar3);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_005349b0(s_Invalid_custom_upgrade_path___ch_0087b484);
    }
  } while( true );
}


