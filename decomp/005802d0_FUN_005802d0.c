// FUN_005802d0 @ 5802d0 size=493

void __thiscall FUN_005802d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  if (param_3 != 1) {
    iVar6 = 0;
    iVar1 = param_3 >> 1;
    if (-1 < param_3 / 2) {
      iVar4 = iVar1 << 3;
      puVar2 = (undefined4 *)(param_2 + 8 + param_4 * 8);
      do {
        iVar4 = iVar4 + 8;
        *(undefined4 *)(*(int *)(param_1 + 0xba) + iVar6 * 8) = puVar2[-2];
        *(undefined4 *)(*(int *)(param_1 + 0xba) + 4 + iVar6 * 8) = puVar2[-1];
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0xba) + -8 + iVar4) = *puVar2;
        *(undefined4 *)(*(int *)(param_1 + 0xba) + -4 + iVar4) = puVar2[1];
        puVar2 = puVar2 + 4;
      } while (iVar6 <= param_3 / 2);
    }
    FUN_005802d0(param_2,iVar1,param_4,param_5);
    FUN_005802d0(param_2,iVar1,param_4 + iVar1 + 1,param_5);
    iVar6 = param_5 + 1;
    param_5 = 0;
    if (-1 < iVar1) {
      piVar3 = (int *)(param_2 + 4 + (param_4 + iVar1) * 8);
      local_10 = 0;
      piVar5 = (int *)(param_2 + param_4 * 8);
      local_8 = iVar1 * 8;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0xbe) + 4 + (local_10 >> 0x10) * 8) * *piVar3 >> 0x10;
        *(int *)(*(int *)(param_1 + 0xba) + param_5 * 8) = *piVar5 + iVar4;
        *(int *)(*(int *)(param_1 + 0xba) + 4 + param_5 * 8) = piVar5[1] + iVar4;
        *(int *)(local_8 + *(int *)(param_1 + 0xba)) = *piVar5 - iVar4;
        *(int *)(local_8 + 4 + *(int *)(param_1 + 0xba)) = piVar5[1] - iVar4;
        local_10 = local_10 + (iVar6 * 0x10000) / (param_3 + 1);
        param_5 = param_5 + 1;
        piVar3 = piVar3 + 2;
        piVar5 = piVar5 + 2;
        local_8 = local_8 + 8;
      } while (param_5 <= iVar1);
    }
    iVar1 = 0;
    if (-1 < param_3) {
      piVar3 = (int *)(param_2 + param_4 * 8);
      do {
        piVar3[1] = *(int *)(*(int *)(param_1 + 0xba) + 4 + iVar1 * 8) >> 4;
        *piVar3 = *(int *)(*(int *)(param_1 + 0xba) + iVar1 * 8) >> 4;
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar1 <= param_3);
    }
    return;
  }
  iVar1 = *(int *)(param_2 + param_4 * 8);
  iVar6 = *(int *)(param_2 + 4 + param_4 * 8);
  iVar4 = iVar6 - iVar1;
  *(int *)(param_2 + param_4 * 8) = iVar6 + iVar1;
  *(int *)(param_2 + 4 + param_4 * 8) = iVar4;
  *(int *)(param_2 + 8 + param_4 * 8) = iVar4;
  *(int *)(param_2 + 0xc + param_4 * 8) = iVar4;
  return;
}


