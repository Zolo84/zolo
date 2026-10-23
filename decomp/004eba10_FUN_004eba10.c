// FUN_004eba10 @ 4eba10 size=251

void __thiscall FUN_004eba10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  iVar7 = *(int *)(param_1 + 0x294);
  iVar1 = *(int *)(param_1 + 0x298);
  iVar2 = *(int *)(param_1 + 0x290);
  pvVar3 = operator_new((iVar7 + 1) * 0xc);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  *(void **)(param_1 + 0x298) = pvVar3;
  *(int *)(param_1 + 0x290) = iVar2 + 1;
  *(int *)(param_1 + 0x294) = iVar7 + 1;
  iVar5 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    local_8 = iVar2;
    do {
      puVar6 = (undefined4 *)(iVar1 + iVar4);
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x298) + iVar4);
      iVar4 = iVar4 + 0xc;
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
      local_8 = local_8 + -1;
      iVar5 = iVar2;
    } while (local_8 != 0);
  }
  if (iVar5 < iVar7) {
    iVar4 = (iVar5 * 3 + 3) * 4;
    iVar7 = iVar7 - iVar5;
    do {
      puVar6 = (undefined4 *)(iVar1 + -0xc + iVar4);
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x298) + iVar4);
      iVar4 = iVar4 + 0xc;
      iVar7 = iVar7 + -1;
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar8[2] = puVar6[2];
    } while (iVar7 != 0);
  }
  FUN_004eb940(iVar2,param_2);
  FUN_00796cd8(iVar1);
  *(int *)(param_1 + 0x136) = *(int *)(param_1 + 0x136) + 1;
  return;
}


