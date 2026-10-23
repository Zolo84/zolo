// FUN_00667520 @ 667520 size=157

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00667520(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float local_4;
  
  local_4 = 0.0;
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar6[2];
      piVar6 = (int *)*piVar6;
      cVar4 = (**(code **)(*piVar6 + 0x2c))();
      if (cVar4 != '\0') {
        iVar5 = FUN_0051b230();
        if ((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) {
          for (piVar6 = *(int **)((int)piVar6 + 0x26); piVar6 != (int *)0x0;
              piVar6 = (int *)piVar6[2]) {
            piVar2 = (int *)*piVar6;
            fVar3 = ((float)piVar2[0xb9] + (float)piVar2[0xb8]) *
                    (float)piVar2[0x3d] * (float)piVar2[0x3b];
            cVar4 = (**(code **)(*piVar2 + 0x14))();
            if (cVar4 != '\0') {
              fVar3 = fVar3 * _DAT_007e4074;
            }
            local_4 = fVar3 + local_4;
          }
        }
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
    return (float10)local_4;
  }
  return (float10)0.0;
}


