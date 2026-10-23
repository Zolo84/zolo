// FUN_004c5f80 @ 4c5f80 size=567

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004c5f80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = 5.0;
  local_c = 5.0;
  local_4 = 5.0;
  local_10 = 5.0;
  bVar5 = false;
  bVar6 = false;
  bVar4 = false;
  iVar8 = (**(code **)(*param_1 + 0xc))();
  piVar9 = *(int **)(iVar8 + 4);
  while (piVar9 != (int *)0x0) {
    piVar1 = (int *)piVar9[2];
    piVar3 = *(int **)(*piVar9 + 0x26);
    while (piVar9 = piVar1, piVar3 != (int *)0x0) {
      piVar9 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      cVar7 = FUN_00504570(0);
      piVar3 = piVar9;
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*piVar2 + 0x14))();
        if (cVar7 == '\0') {
          iVar8 = FUN_004fccd0();
          if (iVar8 == 0) {
            if ((float)piVar2[0xb6] < local_8) {
              local_8 = (float)piVar2[0xb6];
            }
            bVar6 = true;
          }
          else {
            iVar8 = FUN_004fccd0();
            if (iVar8 == 2) {
              if ((float)piVar2[0xb6] < local_10) {
                local_10 = (float)piVar2[0xb6];
              }
              bVar4 = true;
            }
            if ((float)piVar2[0xb6] < local_4) {
              local_4 = (float)piVar2[0xb6];
            }
          }
        }
        else {
          if ((float)piVar2[0xb6] < local_c) {
            local_c = (float)piVar2[0xb6];
          }
          bVar5 = true;
        }
      }
    }
  }
  if (*(char *)((int)param_1 + 0x4e) == '\0') {
    piVar9 = *(int **)(param_1[0x10] + 0x80);
  }
  else {
    piVar9 = *(int **)(param_1[0x10] + 0x84);
  }
  (**(code **)(*piVar9 + 0xc))();
  cVar7 = FUN_005274d0();
  if ((cVar7 != '\0') && (bVar4)) {
    return (float10)local_10 * (float10)_DAT_007e40a4;
  }
  if (!bVar5) {
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      piVar9 = *(int **)(param_1[0x10] + 0x80);
    }
    else {
      piVar9 = *(int **)(param_1[0x10] + 0x84);
    }
    (**(code **)(*piVar9 + 0xc))();
    cVar7 = FUN_005274a0();
    if ((cVar7 != '\0') && (bVar4)) {
      return (float10)local_10 * (float10)_DAT_007e40a4;
    }
    if (bVar6) {
      return (float10)local_8 * (float10)_DAT_007e40a4;
    }
    return (float10)local_4 * (float10)_DAT_007e40a4;
  }
  if (*(char *)((int)param_1 + 0x4e) == '\0') {
    piVar9 = *(int **)(param_1[0x10] + 0x80);
  }
  else {
    piVar9 = *(int **)(param_1[0x10] + 0x84);
  }
  (**(code **)(*piVar9 + 0xc))();
  cVar7 = FUN_005274a0();
  if ((cVar7 != '\0') && (bVar4)) {
    return (float10)local_10 * (float10)_DAT_007e40a4;
  }
  return (float10)local_c * (float10)_DAT_007e40a4;
}


