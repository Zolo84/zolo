// FUN_0074f9c0 @ 74f9c0 size=192

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0074f9c0(LPVOID param_1)

{
  int *piVar1;
  char cVar2;
  HANDLE pvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcStack_28;
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfaa6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)((int)param_1 + 0x180) = 1;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0074fcc0,param_1,0
                        ,(LPDWORD)((int)param_1 + 0x19a));
  *(HANDLE *)((int)param_1 + 0x196) = pvVar3;
  if ((pvVar3 == (HANDLE)0x0) && (iVar4 = FUN_0042b6c9(), iVar4 != 0)) {
    FUN_004367a0();
  }
  piVar1 = (int *)((int)param_1 + 0x8c);
  (*(code *)**(undefined4 **)((int)param_1 + 0x8c))();
  if (*(int *)((int)param_1 + 0x88) == 0) {
    pvVar5 = operator_new(0x268);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00744790();
    }
    *(undefined4 *)((int)param_1 + 0x88) = uVar6;
  }
  (**(code **)(*piVar1 + 4))();
  FUN_0074b690();
  FUN_00757620();
  iVar4 = FUN_0074fdf0();
  *(undefined1 *)((int)param_1 + 0x180) = 0;
  if (iVar4 != 0) {
    pvVar5 = operator_new(0x68);
    iStack_4 = 3;
    if (pvVar5 != (void *)0x0) {
      puVar10 = &DAT_007f0c98;
      if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)((int)param_1 + 0x4a);
      }
      FUN_0042b6c9();
      FUN_0043dce0(puVar10);
    }
    iStack_4 = 0xffffffff;
    iVar4 = FUN_0042b6c9();
    if (iVar4 != 0) {
      FUN_004367a0();
    }
    (**(code **)*piVar1)();
    FUN_00757c20();
    (**(code **)(*piVar1 + 4))();
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_00674910();
  iStack_4 = 0;
  FUN_00674910();
  iStack_4 = CONCAT31(iStack_4._1_3_,1);
  pcVar7 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  pcVar11 = pcVar7;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  cVar2 = FUN_00674e40();
  if (cVar2 != '\0') {
    pcVar11 = pcStack_18;
    for (uVar9 = ~uVar8 - 1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = ~uVar8 - 1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00674e20();
  }
  pcVar7 = (char *)FUN_0042b6c9();
  uVar8 = 0xffffffff;
  pcVar11 = pcVar7;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  cVar2 = FUN_00674e40();
  if (cVar2 != '\0') {
    pcVar11 = pcStack_28;
    for (uVar9 = ~uVar8 - 1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = ~uVar8 - 1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00674e20();
  }
  pvVar5 = operator_new(0x68);
  iStack_4._0_1_ = 2;
  if (pvVar5 != (void *)0x0) {
    if (pcStack_28 == (char *)0x0) {
      pcStack_28 = (char *)&DAT_007f0c98;
    }
    FUN_0043dce0(pcStack_28);
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00674910();
  if (pcStack_18 != (char *)0x0) {
    cVar2 = pcStack_18[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      pcStack_18[-1] = cVar2 + -1;
      ExceptionList = pvStack_c;
      return 1;
    }
    FUN_00796cd8();
  }
  ExceptionList = pvStack_c;
  return 1;
}


