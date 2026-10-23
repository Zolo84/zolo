// FUN_006fda30 @ 6fda30 size=546

int __thiscall FUN_006fda30(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar3 = (**(code **)**(undefined4 **)(param_1 + 0xc))(param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2a) + 8) + 4))(param_2);
    if ((iVar3 != 0) && (*(char *)(*(int *)(*(int *)(param_1 + 0x2a) + 8) + 0x96) != '\0')) {
      iVar3 = FUN_007a7b3c(*(undefined4 *)(**(int **)(param_1 + 0x10) + 0x18));
      if (iVar3 <= *(int *)(param_1 + 0x32)) {
        iVar3 = *(int *)(param_1 + 0x32) + 1;
      }
      if (*(int *)(param_1 + 0x36) < iVar3) {
        iVar3 = *(int *)(param_1 + 0x36);
      }
      **(int **)(param_1 + 0x14) = iVar3;
      FUN_007a8d98(iVar3,&DAT_00d43028,10);
      FUN_00438900(&DAT_00d43028);
      *(undefined1 *)(param_1 + 0x19) = 1;
      return 1;
    }
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2a) + 0x18) + 4))(param_2);
    if ((iVar3 != 0) && (*(char *)(*(int *)(*(int *)(param_1 + 0x2a) + 0x18) + 0x96) != '\0')) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      return 1;
    }
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
      if (((piVar1 != (int *)0x0) && (iVar3 == *(int *)(*(int *)(param_1 + 0xc) + 0x10))) &&
         (iVar4 = (**(code **)(*piVar1 + 4))(param_2), iVar4 != 0)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar3 * 4);
        if (*(char *)(iVar3 + 0x3b) != '\0') {
          *(undefined1 *)(iVar3 + 0x3b) = 0;
          iVar3 = FUN_007a7b3c(*(undefined4 *)(**(int **)(param_1 + 0x10) + 0x18));
          if (iVar3 <= *(int *)(param_1 + 0x32)) {
            iVar3 = *(int *)(param_1 + 0x32) + 1;
          }
          if (*(int *)(param_1 + 0x36) < iVar3) {
            iVar3 = *(int *)(param_1 + 0x36);
          }
          **(int **)(param_1 + 0x14) = iVar3;
          FUN_007a8d98(iVar3,&DAT_00d43028,10);
          FUN_00438900(&DAT_00d43028);
        }
        return 3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2e) + 4))(param_2);
    if ((iVar3 != 0) && (cVar2 = FUN_00433910(), cVar2 != '\0')) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 0) {
      iVar3 = **(int **)(param_1 + 0x10);
      if (*(char *)(iVar3 + 0x39) == '\0') {
        *(undefined1 *)(iVar3 + 0x39) = 1;
        *(undefined1 *)(iVar3 + 0x3a) = 1;
        (**(code **)(**(int **)(param_1 + 0x26) + 0x38))(0);
      }
    }
    else {
      iVar3 = **(int **)(param_1 + 0x10);
      *(undefined1 *)(iVar3 + 0x39) = 0;
      *(undefined1 *)(iVar3 + 0x3a) = 0;
      (**(code **)(**(int **)(param_1 + 0x26) + 0x38))(1);
    }
    iVar3 = FUN_007a7b3c(*(undefined4 *)(**(int **)(param_1 + 0x10) + 0x18));
    if (iVar3 <= *(int *)(param_1 + 0x32)) {
      iVar3 = *(int *)(param_1 + 0x32) + 1;
    }
    if (*(int *)(param_1 + 0x36) < iVar3) {
      iVar3 = *(int *)(param_1 + 0x36);
    }
    **(int **)(param_1 + 0x14) = iVar3;
    FUN_007a8d98(iVar3,&DAT_00d43028,10);
    FUN_00438900(&DAT_00d43028);
    return 0;
  }
  iVar3 = **(int **)(param_1 + 0x10);
  *(undefined1 *)(iVar3 + 0x39) = 0;
  *(undefined1 *)(iVar3 + 0x3a) = 0;
  return 0;
}


