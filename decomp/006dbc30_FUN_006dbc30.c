// FUN_006dbc30 @ 6dbc30 size=111

void __fastcall FUN_006dbc30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x92) + 4);
  for (iVar1 = *(int *)(param_1 + 0x6e) * 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    piVar2 = (int *)piVar2[2];
  }
  iVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar3 = 0;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_004132d0(*piVar2 + 0x34,0xb4,*(int *)(iVar1 + 0x10) * iVar3 + 0x56,
                 *(undefined4 *)(param_1 + 0x10),0,0);
    piVar2 = (int *)piVar2[2];
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  return;
}


