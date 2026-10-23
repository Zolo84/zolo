// FUN_005942b0 @ 5942b0 size=109

int __thiscall FUN_005942b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(char *)(*(int *)(param_1 + 0x2c) + 0x34) != '\0')) {
    puVar1 = *(undefined4 **)(param_1 + 0x1a);
    for (iVar5 = *(int *)(param_1 + 0x28); iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = (undefined4 *)puVar1[2];
    }
    iVar5 = (**(code **)(*(int *)*puVar1 + 0x28))(param_2,param_3);
    if (iVar5 != 0) {
      return iVar5;
    }
    for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      piVar3 = (int *)*piVar2;
      cVar4 = (**(code **)(*piVar3 + 0x20))(param_2,param_3);
      if ((cVar4 != '\0') && (iVar5 = *(int *)((int)piVar3 + 0xb2), iVar5 != 0)) {
        return iVar5;
      }
    }
  }
  return 0;
}


