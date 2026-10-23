// FUN_006d0b30 @ 6d0b30 size=99

void __thiscall FUN_006d0b30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*DAT_00bd1bac + 8))();
  iVar4 = *(int *)(param_1 + 10) + -8;
  if (iVar4 < *(int *)(param_1 + 10)) {
    do {
      iVar3 = FUN_00584190();
      iVar3 = (iVar3 / 2) * iVar4;
      iVar4 = iVar4 + 1;
      puVar1 = (undefined4 *)(iVar2 + (iVar3 + param_2) * 2);
      *puVar1 = 0xf81ff81f;
      puVar1[1] = 0xf81ff81f;
      puVar1[2] = 0xf81ff81f;
      puVar1[3] = 0xf81ff81f;
    } while (iVar4 < *(int *)(param_1 + 10));
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  return;
}


