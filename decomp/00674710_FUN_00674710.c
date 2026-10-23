// FUN_00674710 @ 674710 size=512

int __thiscall FUN_00674710(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_00798da9();
  }
  uVar4 = DAT_007f33d8;
  uVar6 = *(uint *)(param_2 + 8) - param_3;
  if (param_4 < uVar6) {
    uVar6 = param_4;
  }
  if (param_1 == param_2) {
    uVar6 = uVar6 + param_3;
    if (*(uint *)(param_1 + 8) < uVar6) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar2 = *(int *)(param_1 + 8) - uVar6;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      iVar5 = *(int *)(param_1 + 4) + uVar6;
      FUN_007a9270(iVar5,iVar5 + uVar4,uVar2 - uVar4);
      iVar5 = *(int *)(param_1 + 8) - uVar4;
      cVar1 = FUN_00674e40(iVar5,0);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 8) = iVar5;
        *(undefined1 *)(iVar5 + *(int *)(param_1 + 4)) = 0;
      }
    }
    FUN_00675ee0();
    uVar4 = *(uint *)(param_1 + 8);
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    if (param_3 == 0) {
      return param_1;
    }
    FUN_007a9270(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + param_3,uVar4 - param_3);
    iVar5 = *(int *)(param_1 + 8) - param_3;
    cVar1 = FUN_00674e40(iVar5,0);
    if (cVar1 == '\0') {
      return param_1;
    }
    FUN_00674e20(iVar5);
    return param_1;
  }
  if ((uVar6 != 0) && (uVar6 == *(uint *)(param_2 + 8))) {
    puVar3 = *(undefined4 **)(param_2 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    if (*(byte *)((int)puVar3 + -1) < 0xfe) {
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar5 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_00796cd8((char *)(iVar5 + -1));
        }
        else {
          *(char *)(iVar5 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      puVar3 = *(undefined4 **)(param_2 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      *(undefined4 **)(param_1 + 4) = puVar3;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
      return param_1;
    }
  }
  uVar4 = FUN_00675dc0();
  if (uVar4 < uVar6) {
    FUN_00798b7d();
  }
  iVar5 = *(int *)(param_1 + 4);
  if (((iVar5 == 0) || (cVar1 = *(char *)(iVar5 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar6 == 0) {
      FUN_00674910(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar6 <= *(uint *)(param_1 + 0xc))) goto LAB_006748dc;
    FUN_00674910(1);
  }
  else if (uVar6 == 0) {
    *(char *)(iVar5 + -1) = cVar1 + -1;
    FUN_00674910(0);
    return param_1;
  }
  FUN_00675dd0(uVar6);
LAB_006748dc:
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &DAT_007f0c98;
  }
  puVar3 = (undefined4 *)(param_3 + (int)puVar3);
  puVar7 = *(undefined4 **)(param_1 + 4);
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)(param_1 + 8) = uVar6;
  *(undefined1 *)(uVar6 + *(int *)(param_1 + 4)) = 0;
  return param_1;
}


