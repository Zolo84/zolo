// FUN_00503220 @ 503220 size=62

int __fastcall FUN_00503220(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = DAT_00d77b7a;
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar3 = FUN_00428ee0(*piVar2 + 0x52);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -8;
    }
    piVar2 = piVar1;
    if (iVar3 == param_1) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


