// FUN_00580170 @ 580170 size=327

uint __fastcall FUN_00580170(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  uint unaff_EBP;
  undefined1 **ppuVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puStack_20;
  undefined4 uStack_14;
  undefined1 local_10 [16];
  
  puStack_20 = local_10;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18),0);
  if (unaff_EBP < *(uint *)(param_1 + 0xb2)) {
    unaff_EBP = unaff_EBP + *(int *)(param_1 + 0x28);
  }
  uVar2 = unaff_EBP - *(uint *)(param_1 + 0xb2);
  uVar9 = uVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))
                    (*(int **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xb2),uVar2,local_10);
  if (-1 < (int)uVar3) {
    puVar5 = &uStack_14;
    puVar8 = *(undefined4 **)(param_1 + 2 + *(int *)(param_1 + 10) * 4);
    for (uVar3 = uVar9 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (&puStack_20 != (undefined1 **)0x0) {
      ppuVar7 = &puStack_20;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 2 + *(int *)(param_1 + 10) * 4) + uVar9);
      for (uVar3 = (uint)&stack0xffffffe8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *ppuVar7;
        ppuVar7 = ppuVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)ppuVar7;
        ppuVar7 = (undefined1 **)((int)ppuVar7 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    *(uint *)(param_1 + 0x10) = uVar2;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))
              (*(int **)(param_1 + 0x18),&uStack_14,uVar9,&puStack_20,&stack0xffffffe8);
    uVar2 = *(int *)(param_1 + 0xb2) + uVar2;
    *(uint *)(param_1 + 0xb2) = uVar2;
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      *(uint *)(param_1 + 0xb2) = uVar2 - *(uint *)(param_1 + 0x28);
    }
    psVar6 = *(short **)(param_1 + 2 + *(int *)(param_1 + 10) * 4);
    iVar4 = 0;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
      *(int *)(iVar4 + 4 + *(int *)(param_1 + 0xb6)) = (int)sVar1;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xb6) + iVar4);
      iVar4 = iVar4 + 8;
      *puVar5 = puVar5[1];
    } while (iVar4 < 0x7f8);
    FUN_005802d0(*(undefined4 *)(param_1 + 0xb6),0xff,0,0x100);
    *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) ^ 1;
    return 1;
  }
  return uVar3 & 0xffffff00;
}


