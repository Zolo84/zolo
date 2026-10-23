// FUN_00745ef0 @ 745ef0 size=480

int FUN_00745ef0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_54;
  char *local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined1 local_31;
  int *local_30;
  undefined1 local_28 [4];
  char *local_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 local_18 [8];
  int iStack_10;
  int iStack_c;
  int local_4;
  
  uStack_48 = 0;
  local_28[0] = param_1._0_1_;
  uStack_4c = 0x745f0e;
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
  uStack_48 = 1;
  local_50 = (char *)0x745f2c;
  uStack_4c = uVar3;
  cVar1 = FUN_00674e40();
  if (cVar1 != '\0') {
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      local_24 = local_24 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_24 = *param_1;
      param_1 = param_1 + 1;
      local_24 = local_24 + 1;
    }
    uStack_4c = 0x745f4e;
    uStack_48 = uVar3;
    FUN_00674e20();
  }
  param_1._0_1_ = SUB41(&local_54,0);
  local_54 = CONCAT31(local_54._1_3_,param_1._0_1_);
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
    pcVar5 = local_50;
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
  FUN_00673c70(param_3,&local_31);
  FUN_007460d0(local_18,local_28,param_2);
  uStack_48 = 1;
  uStack_4c = 0x745fdc;
  FUN_00674910();
  if (local_4 != 0) {
    uStack_48 = 1;
    uStack_4c = 0x745fef;
    FUN_00674910();
    return local_4;
  }
  uStack_48 = 0x29a;
  uStack_4c = 0xd05;
  local_50 = (char *)0x746010;
  (**(code **)(*local_30 + 8))();
  local_50 = auStack_20;
  local_54 = iStack_10;
  iVar2 = FUN_007418a0();
  if (iVar2 != -1) {
    *(undefined1 *)((int)local_30 + 0x24e) = 1;
    local_50 = (char *)DAT_007f33d8;
    local_54 = 0;
    FUN_00674710();
    local_30[0x98] = iStack_10;
    local_30[0x99] = iStack_c;
    if (iStack_1c != 0) {
      cVar1 = *(char *)(iStack_1c + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_1c + -1) = cVar1 + -1;
        return 0;
      }
      local_50 = (char *)(iStack_1c + -1);
      local_54 = 0x7460c1;
      FUN_00796cd8();
    }
    return 0;
  }
  if (iStack_1c != 0) {
    cVar1 = *(char *)(iStack_1c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_1c + -1) = cVar1 + -1;
      return 3;
    }
    local_50 = (char *)(iStack_1c + -1);
    local_54 = 0x746055;
    FUN_00796cd8();
  }
  return 3;
}


