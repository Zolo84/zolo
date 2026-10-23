// FUN_00676c80 @ 676c80 size=351

void FUN_00676c80(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d49c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar7 = DAT_007f33d8;
  uVar4 = *(uint *)(param_2 + 8);
  uVar6 = uVar4;
  if (DAT_007f33d8 < uVar4) {
    uVar6 = DAT_007f33d8;
  }
  if (param_1 == param_2) {
    if (uVar6 != 0) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar4 = *(int *)(param_1 + 8) - uVar6;
    if (uVar4 < uVar7) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      FUN_007a9270(uVar6 + *(int *)(param_1 + 4),uVar6 + *(int *)(param_1 + 4) + uVar7,uVar4 - uVar7
                  );
      iVar2 = *(int *)(param_1 + 8);
      cVar3 = FUN_00674e40(iVar2 - uVar7,0);
      if (cVar3 != '\0') {
        FUN_00674e20(iVar2 - uVar7);
      }
    }
    FUN_00675ee0();
  }
  else {
    if ((uVar6 != 0) && (uVar6 == uVar4)) {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_007f0c98;
        }
        *(undefined4 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_00676db5;
      }
    }
    cVar3 = FUN_00674e40(uVar6,1);
    if (cVar3 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_007f0c98;
      }
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar6;
      *(undefined1 *)(uVar6 + *(int *)(param_1 + 4)) = 0;
    }
  }
LAB_00676db5:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  ExceptionList = local_c;
  return;
}


