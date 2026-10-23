// FUN_0076f4d0 @ 76f4d0 size=615

void FUN_0076f4d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_428;
  char local_424 [256];
  undefined1 local_324 [250];
  undefined1 auStack_22a [6];
  char local_224 [256];
  undefined1 local_124 [20];
  undefined1 local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0d4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00dc3a00 != '\0') {
    ExceptionList = &local_c;
    FUN_007a630a(local_324,s__s_db_leaders_txt_008785b0,&DAT_00dc3a00);
    iVar2 = FUN_007a6615(local_324,&DAT_008390e0);
    if (iVar2 != 0) goto LAB_0076f55c;
  }
  FUN_007a630a(local_324,s_db_leaders_txt_008785a0);
  iVar2 = FUN_007a6615(local_324,&DAT_008390e0);
  if (iVar2 == 0) {
    FUN_007a630a(local_224,s__sdb_leaders___csv_00878548,&DAT_00dc2ba0);
    iVar2 = FUN_007a7c64(local_224,local_124);
    if (iVar2 == -1) {
      ExceptionList = local_c;
      return;
    }
    uVar5 = 0xffffffff;
    pcVar6 = local_224;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    auStack_22a[~uVar5] = 0;
    do {
      FUN_007a630a(local_324,&DAT_0083ca0c,local_224,local_110);
      FUN_0076e3e0(local_324,param_1);
      iVar4 = FUN_007a7d31(iVar2,local_124);
    } while (iVar4 == 0);
    FUN_007a7df9(iVar2);
    ExceptionList = local_c;
    return;
  }
LAB_0076f55c:
  FUN_007a6429(iVar2);
  local_428 = operator_new(0x13e);
  local_4 = 0;
  if (local_428 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00426f50(local_324);
  }
  local_4 = 0xffffffff;
  cVar1 = FUN_00427570();
joined_r0x0076f5ab:
  if (cVar1 != '\0') {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    ExceptionList = local_c;
    return;
  }
  FUN_004276c0(local_424);
  uVar5 = 0xffffffff;
  pcVar6 = local_424;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if ((2 < ~uVar5 - 1) && (local_424[0] != '#')) {
    do {
      uVar5 = 0xffffffff;
      pcVar6 = local_424;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (local_424[~uVar5 - 2] != '\n') {
        uVar5 = 0xffffffff;
        pcVar6 = local_424;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (local_424[~uVar5 - 2] != '\r') goto LAB_0076f61e;
      }
      uVar5 = 0xffffffff;
      pcVar6 = local_424;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_424[~uVar5 - 2] = '\0';
    } while( true );
  }
  goto LAB_0076f64a;
LAB_0076f61e:
  FUN_007a630a(local_324,s_db_leaders__s_00878574,local_424);
  FUN_0076e3e0(local_324,param_1);
LAB_0076f64a:
  cVar1 = FUN_00427570();
  goto joined_r0x0076f5ab;
}


