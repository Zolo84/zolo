// FUN_00460310 @ 460310 size=106

void FUN_00460310(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00428ee0(&param_1);
  iVar1 = param_3;
  if ((iVar3 != 0) && (iVar3 != 8)) {
    cVar2 = FUN_00584e20(param_3);
    if (cVar2 != '\0') {
      iVar4 = FUN_00584c90();
      (**(code **)(**(int **)(iVar3 + 0x1a) + 0x18))(iVar1);
      if (iVar4 == iVar1) {
        FUN_00584cb0();
      }
      if ((&DAT_0089cad8)[iVar1] != 0) {
        FUN_004512f0(0);
      }
      FUN_005886c0();
    }
  }
  return;
}


