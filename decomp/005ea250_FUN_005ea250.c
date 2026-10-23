// FUN_005ea250 @ 5ea250 size=319

int __thiscall FUN_005ea250(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00428ee0(param_1 + 0x2e);
  if (((iVar2 != 0) && (iVar2 != 8)) && (cVar1 = FUN_004bf180(), cVar1 != '\0')) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xbe) + 4))
                      (*(undefined4 *)(iVar2 + 0x78),param_2,param_3);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc2) + 4))
                      (*(undefined4 *)(iVar2 + 0x7c),param_2,param_3);
    if (iVar3 != 0) {
      return iVar3;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc6) + 0x20))(param_2,param_3);
    if ((cVar1 != '\0') && (*(undefined4 **)(iVar2 + 0x56) != (undefined4 *)0x0)) {
      iVar2 = FUN_004c1720(**(undefined4 **)(iVar2 + 0x56));
      return iVar2;
    }
    if ((*(int **)(param_1 + 0xb6) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0xb6) + 0x20))(param_2,param_3), cVar1 != '\0')) {
      iVar2 = *(int *)(iVar2 + 0x6c);
      if ((iVar2 == 4) || ((iVar2 == 5 || (iVar2 == 6)))) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb6) + 0x52) + 10;
        if (iVar2 != 0) {
          iVar2 = FUN_00515f60(iVar2,0);
          return iVar2;
        }
      }
      else if ((iVar2 == 7) || (iVar2 == 8)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xb6) + 0x52);
        if (iVar2 == 7) {
          iVar2 = FUN_00515f60(0x1e,0);
          return iVar2;
        }
        if (iVar2 == 4) {
          iVar2 = FUN_00515f60(0x1f,0);
          return iVar2;
        }
      }
    }
  }
  return 0;
}


