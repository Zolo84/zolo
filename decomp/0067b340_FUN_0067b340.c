// FUN_0067b340 @ 67b340 size=501

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FUN_0067b340(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            char param_14)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined8 in_stack_000000d4;
  undefined **ppuVar9;
  undefined4 auStack_b6 [5];
  undefined4 auStack_a2 [5];
  undefined4 auStack_8e [5];
  undefined4 auStack_7a [5];
  undefined4 auStack_66 [5];
  undefined4 auStack_52 [5];
  undefined4 auStack_3e [5];
  undefined4 auStack_2a [4];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  piVar2 = (int *)(&DAT_0089cad8)[param_2];
  if (piVar2 == (int *)0x0) {
    return false;
  }
  if (DAT_00d610e6 != '\0') {
    uStack_14 = 0xb36e;
    uStack_12 = 0x67;
    uStack_11 = 0;
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      return true;
    }
  }
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30);
  if ((iVar5 != 0) && (iVar5 != *(int *)((int)piVar2 + 6))) {
    if (param_14 != '\0') {
      return false;
    }
    iVar5 = 0;
    piVar2 = (int *)&stack0x0000004a;
    do {
      if (0 < piVar2[10]) {
        return false;
      }
      if (0 < *piVar2) {
        return false;
      }
      if (0 < piVar2[0x19]) {
        return false;
      }
      if (0 < piVar2[0x1e]) {
        return false;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < 5);
    iVar5 = 0;
    do {
      uStack_14 = (undefined2)iVar5;
      uStack_12 = (undefined1)((uint)iVar5 >> 0x10);
      uStack_11 = (undefined1)((uint)iVar5 >> 0x18);
      uStack_18 = 0xb3d0;
      uStack_16 = 0x67;
      fVar8 = (float10)FUN_00442c00();
      if (fVar8 < (float10)_DAT_007e3380) {
        return false;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
  }
  puVar6 = (undefined4 *)&stack0x00000036;
  puVar7 = auStack_b6;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x0000004a;
  puVar7 = auStack_a2;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x0000005e;
  puVar7 = auStack_8e;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x00000072;
  puVar7 = auStack_7a;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x00000086;
  puVar7 = auStack_66;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x0000009a;
  puVar7 = auStack_52;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x000000ae;
  puVar7 = auStack_3e;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)&stack0x000000c2;
  puVar7 = auStack_2a;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_16 = (undefined2)in_stack_000000d4._2_4_;
  uStack_14 = (undefined2)((uint)in_stack_000000d4._2_4_ >> 0x10);
  uStack_12 = in_stack_000000d4._6_1_;
  ppuVar9 = &PTR_FUN_007e48a4;
  uVar3 = FUN_00667670(&PTR_FUN_007e48a4);
  iVar5 = FUN_00467480(uVar3,ppuVar9,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                       param_11,param_12,param_13,param_14);
  uStack_14 = 0xb521;
  uStack_12 = 0x67;
  uStack_11 = 0;
  iVar4 = _rand();
  return iVar4 % 100 < iVar5;
}


