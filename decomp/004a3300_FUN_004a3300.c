// FUN_004a3300 @ 4a3300 size=71

undefined4 __fastcall FUN_004a3300(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = DAT_00d615d2;
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    iVar3 = (**(code **)(**(int **)(*piVar2 + 0x22) + 4))();
    piVar2 = piVar1;
  } while ((iVar3 < 1) || (iVar3 = *(int *)(param_1 + 6), iVar4 = FUN_00584c90(), iVar4 != iVar3));
  return 1;
}


