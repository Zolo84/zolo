// FUN_005dbda0 @ 5dbda0 size=181

undefined4 __thiscall FUN_005dbda0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  (**(code **)(**(int **)(param_1 + 0x88) + 0x50))();
  iVar3 = FUN_00428ee0(param_1 + 0x80);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -0x14;
  }
  iVar4 = FUN_005dd1e0();
  if ((iVar3 != 0) && (iVar4 != 0)) {
    cVar2 = FUN_004a5b20(iVar3,iVar4);
    if (cVar2 == '\0') {
      piVar1 = *(int **)(param_1 + 0x88);
      if (*(char *)((int)piVar1 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar1 + 0x60))();
      *(undefined1 *)((int)piVar1 + 0x86) = 1;
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 4))(param_2);
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x96) != '\0') {
      FUN_0045e6c0(iVar3,iVar4);
      return 2;
    }
  }
  return uVar5;
}


