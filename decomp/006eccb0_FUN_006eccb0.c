// FUN_006eccb0 @ 6eccb0 size=318

undefined4 * __thiscall FUN_006eccb0(undefined4 *param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  void *pvVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007f7f8c;
  param_1[2] = &PTR_LAB_007f7f88;
  *(int *)((int)param_1 + 0x2e) = param_4;
  *(uint *)((int)param_1 + 0x32) = param_2;
  pvVar2 = operator_new(0x100);
  param_1[0xe] = pvVar2;
  pvVar2 = operator_new(0x10a);
  param_1[0xf] = pvVar2;
  uVar5 = 0xffffffff;
  param_4 = 0;
  do {
    pcVar9 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar9 + -uVar5;
  pcVar11 = (char *)param_1[0xe];
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pbVar3 = (byte *)param_1[0xe];
  iVar8 = 0;
  bVar4 = *pbVar3;
  if (bVar4 != 0) {
    iVar10 = (int)&DAT_00d40fdc - (int)pbVar3;
    do {
      pbVar3[iVar10] = bVar4;
      param_2 = (uint)*pbVar3;
      iVar7 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x32) + 8) + param_2 * 4);
      if (iVar7 == 0) {
        iVar7 = *(int *)(*(int *)((int)param_1 + 0x32) + 4);
      }
      else {
        iVar7 = (int)*(short *)(iVar7 + 6);
      }
      param_4 = param_4 + iVar7;
      if (0xd7 < param_4) {
        (&DAT_00d40fdc)[iVar8] = 0x2e;
        (&DAT_00d40fdd)[iVar8] = 0x2e;
        (&DAT_00d40fde)[iVar8] = 0x2e;
        iVar8 = iVar8 + 3;
        break;
      }
      bVar4 = pbVar3[1];
      iVar8 = iVar8 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar4 != 0);
  }
  uVar5 = 0xffffffff;
  (&DAT_00d40fdc)[iVar8] = 0;
  pcVar9 = &DAT_00d40fdc;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = (char *)param_1[0xf];
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  ExceptionList = local_c;
  return param_1;
}


