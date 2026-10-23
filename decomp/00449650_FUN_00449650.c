// FUN_00449650 @ 449650 size=119

void __fastcall FUN_00449650(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x117de) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
    if (iVar1 == 0) {
      iVar1 = 1;
      if (1 < DAT_00877690) {
        piVar2 = (int *)(DAT_00ab27b4 + 0x706);
        do {
          if ((((char)piVar2[-0x35] == '\0') && (*piVar2 != 8)) && (*piVar2 != 9))
          goto LAB_00449679;
          iVar1 = iVar1 + 1;
          piVar2 = (int *)((int)piVar2 + 0x4b2);
        } while (iVar1 < DAT_00877690);
      }
    }
    else {
      iVar1 = **(int **)(param_1 + 0xe892);
LAB_00449679:
      *(int *)(param_1 + 0x117de) = iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x117f0) = *(undefined4 *)(param_1 + 0x117de);
  return;
}


