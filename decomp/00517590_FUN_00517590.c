// FUN_00517590 @ 517590 size=235

uint __fastcall FUN_00517590(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x11c) + 4))();
  if ((piVar3 == (int *)0x0) &&
     (piVar3 = *(int **)(param_1 + 0x176), *(int **)(param_1 + 0x176) == (int *)0x0)) {
    iVar4 = FUN_0051b230();
    if (((*(int *)(iVar4 + 0x254) == 8) ||
        (piVar3 = (int *)(*(int *)(iVar4 + 0x254) + -9), piVar3 == (int *)0x0)) &&
       ((((DAT_00893750 == (int *)0x0 ||
          (piVar3 = DAT_00893750, *(char *)((int)DAT_00893750 + 0x111) != '\0')) &&
         (piVar3 = (int *)((((((((int)*(short *)(DAT_00893530 + 0x18) -
                                (int)*(short *)(param_1 + 0x29c)) * 0xc -
                               (int)*(char *)(param_1 + 0x29a)) +
                              (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
                             (int)*(char *)(param_1 + 0x299)) + (int)*(char *)(DAT_00893530 + 0x15))
                            * 0x18 - (int)*(char *)(param_1 + 0x298)) +
                          (int)*(char *)(DAT_00893530 + 0x14)), 0 < (int)piVar3)) &&
        ((piVar3 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),*(char *)(param_1 + 0x28a)),
         *(char *)(param_1 + 0x28a) != '\0' || (*(int *)(param_1 + 0x264) == 0x17)))))) {
      piVar2 = *(int **)(param_1 + 0x26);
      while (piVar1 = piVar2, piVar1 != (int *)0x0) {
        piVar2 = (int *)piVar1[2];
        piVar3 = piVar1;
        if (*(int *)(*piVar1 + 0x134) != 0x1e) {
          return CONCAT31((int3)((uint)piVar1 >> 8),1);
        }
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}


