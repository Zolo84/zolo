// FUN_0058ab10 @ 58ab10 size=302

void __thiscall FUN_0058ab10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a6 [5];
  undefined4 local_92 [5];
  undefined4 local_7e [5];
  undefined4 local_6a [5];
  undefined4 local_56 [5];
  undefined4 local_42 [5];
  undefined4 local_2e [5];
  undefined4 local_1a [5];
  undefined4 local_6;
  undefined1 local_2;
  
  FUN_00442b90();
  uVar3 = *(undefined4 *)(param_1 + 0x42);
  uVar1 = *(undefined4 *)(param_1 + 0x32);
  uVar4 = *(undefined4 *)(param_1 + 0x36);
  uVar5 = *(undefined4 *)(param_1 + 0x3e);
  uVar2 = *(undefined4 *)(param_1 + 0x2e);
  param_2[4] = *(undefined4 *)(param_1 + 0x3a);
  param_2[6] = uVar5;
  param_2[8] = local_b4;
  param_2[10] = local_ac;
  param_2[5] = uVar4;
  puVar7 = local_a6;
  puVar8 = (undefined4 *)((int)param_2 + 0x2e);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar1;
  puVar7 = local_92;
  puVar8 = (undefined4 *)((int)param_2 + 0x42);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_2[7] = local_b8;
  puVar7 = local_7e;
  puVar8 = (undefined4 *)((int)param_2 + 0x56);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = local_6a;
  puVar8 = (undefined4 *)((int)param_2 + 0x6a);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_2[9] = local_b0;
  puVar7 = local_56;
  puVar8 = (undefined4 *)((int)param_2 + 0x7e);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = local_42;
  puVar8 = (undefined4 *)((int)param_2 + 0x92);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)(param_2 + 0xb) = 1;
  puVar7 = local_2e;
  puVar8 = (undefined4 *)((int)param_2 + 0xa6);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)param_2 + 0xce) = local_6;
  puVar7 = local_1a;
  puVar8 = (undefined4 *)((int)param_2 + 0xba);
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)((int)param_2 + 0xd2) = local_2;
  *param_2 = &PTR_FUN_007e48a4;
  return;
}


