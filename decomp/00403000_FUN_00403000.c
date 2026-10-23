// FUN_00403000 @ 403000 size=120

void __thiscall FUN_00403000(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = *param_4;
  iVar1 = param_4[1];
  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar4 = param_1[6];
  iVar6 = (**(code **)(*param_1 + 8))();
  puVar8 = (uint *)(iVar6 + iVar4 * param_3[1] + *param_3);
  for (iVar9 = ((int)((iVar9 - iVar2) + (iVar9 - iVar2 >> 0x1f & 3U)) >> 2) + 1; iVar9 != 0;
      iVar9 = iVar9 + -1) {
    puVar7 = puVar8 + 1;
    uVar5 = *puVar8;
    iVar2 = iVar1 - iVar3;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      *(uint *)((int)puVar8 + iVar4) = *(uint *)((int)puVar8 + iVar4) ^ uVar5;
      uVar5 = *(uint *)((int)puVar8 + iVar4);
      puVar8 = (uint *)((int)puVar8 + iVar4);
    }
    puVar8 = puVar7;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


