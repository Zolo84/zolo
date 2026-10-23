// FUN_0076c940 @ 76c940 size=678

void FUN_0076c940(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_424 [254];
  char acStack_326 [252];
  undefined1 auStack_22a [6];
  char local_224 [256];
  undefined1 local_124 [20];
  undefined1 local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0bfe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00dc3a00 == '\0') {
LAB_0076c995:
    FUN_007a630a(local_424,s_db_teams_txt_008777a8);
    iVar2 = FUN_007a6615(local_424,&DAT_008390e0);
    if (iVar2 == 0) {
      if (DAT_00dc4b5e != '\0') {
        FUN_00429a00(s_Loading_Tech_Teams___0087775c);
      }
      FUN_007a630a(local_224,s__sdb_tech_teams___csv_00877744,&DAT_00dc2ba0);
      iVar2 = FUN_007a7c64(local_224,local_124);
      if (iVar2 != -1) {
        uVar6 = 0xffffffff;
        pcVar7 = local_224;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        auStack_22a[~uVar6] = 0;
        do {
          FUN_007a630a(local_424,&DAT_0083ca0c,local_224,local_110);
          FUN_0076ce60(local_424,0xffffffff);
          iVar5 = FUN_007a7d31(iVar2,local_124);
        } while (iVar5 == 0);
        FUN_007a7df9(iVar2);
      }
      goto LAB_0076cbb8;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_007a630a(local_424,s__s_db_teams_txt_008777b8,&DAT_00dc3a00);
    iVar2 = FUN_007a6615(local_424,&DAT_008390e0);
    if (iVar2 == 0) goto LAB_0076c995;
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00(s_Loading_Tech_Teams___s____00877788,local_424);
  }
  FUN_007a6429(iVar2);
  pvVar3 = operator_new(0x13e);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_00426f50(local_424);
  }
  local_4 = 0xffffffff;
  cVar1 = FUN_00427570();
  if (cVar1 == '\0') {
LAB_0076ca30:
    FUN_004276c0(acStack_326 + 2);
    uVar6 = 0xffffffff;
    pcVar7 = acStack_326 + 2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((2 < ~uVar6 - 1) && (acStack_326[2] != '#')) {
      do {
        uVar6 = 0xffffffff;
        pcVar7 = acStack_326 + 2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (acStack_326[~uVar6] != '\n') {
          uVar6 = 0xffffffff;
          pcVar7 = acStack_326 + 2;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if (acStack_326[~uVar6] != '\r') goto LAB_0076cab2;
        }
        uVar6 = 0xffffffff;
        pcVar7 = acStack_326 + 2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        acStack_326[~uVar6] = '\0';
      } while( true );
    }
    goto LAB_0076cada;
  }
LAB_0076caea:
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
LAB_0076cbb8:
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00(&DAT_00877740);
  }
  ExceptionList = pvStack_c;
  return;
LAB_0076cab2:
  FUN_007a630a(local_424,s_db_tech_teams__s_00877774,acStack_326 + 2);
  FUN_0076ce60(local_424,0xffffffff);
LAB_0076cada:
  cVar1 = FUN_00427570();
  if (cVar1 != '\0') goto LAB_0076caea;
  goto LAB_0076ca30;
}


