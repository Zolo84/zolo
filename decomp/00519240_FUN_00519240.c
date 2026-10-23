// FUN_00519240 @ 519240 size=283

void __thiscall FUN_00519240(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  else if (100 < (int)param_2) {
    param_2 = 100;
  }
  iVar1 = (*(int **)(param_1 + 0x62))[1];
  param_2 = (int)((iVar1 + -4) * param_2) / 100;
  if ((int)param_2 < 2) {
    param_2 = 2;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x62) + 8))();
  iVar2 = *(int *)(*(int *)(param_1 + 0x62) + 8);
  iVar4 = *(int *)(param_1 + 0x94);
  iVar6 = iVar4;
  if (iVar4 < iVar2 - iVar4) {
    do {
      puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x62) + 0x18) * iVar6 + iVar4 + iVar3);
      uVar5 = 0;
      if (0 < (int)param_2) {
        puVar8 = puVar7;
        for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = param_3;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar7 = (undefined4 *)((int)puVar7 + param_2);
        uVar5 = param_2;
      }
      if ((int)uVar5 < iVar1 + *(int *)(param_1 + 0x94) * -2) {
        do {
          *(undefined1 *)puVar7 = *(undefined1 *)(param_1 + 0x98);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar1 + *(int *)(param_1 + 0x94) * -2);
      }
      iVar4 = *(int *)(param_1 + 0x94);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2 - iVar4);
  }
  (**(code **)(**(int **)(param_1 + 0x62) + 0xc))();
  return;
}


