// FUN_00742920 @ 742920 size=442

int * FUN_00742920(int *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007df108;
  pvStack_10 = ExceptionList;
  uVar7 = 0xffffffff;
  pcVar9 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar4 != '\0');
  bVar3 = false;
  uVar8 = ~uVar7 - 1;
  uVar7 = *(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1);
  if (((int)uVar7 < 1) || (uVar7 <= uVar8)) {
    local_18 = 0;
  }
  else {
    local_18 = uVar7 - uVar8;
  }
  ExceptionList = &pvStack_10;
  cVar4 = FUN_007428a0();
  local_8 = 0;
  if (cVar4 == '\0') {
    uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    uVar8 = uVar7 | 4;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar8 = CONCAT31((int3)(uVar7 >> 8),(char)uVar8) | 4;
    }
    FUN_00798ed3(uVar8,0);
    local_8 = 0xffffffff;
    cVar4 = FUN_007994bd();
    if ((cVar4 == '\0') &&
       (iVar6 = *(int *)(*param_1 + 4), (*(byte *)(iVar6 + 0xc + (int)param_1) & 2) != 0)) {
      uVar7 = 0;
      if (((*(byte *)((int)param_1 + iVar6 + 4) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)((int)param_1 + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
        uVar7 = 4;
      }
      if (uVar7 != 0) {
        uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar7;
        if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
          uVar7 = uVar7 | 4;
        }
        FUN_00798ed3(uVar7,0);
      }
    }
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 0x1c0) != 0x40) {
    for (; local_18 != 0; local_18 = local_18 + -1) {
      bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
      uVar7 = *(uint *)piVar5[8];
      if (uVar7 == 0) {
LAB_007429fc:
        uVar7 = (**(code **)(*piVar5 + 4))(bVar1);
      }
      else {
        iVar6 = *(int *)piVar5[0xc];
        if (iVar6 + uVar7 <= uVar7) goto LAB_007429fc;
        *(int *)piVar5[0xc] = iVar6 + -1;
        pbVar2 = *(byte **)piVar5[8];
        *(byte **)piVar5[8] = pbVar2 + 1;
        *pbVar2 = bVar1;
        uVar7 = (uint)bVar1;
      }
      if (uVar7 == 0xffffffff) {
        bVar3 = true;
        break;
      }
    }
    if (bVar3) goto LAB_00742ac4;
  }
  uVar7 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x1c))
                    (param_2,uVar8);
  if (uVar7 != uVar8) {
    *(undefined4 *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) = 0;
    piVar5 = (int *)FUN_00742b03();
    return piVar5;
  }
  for (; local_18 != 0; local_18 = local_18 + -1) {
    bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    piVar5 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
    uVar7 = *(uint *)piVar5[8];
    if (uVar7 == 0) {
LAB_00742aa9:
      uVar7 = (**(code **)(*piVar5 + 4))(bVar1);
    }
    else {
      iVar6 = *(int *)piVar5[0xc];
      if (iVar6 + uVar7 <= uVar7) goto LAB_00742aa9;
      *(int *)piVar5[0xc] = iVar6 + -1;
      pbVar2 = *(byte **)piVar5[8];
      *(byte **)piVar5[8] = pbVar2 + 1;
      *pbVar2 = bVar1;
      uVar7 = (uint)bVar1;
    }
    if (uVar7 == 0xffffffff) break;
  }
LAB_00742ac4:
  *(undefined4 *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) = 0;
  piVar5 = (int *)FUN_00742b03();
  return piVar5;
}


