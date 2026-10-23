// FUN_0074b100 @ 74b100 size=390

undefined4 __thiscall
FUN_0074b100(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 0x78) = param_2;
  FUN_00674710(param_4,0,DAT_007f33d8);
  FUN_00674710(param_5,0,DAT_007f33d8);
  *(undefined4 *)(param_1 + 0x74) = param_6;
  FUN_00674710(&param_7,0,DAT_007f33d8);
  if ((*(uint *)(param_1 + 0x70) < *(uint *)(param_1 + 0x74)) || (*(uint *)(param_1 + 0x74) == 0)) {
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x78);
    iVar2 = FUN_00758d30(param_3);
    if (iVar2 == 0) {
      *(undefined4 *)(param_3 + 0x24) = 0;
    }
  }
  FUN_00674710(param_3 + 4,0,DAT_007f33d8);
  uVar4 = *(uint *)(param_3 + 0x1c);
  uVar5 = uVar4;
  if (DAT_007f33d8 < uVar4) {
    uVar5 = DAT_007f33d8;
  }
  if (param_1 + 0x48 == param_3 + 0x14) {
    FUN_00742780(uVar5,DAT_007f33d8);
    FUN_00742780(0,0);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar4)) {
      puVar3 = *(undefined4 **)(param_3 + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar3 = *(undefined4 **)(param_3 + 0x18);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 0x4c) = puVar3;
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x20);
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_0074b246;
      }
    }
    cVar1 = FUN_00674e40(uVar5,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_3 + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x4c);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)(param_1 + 0x50) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + uVar5) = 0;
    }
  }
LAB_0074b246:
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x28);
  if (param_8 != 0) {
    cVar1 = *(char *)(param_8 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_8 + -1) = cVar1 + -1;
      return 0;
    }
    FUN_00796cd8(param_8 + -1);
  }
  return 0;
}


