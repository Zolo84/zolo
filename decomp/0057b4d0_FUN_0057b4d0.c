// FUN_0057b4d0 @ 57b4d0 size=561

bool __thiscall FUN_0057b4d0(int param_1,undefined4 param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  char *local_1c;
  uint auStack_10 [4];
  
  uVar4 = 0;
  FUN_0057bec0();
  if (*(int *)(param_1 + 0xbc4) == 0) {
    return false;
  }
  if (param_3 == 0x10000) {
    return (1 << ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x388)) != 0;
  }
  if (param_3 != 0x10001) {
    return false;
  }
  *(undefined4 *)(param_1 + 0x3ac) = 0x887700fa;
  if ((short)param_2 == 0) {
    if ((*(byte *)(param_1 + 0x388) & 1) != 0) {
      local_48 = DAT_007febd0;
      local_44 = DAT_007febd4;
      local_40 = DAT_007febd8;
      local_3c = DAT_007febdc;
      local_38 = 0x10;
      local_34 = &DAT_007fece0;
      uVar4 = 1;
    }
  }
  else if (((short)param_2 == 1) && ((*(byte *)(param_1 + 0x388) & 2) != 0)) {
    local_44 = DAT_007febd4;
    local_48 = DAT_007febd0;
    local_40 = DAT_007febd8;
    local_3c = DAT_007febdc;
    local_38 = 0x10;
    local_34 = &DAT_007fecd0;
    if (param_4 == (char *)0x0) {
      local_20 = 0xffffffff;
      pcVar5 = &DAT_00bd055c;
      do {
        if (local_20 == 0) break;
        local_20 = local_20 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_1c = &DAT_00bd055c;
    }
    else {
      local_20 = 0xffffffff;
      local_1c = param_4;
      pcVar5 = param_4;
      do {
        if (local_20 == 0) break;
        local_20 = local_20 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    local_20 = ~local_20;
    local_24 = DAT_007feb7c;
    local_28 = DAT_007feb78;
    local_2c = DAT_007feb74;
    local_30 = DAT_007feb70;
    uVar4 = 2;
  }
  puStack_58 = &param_2;
  uStack_5c = 0;
  (**(code **)(**(int **)(param_1 + 0xbc8) + 0x38))(*(int **)(param_1 + 0xbc8),&local_48,uVar4);
  pvVar3 = operator_new(auStack_10[0]);
  (**(code **)(**(int **)(param_1 + 0xbc8) + 0x38))
            (*(int **)(param_1 + 0xbc8),&uStack_5c,uVar4,pvVar3,auStack_10);
  uVar4 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x98))(*(int **)(param_1 + 0xbc4),pvVar3,0);
  *(undefined4 *)(param_1 + 0x3ac) = uVar4;
  FUN_00796cd8(pvVar3);
  iVar2 = *(int *)(param_1 + 0x3ac);
  if (iVar2 == -0x7788ff88) {
    return false;
  }
  if (iVar2 != -0x7ff8ffa9) {
    return iVar2 != -0x7788ff06;
  }
  return false;
}


