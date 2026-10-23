// FUN_004b4570 @ 4b4570 size=202

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4570(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  
  if ((*(int *)(param_1 + 0x74) == 7) || (*(int *)(param_1 + 0x74) == 8)) {
    bVar6 = false;
    iVar8 = (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
    piVar9 = *(int **)(iVar8 + 4);
    if (piVar9 != (int *)0x0) {
      do {
        piVar1 = (int *)piVar9[2];
        piVar9 = *(int **)(*piVar9 + 0x26);
        while (piVar9 != (int *)0x0) {
          piVar2 = (int *)piVar9[2];
          piVar3 = (int *)*piVar9;
          cVar7 = (**(code **)(*piVar3 + 0x14))();
          piVar9 = piVar2;
          if ((cVar7 != '\0') &&
             (fVar4 = (float)piVar3[0x3d] - (float)piVar3[0x20], _DAT_00dc174c < fVar4)) {
            fVar5 = _DAT_00877408;
            if (fVar4 - _DAT_00877408 < _DAT_00dc174c) {
              fVar5 = fVar4 - _DAT_00dc174c;
            }
            bVar6 = true;
            piVar3[0x20] = (int)(fVar5 + (float)piVar3[0x20]);
          }
        }
        piVar9 = piVar1;
      } while (piVar1 != (int *)0x0);
      if (bVar6) {
        FUN_004bc8f0(0);
      }
    }
  }
  return;
}


