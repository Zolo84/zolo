// FUN_006d8ef0 @ 6d8ef0 size=101

undefined4 __fastcall FUN_006d8ef0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00d0ca90 + 0x4508);
  if (piVar3 != (int *)0x0) {
    while( true ) {
      cVar2 = (**(code **)(*(int *)*piVar3 + 0x28))();
      if ((cVar2 != '\0') &&
         (*(int *)(*piVar3 + 0xc) == *(int *)(*(int *)(param_1 + 0x2220e) + 0x18))) break;
      piVar3 = (int *)piVar3[2];
      if (piVar3 == (int *)0x0) {
        return 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x2220e);
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


