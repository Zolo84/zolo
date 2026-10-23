// FUN_00639e50 @ 639e50 size=280

undefined4 __thiscall FUN_00639e50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = param_1 + 0x2e;
  iVar1 = FUN_00428ee0(iVar2);
  if ((iVar1 == 0) || (iVar1 == 8)) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x3e) + 4))(param_2);
    if (*(char *)(*(int *)(param_1 + 0x3e) + 0x96) != '\0') {
      iVar2 = FUN_00428ee0(iVar2);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -8;
      }
      FUN_006407d0(iVar2,*(undefined4 *)(param_1 + 0x5c));
      (**(code **)(**(int **)(param_1 + 0x62) + 0x78))();
      FUN_00436030();
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x62) + 0x78))();
      (**(code **)(*piVar3 + 0x38))(param_1);
    }
  }
  else {
    iVar1 = FUN_00428ee0(iVar2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -8;
    }
    if (*(int *)(iVar1 + 0xd8) == 0) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x42) + 4))(param_2);
      if (*(char *)(*(int *)(param_1 + 0x42) + 0x96) != '\0') {
        iVar2 = FUN_00428ee0(iVar2);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + -8;
        }
        FUN_006407d0(iVar2,*(undefined4 *)(param_1 + 0x5c));
        (**(code **)(**(int **)(param_1 + 0x62) + 0x78))();
        FUN_00436030();
        piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x62) + 0x78))();
        (**(code **)(*piVar3 + 0x38))(param_1);
        *(undefined1 *)(param_1 + 0x66) = 1;
        return uVar4;
      }
    }
  }
  return uVar4;
}


