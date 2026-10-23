// FUN_006fecd0 @ 6fecd0 size=156

void __fastcall FUN_006fecd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar1 = *DAT_00bd1bac;
  iVar2 = FUN_005841b0();
  puVar3 = (undefined2 *)(**(code **)(iVar1 + 4))(0,(iVar2 + -0x300 >> 1) + 0x206);
  iVar4 = 0;
  iVar1 = DAT_00bd1bac[1];
  iVar2 = FUN_005841b0();
  if (0 < ((iVar2 + -0x300 >> 1) + 0xfa) * iVar1) {
    do {
      iVar1 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      *puVar3 = *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar1);
      iVar1 = DAT_00bd1bac[1];
      iVar2 = FUN_005841b0();
      puVar3 = puVar3 + 1;
    } while (iVar4 < ((iVar2 + -0x300 >> 1) + 0xfa) * iVar1);
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  return;
}


