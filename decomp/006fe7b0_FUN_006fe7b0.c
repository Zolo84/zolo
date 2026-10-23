// FUN_006fe7b0 @ 6fe7b0 size=177

void __fastcall FUN_006fe7b0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_00bd1bac[1];
  iVar3 = (**(code **)(*DAT_00bd1bac + 8))();
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = iVar2 * 99 + -1;
  if (0 < iVar2) {
    do {
      uVar1 = *(undefined2 *)(iVar3 + iVar6 * 2);
      if (0xff < *(ushort *)(*(int *)(param_1 + 0xc) + iVar5 * 2)) {
        *(undefined2 *)(iVar3 + iVar6 * 2) = 0xff;
      }
      *(undefined2 *)(iVar3 + iVar6 * 2) = uVar1;
      iVar4 = FUN_005841a0();
      uVar1 = *(undefined2 *)(iVar3 + (iVar4 + iVar6) * 2);
      iVar4 = FUN_005841a0();
      *(undefined2 *)(iVar3 + (iVar4 + iVar6) * 2) = uVar1;
      iVar4 = FUN_005841a0();
      if (iVar5 % iVar4 == 0) {
        iVar4 = FUN_005841a0();
        iVar6 = iVar6 + iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < iVar2);
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  return;
}


