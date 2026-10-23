// FUN_004b3100 @ 4b3100 size=204

void __thiscall FUN_004b3100(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  
  sVar2 = *(short *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x12);
  puVar5 = *(undefined4 **)(param_1 + 8);
  while (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*puVar5;
    puVar5 = (undefined4 *)puVar5[2];
    iVar7 = puVar6[1];
    if (iVar7 == 0) {
      if ((*(int *)((short *)*puVar6 + 1) == iVar4) && (*(short *)*puVar6 == sVar2)) {
        FUN_004b4120(puVar6);
      }
    }
    else if (*(char *)(iVar7 + 0xa4) == '\0') {
      psVar9 = *(short **)(iVar7 + 0x1c);
      while (psVar9 != (short *)0x0) {
        psVar8 = *(short **)(psVar9 + 5);
        piVar1 = (int *)(psVar9 + 1);
        sVar3 = *psVar9;
        psVar9 = psVar8;
        if ((iVar4 == *piVar1) && (sVar2 == sVar3)) {
          FUN_004b4120(puVar6);
        }
      }
      psVar9 = *(short **)(iVar7 + 0x60);
      while (psVar9 != (short *)0x0) {
        psVar8 = *(short **)(psVar9 + 5);
        piVar1 = (int *)(psVar9 + 1);
        sVar3 = *psVar9;
        psVar9 = psVar8;
        if ((iVar4 == *piVar1) && (sVar2 == sVar3)) {
          FUN_004b4120(puVar6);
        }
      }
    }
  }
  return;
}


