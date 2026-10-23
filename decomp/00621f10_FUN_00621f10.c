// FUN_00621f10 @ 621f10 size=130

undefined4 __thiscall FUN_00621f10(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0xe) {
    iVar2 = FUN_00428ee0((int)param_1 + 0x2e);
    if ((iVar2 != 0) && (iVar2 != 8)) {
      cVar1 = (**(code **)(*param_1 + 0x2c))
                        (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
      if (cVar1 != '\0') {
        iVar2 = FUN_00428ee0((int)param_1 + 0x2e);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + -8;
        }
        FUN_00638730(iVar2);
        return 3;
      }
    }
  }
  return 0;
}


