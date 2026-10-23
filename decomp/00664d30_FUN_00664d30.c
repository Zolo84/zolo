// FUN_00664d30 @ 664d30 size=360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00664d30(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float local_c;
  
  local_c = 0.0;
  piVar6 = *(int **)((int)&DAT_008ea36c + param_1 * 0x12);
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      piVar6 = (int *)piVar6[2];
      piVar4 = *(int **)(iVar1 + 0x14a);
      while (piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar4[2];
        iVar9 = *piVar4;
        iVar7 = FUN_006a9d50();
        fVar3 = _DAT_007e3848;
        piVar4 = piVar2;
        if ((iVar9 == iVar7) || (cVar5 = FUN_0044b300(iVar9), fVar3 = _DAT_007e3374, cVar5 != '\0'))
        {
          local_c = local_c + fVar3;
        }
      }
      if (_DAT_007e3380 < local_c) {
        piVar4 = *(int **)(*(int *)(iVar1 + 0x1c2) + 4);
        while (piVar4 != (int *)0x0) {
          piVar2 = (int *)piVar4[2];
          iVar9 = *piVar4;
          piVar4 = piVar2;
          if (*(int *)(iVar9 + 0x264) == 0x17) {
            uVar8 = FUN_006a9d50();
            cVar5 = FUN_0044b280(uVar8);
            if (cVar5 != '\0') {
              iVar9 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
              local_c = (float)iVar9 + local_c;
            }
          }
        }
      }
      iVar1 = (((((int)*(short *)(iVar1 + 0x3c6) - (int)*(short *)(DAT_00893530 + 0x18)) * 0xc -
                (int)*(char *)(DAT_00893530 + 0x16)) + (int)*(char *)(iVar1 + 0x3c4)) * 0x1e -
              (int)*(char *)(DAT_00893530 + 0x15)) + 5 + (int)*(char *)(iVar1 + 0x3c3);
      if (0 < iVar1) {
        local_c = (float)(iVar1 * 4) + local_c;
      }
    } while (piVar6 != (int *)0x0);
    return (float10)local_c;
  }
  return (float10)0.0;
}


