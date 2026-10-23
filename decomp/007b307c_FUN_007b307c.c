// FUN_007b307c @ 7b307c size=70

undefined4 FUN_007b307c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_007ad2c4();
    return uVar2;
  }
  if ((DAT_00dc526c != (code *)0x0) && (iVar3 = FUN_007b6195(DAT_00dc526c), iVar3 != 0)) {
    uVar2 = (*DAT_00dc526c)(param_1);
    return uVar2;
  }
  return 0;
}


