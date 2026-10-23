// FUN_0074f620 @ 74f620 size=334

undefined4 FUN_0074f620(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_24 [4];
  undefined4 *local_20;
  uint local_1c;
  undefined4 local_18;
  
  uVar6 = DAT_007f33d8;
  local_24[0] = *(undefined1 *)(param_1 + 0x154);
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar2 = *(uint *)(param_1 + 0x15c);
  uVar4 = uVar2;
  if (DAT_007f33d8 < uVar2) {
    uVar4 = DAT_007f33d8;
  }
  if (local_24 == (undefined1 *)(param_1 + 0x154)) {
    if (uVar4 != 0) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar2 = local_1c - uVar4;
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      FUN_007a9270((undefined1 *)(uVar4 + (int)local_20),
                   (undefined1 *)(uVar4 + (int)local_20) + uVar6,uVar2 - uVar6);
      iVar5 = local_1c - uVar6;
      cVar1 = FUN_00674e40(iVar5,0);
      if (cVar1 != '\0') {
        FUN_00674e20(iVar5);
      }
    }
    FUN_00675ee0();
    FUN_007515a0();
    return 0;
  }
  if ((uVar4 != 0) && (uVar4 == uVar2)) {
    puVar3 = *(undefined4 **)(param_1 + 0x158);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    if (*(byte *)((int)puVar3 + -1) < 0xfe) {
      FUN_00674910(1);
      local_20 = *(undefined4 **)(param_1 + 0x158);
      if (local_20 == (undefined4 *)0x0) {
        local_20 = &DAT_007f0c98;
      }
      local_1c = *(undefined4 *)(param_1 + 0x15c);
      local_18 = *(undefined4 *)(param_1 + 0x160);
      *(char *)((int)local_20 + -1) = *(char *)((int)local_20 + -1) + '\x01';
      FUN_007515a0();
      return 0;
    }
  }
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    puVar3 = *(undefined4 **)(param_1 + 0x158);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    puVar7 = local_20;
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined1 *)(uVar4 + (int)local_20) = 0;
    local_1c = uVar4;
  }
  FUN_007515a0();
  return 0;
}


