// FUN_004694b0 @ 4694b0 size=367

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004694b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = (int *)(&DAT_0089cad8)[param_2];
  if (((piVar1 != (int *)0x0) && (DAT_00d610e6 != '\0')) &&
     (cVar3 = (**(code **)(*piVar1 + 0x1c))(), cVar3 == '\0')) {
    return 100;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
  if (iVar2 == param_2) {
    return 100;
  }
  if ((iVar2 == 0) && (piVar1 != (int *)0x0)) {
    FUN_0044b300(param_2);
    cVar3 = (**(code **)(*piVar1 + 0x1c))();
    if (cVar3 == '\0') {
      FUN_005885d0();
    }
    FUN_0044d810();
    FUN_0044d810();
    FUN_0044d840();
    FUN_0044c670(8,*(undefined4 *)(param_1 + 6));
  }
  return 0;
}


