// FUN_00437720 @ 437720 size=219

int __thiscall FUN_00437720(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x12) + 4))(param_2);
  if (iVar3 != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x22);
    if (((piVar1 != *(int **)(param_1 + 0x14)) && (piVar1 != (int *)0x0)) &&
       (cVar2 = (**(code **)(*piVar1 + 0x30))(), cVar2 != '\0')) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x22);
      *(undefined1 *)(param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
    }
    return iVar3;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 4))(param_2);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 4))(param_2);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x34) == '\0') {
        uVar4 = (**(code **)(*param_2 + 8))();
        switch(uVar4) {
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x13:
        case 0x14:
          cVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))
                            (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
          if (cVar2 == '\0') {
            *(undefined1 *)(param_1 + 0x34) = 1;
          }
        }
      }
      iVar3 = 0;
    }
    else if (*(char *)(*(int *)(param_1 + 0x28) + 0x96) != '\0') {
      *(undefined1 *)(param_1 + 0x34) = 1;
      return iVar3;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x24) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return iVar3;
  }
  return iVar3;
}


