// FUN_00566690 @ 566690 size=336

undefined4 * __thiscall
FUN_00566690(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c6d6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x80);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    FUN_0042d6c0();
    *(undefined2 *)((int)pvVar3 + 0x2e) = 0;
    *(undefined4 *)((int)pvVar3 + 0x30) = 0;
    FUN_0042d2d0();
    FUN_0042d2d0();
  }
  local_4 = 0xffffffff;
  FUN_0042d320(pvVar3);
  *param_1 = &PTR_FUN_007e957c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined2 *)param_1[1] = param_2;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 8) = *param_3;
  local_4 = 1;
  *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_3 + 1);
  puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 2) = *puVar4;
  *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar4 + 1);
  *param_1 = &PTR_FUN_007e955c;
  local_4 = 2;
  *(undefined4 *)(param_1[1] + 0xe) = *(undefined4 *)((int)param_4 + 0x22);
  *(undefined4 *)(param_1[1] + 0x2a) = *(undefined4 *)((int)param_4 + 0x26);
  iVar2 = param_1[1];
  pcVar5 = (char *)(**(code **)(*param_4 + 0xc))();
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar5 = pcVar8 + -uVar6;
  pcVar8 = (char *)(iVar2 + 0x34);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar2 = param_1[1];
  uStack_10 = (undefined2)((uint)*(undefined4 *)((int)param_4 + 0x12) >> 0x10);
  *(int *)(iVar2 + 0x2e) = param_4[4];
  *(undefined2 *)(iVar2 + 0x32) = uStack_10;
  ExceptionList = pvStack_c;
  return param_1;
}


