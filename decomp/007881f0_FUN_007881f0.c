// FUN_007881f0 @ 7881f0 size=265

void FUN_007881f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < DAT_00877690) {
    do {
      iVar5 = FUN_004e9370(iVar7);
      (**(code **)(*(int *)(iVar5 + 0x146) + 0x14))();
      FUN_004ed6a0();
      if (*(int *)(iVar5 + 0x482) != 0) {
        (**(code **)(*(int *)(*(int *)(iVar5 + 0x482) + 4) + 0x14))();
        (**(code **)(*(int *)(*(int *)(iVar5 + 0x482) + 0x16) + 0x14))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_00877690);
  }
  piVar6 = &DAT_0089cad8;
  do {
    if (*piVar6 != 0) {
      piVar3 = *(int **)(*piVar6 + 0x3b6c);
      while (piVar3 != (int *)0x0) {
        piVar1 = (int *)piVar3[2];
        iVar7 = *piVar3;
        iVar5 = FUN_004d5be0();
        if (*(int *)(iVar5 + 0x482) != 0) {
          FUN_004d5be0();
          FUN_0049a0b0(iVar7);
        }
        iVar5 = FUN_004d5bf0();
        if (*(int *)(iVar5 + 0x482) != 0) {
          FUN_004d5bf0();
          FUN_0049a0b0(iVar7);
        }
        puVar4 = *(undefined4 **)(iVar7 + 0x10e);
        while (piVar3 = piVar1, puVar4 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar4[2];
          iVar5 = iVar7;
          FUN_004e9370(*puVar4,iVar7);
          FUN_004ed670(iVar5);
          puVar4 = puVar2;
        }
      }
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0x89d038);
  return;
}


