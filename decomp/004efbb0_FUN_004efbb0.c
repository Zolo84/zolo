// FUN_004efbb0 @ 4efbb0 size=78

undefined4 __fastcall FUN_004efbb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar2 != 0) {
    iVar4 = 0;
    iVar2 = 0;
    piVar3 = *(int **)(param_1 + 0x26);
    if (*(int **)(param_1 + 0x26) != (int *)0x0) {
      do {
        piVar1 = piVar3 + 2;
        switch(*(undefined4 *)(*piVar3 + 0x134)) {
        case 0xc:
          iVar4 = iVar4 + 1;
          break;
        case 0xe:
        case 0x10:
        case 0x12:
          iVar2 = iVar2 + 1;
        }
        piVar3 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      if (iVar4 < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}


