// FUN_006cd920 @ 6cd920 size=444

void __thiscall FUN_006cd920(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_11c;
  int local_118;
  void *local_114;
  int local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8ecc;
  local_c = ExceptionList;
  if (DAT_00dc3a00 == '\0') {
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = local_10c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; ExceptionList = &local_c, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_007a630a(local_10c,s__s__s_0083a350,&DAT_00dc3a00,param_2);
  }
  iVar3 = FUN_007a6615(local_10c,&DAT_0082eeb4);
  if (iVar3 != 0) {
    local_114 = operator_new(0x13e);
    local_4 = 0;
    if (local_114 != (void *)0x0) {
      FUN_00426d70(param_2,&DAT_0082eeb4);
    }
    local_4 = 0xffffffff;
    FUN_004271a0(&local_118,4);
    FUN_004271a0(&local_110,4);
    FUN_004271a0(&local_11c,4);
    piVar2 = (int *)*param_1;
    if (((local_118 == *piVar2) && (local_110 == piVar2[1])) && (local_11c == piVar2[2])) {
      FUN_004273c0(0);
      FUN_004271a0(*param_1,0x424);
      FUN_006e9260();
      FUN_006e92b0();
      local_114 = operator_new(0x13e);
      local_4 = 1;
      if (local_114 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_00426d70(s_config_eu_0086b7e4,&DAT_0082ef98);
      }
      local_4 = 0xffffffff;
      FUN_004272b0(*param_1,0x424);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


