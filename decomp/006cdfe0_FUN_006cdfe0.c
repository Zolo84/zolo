// FUN_006cdfe0 @ 6cdfe0 size=360

void __fastcall FUN_006cdfe0(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d8f2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
  }
  pvVar2 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0x16c,0x5e,0,0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
  uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x56) = uVar3;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x34))(0x12,0x24);
  *(undefined2 *)(*(int *)(param_1 + 0x68) + 0x5a) = 0xffff;
  iVar6 = *(int *)(*DAT_00d12b40 + 0x382);
  *(int *)(param_1 + 0x6c) = iVar6;
  if (*(char *)(param_1 + 0x70) == '\0') {
    *(int *)(param_1 + 0x6c) = iVar6 + 2;
  }
  FUN_007a630a(&stack0xffffffcc,s_HINT__d_0086b834,*(undefined4 *)(param_1 + 0x6c));
  pcVar4 = (char *)FUN_0042b6c9(&stack0xffffffcc);
  iVar6 = -1;
  pcVar7 = pcVar4;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    iVar6 = FUN_007a8730(pcVar4,s_UNKNOWN_STRING_WANTED_0083c758);
    if (iVar6 != 0) goto LAB_006ce0f8;
  }
  pcVar4 = (char *)FUN_0042b6c9(s_HINT_1_0086b82c);
  *(undefined4 *)(param_1 + 0x6c) = 1;
LAB_006ce0f8:
  *(int *)(*DAT_00d12b40 + 0x382) = *(int *)(param_1 + 0x6c) + 1;
  FUN_004361a0(pcVar4);
  iVar6 = **(int **)(param_1 + 0x68);
  iVar5 = FUN_00436110();
  (**(code **)(iVar6 + 0x34))(0x12,0x53 - iVar5 / 2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  ExceptionList = pvStack_1c;
  return;
}


