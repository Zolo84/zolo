// FUN_005b62a0 @ 5b62a0 size=372

int FUN_005b62a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  iVar2 = *(int *)(param_1 + 0x62);
  iVar1 = DAT_00ab27b4 + param_2 * 0x4b2;
  iVar6 = *(int *)(DAT_00ab27b4 + 0x254 + param_2 * 0x4b2);
  if (((iVar6 != 8) && (iVar6 != 9)) && (*(int *)(iVar1 + 0x3d8) != iVar2)) {
    iVar6 = 0;
    if (0 < *(int *)(iVar1 + 0x290)) {
      piVar4 = *(int **)(iVar1 + 0x298);
      do {
        if (*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar4 * 0x4b2) == iVar2) {
          return (*(int **)(iVar1 + 0x298))[iVar6 * 3];
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar6 < *(int *)(iVar1 + 0x290));
    }
    piVar4 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar1 + 0x288) * 0x12);
    while( true ) {
      if (piVar4 == (int *)0x0) {
        puVar5 = &DAT_00bc614e;
        param_1 = FUN_0044e1b0();
        for (piVar4 = *(int **)(iVar2 + 0xe8a4); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
          FUN_004d7870(local_10,*piVar4);
          FUN_004d7870(local_8,param_2);
          puVar3 = (undefined *)__ftol();
          if ((int)puVar3 < (int)puVar5) {
            param_1 = *piVar4;
            puVar5 = puVar3;
          }
        }
        return param_1;
      }
      if (*(int *)(*piVar4 + 0x3d8) == iVar2) break;
      piVar4 = (int *)piVar4[2];
    }
    return *(int *)(*piVar4 + 0x12);
  }
  return param_2;
}


