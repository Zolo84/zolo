// FUN_007466f0 @ 7466f0 size=447

int FUN_007466f0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *local_60;
  char *local_5c;
  char *pcStack_58;
  undefined1 *puStack_54;
  undefined1 local_3d [9];
  undefined1 local_34 [4];
  char *local_30;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df4f8;
  local_c = ExceptionList;
  puStack_54 = (undefined1 *)0x0;
  local_34[0] = param_1._0_1_;
  pcStack_58 = (char *)0x746723;
  ExceptionList = &local_c;
  FUN_00674910();
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  puStack_54 = (undefined1 *)0x1;
  local_5c = (char *)0x746741;
  pcStack_58 = (char *)uVar3;
  cVar1 = FUN_00674e40();
  if (cVar1 != '\0') {
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_30 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      local_30 = local_30 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_30 = *param_1;
      param_1 = param_1 + 1;
      local_30 = local_30 + 1;
    }
    pcStack_58 = (char *)0x746763;
    puStack_54 = (undefined1 *)uVar3;
    FUN_00674e20();
  }
  local_4 = 0;
  param_1._0_1_ = SUB41(&local_60,0);
  local_60 = (char *)CONCAT31(local_60._1_3_,param_1._0_1_);
  FUN_00674910();
  uVar3 = 0xffffffff;
  pcVar5 = param_4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00674e40();
  if (cVar1 != '\0') {
    pcVar5 = local_5c;
    for (uVar4 = ~uVar3 - 1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = ~uVar3 - 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_4;
      param_4 = param_4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_00674e20();
  }
  local_4._0_1_ = 1;
  FUN_00673c70(param_3,local_3d);
  local_4._0_1_ = 0;
  FUN_007460d0(local_24,local_34,param_2);
  puStack_54 = (undefined1 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,3);
  pcStack_58 = (char *)0x74680c;
  FUN_00674910();
  if (local_10 == 0) {
    puStack_54 = local_24;
    pcStack_58 = (char *)local_14;
    local_5c = (char *)0x746856;
    iVar2 = FUN_00741b50();
    if (iVar2 == -1) {
      puStack_54 = (undefined1 *)0x6a;
      pcStack_58 = s_C__Dev_HoI2_Projects_Darkest_Hou_0087473c;
      local_5c = s_Unknown_method_00874398;
      local_60 = s_socket_reconnects_cil_getPort_____0087470c;
      FUN_0074bc80();
    }
    if (local_20 != 0) {
      cVar1 = *(char *)(local_20 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        puStack_54 = (undefined1 *)(local_20 + -1);
        pcStack_58 = (char *)0x746895;
        FUN_00796cd8();
      }
      else {
        *(char *)(local_20 + -1) = cVar1 + -1;
      }
    }
    local_10 = 0;
  }
  else if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_54 = (undefined1 *)(local_20 + -1);
      pcStack_58 = (char *)0x746839;
      FUN_00796cd8();
    }
    else {
      *(char *)(local_20 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return local_10;
}


