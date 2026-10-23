// FUN_00745350 @ 745350 size=285

undefined1 * __thiscall
FUN_00745350(undefined1 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = DAT_007f33d8;
  uVar3 = *(uint *)(param_3 + 8);
  uVar5 = uVar3;
  if (DAT_007f33d8 < uVar3) {
    uVar5 = DAT_007f33d8;
  }
  if (param_1 == param_3) {
    if (uVar5 != 0) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar3 = *(int *)(param_1 + 8) - uVar5;
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_007a9270(uVar5 + *(int *)(param_1 + 4),uVar5 + *(int *)(param_1 + 4) + uVar6,uVar3 - uVar6
                  );
      iVar1 = *(int *)(param_1 + 8);
      cVar2 = FUN_00674e40(iVar1 - uVar6,0);
      if (cVar2 != '\0') {
        FUN_00674e20(iVar1 - uVar6);
      }
    }
    FUN_00675ee0();
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar3)) {
      puVar4 = *(undefined4 **)(param_3 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar4 = *(undefined4 **)(param_3 + 4);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 4) = puVar4;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_00745456;
      }
    }
    cVar2 = FUN_00674e40(uVar5,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_3 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_007f0c98;
      }
      puVar7 = *(undefined4 **)(param_1 + 4);
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)(param_1 + 8) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar5) = 0;
    }
  }
LAB_00745456:
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return param_1;
}


