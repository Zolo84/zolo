// FUN_00753890 @ 753890 size=323

undefined4 __thiscall
FUN_00753890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 *param_7,uint param_8,undefined4 param_9)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_28 [4];
  undefined4 *local_24;
  uint local_20;
  int local_1c;
  
  puVar7 = param_7;
  local_28[0] = param_6;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = 0;
  uVar6 = param_8;
  if (DAT_007f33d8 < param_8) {
    uVar6 = DAT_007f33d8;
  }
  if (local_28 == &param_6) {
    FUN_00742780(uVar6,DAT_007f33d8);
    FUN_00742780(0,0);
    puVar7 = param_7;
  }
  else {
    if ((uVar6 != 0) && (uVar6 == param_8)) {
      puVar3 = &DAT_007f0c98;
      if (param_7 != (undefined4 *)0x0) {
        puVar3 = param_7;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_00674910(1);
        local_24 = &DAT_007f0c98;
        if (puVar7 != (undefined4 *)0x0) {
          local_24 = puVar7;
        }
        local_20 = param_8;
        local_1c = param_9;
        *(char *)((int)local_24 + -1) = *(char *)((int)local_24 + -1) + '\x01';
        goto LAB_00753976;
      }
    }
    cVar2 = FUN_00674e40(uVar6,1);
    if (cVar2 != '\0') {
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = &DAT_007f0c98;
      }
      puVar3 = local_24;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_00674e20(uVar6);
      puVar7 = param_7;
    }
  }
LAB_00753976:
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  uVar4 = FUN_007539e0(param_2,param_3,param_4,param_5,iVar1);
  if (puVar7 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar7 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)((int)puVar7 + -1) = cVar2 + -1;
      return uVar4;
    }
    local_1c = (int)puVar7 + -1;
    local_20 = 0x7539c4;
    FUN_00796cd8();
  }
  return uVar4;
}


