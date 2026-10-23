// FUN_005cc6d0 @ 5cc6d0 size=123

int __thiscall FUN_005cc6d0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(param_1[0x24] + 4))(param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)param_1[0x3c] + 4))(param_2);
  }
  if (*(char *)(param_1[0x3c] + 0x96) == '\0') {
    if (((iVar2 == 0) && (iVar3 = (**(code **)(*param_2 + 8))(), iVar3 == 0xe)) &&
       (cVar1 = (**(code **)(*param_1 + 0x20))
                          (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
       cVar1 == '\0')) {
      return 1;
    }
    return iVar2;
  }
  return 1;
}


