// FUN_00752280 @ 752280 size=557

int __thiscall FUN_00752280(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar6 = DAT_007f33d8;
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar5 = uVar2;
  if (DAT_007f33d8 < uVar2) {
    uVar5 = DAT_007f33d8;
  }
  if (param_1 + 4 == param_2 + 4) {
    if (*(uint *)(param_1 + 0xc) < uVar5) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar2 = *(int *)(param_1 + 0xc) - uVar5;
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      iVar4 = *(int *)(param_1 + 8) + uVar5;
      FUN_007a9270(iVar4,iVar4 + uVar6,uVar2 - uVar6);
      iVar4 = *(int *)(param_1 + 0xc) - uVar6;
      cVar1 = FUN_00674e40(iVar4,0);
      if (cVar1 != '\0') {
        FUN_00674e20(iVar4);
      }
    }
    FUN_00742780(0,0);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar2)) {
      puVar3 = *(undefined4 **)(param_2 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar3 = *(undefined4 **)(param_2 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 8) = puVar3;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_0075238f;
      }
    }
    cVar1 = FUN_00674e40(uVar5,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_2 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      puVar7 = *(undefined4 **)(param_1 + 8);
      for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00674e20(uVar5);
    }
  }
LAB_0075238f:
  uVar6 = DAT_007f33d8;
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar5 = uVar2;
  if (DAT_007f33d8 < uVar2) {
    uVar5 = DAT_007f33d8;
  }
  if (param_1 + 0x14 == param_2 + 0x14) {
    if (*(uint *)(param_1 + 0x1c) < uVar5) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar2 = *(int *)(param_1 + 0x1c) - uVar5;
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      iVar4 = uVar5 + *(int *)(param_1 + 0x18);
      FUN_007a9270(iVar4,iVar4 + uVar6,uVar2 - uVar6);
      iVar4 = *(int *)(param_1 + 0x1c) - uVar6;
      cVar1 = FUN_00674e40(iVar4,0);
      if (cVar1 != '\0') {
        FUN_00674e20(iVar4);
      }
    }
    FUN_00742780(0,0);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar2)) {
      puVar3 = *(undefined4 **)(param_2 + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar3 = *(undefined4 **)(param_2 + 0x18);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 0x18) = puVar3;
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_00752493;
      }
    }
    cVar1 = FUN_00674e40(uVar5,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_2 + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x18);
      for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00674e20(uVar5);
    }
  }
LAB_00752493:
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}


