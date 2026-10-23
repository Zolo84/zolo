// FUN_006d95f0 @ 6d95f0 size=81

undefined4 __fastcall FUN_006d95f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00893530;
  if (*(int **)(param_1 + 0x3b7e) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x3b7e);
    *(undefined4 *)(iVar1 + 0x1a) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(iVar1 + 0x1e) = *(undefined2 *)(iVar2 + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x2220e);
  if (iVar2 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar2);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


