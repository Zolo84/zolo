// FUN_00442310 @ 442310 size=409

int __thiscall FUN_00442310(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0x4c) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x12) + 4))(param_2), iVar7 == 0)) {
    piVar3 = (int *)FUN_00581e60();
    iVar2 = *piVar3;
    iVar4 = FUN_00581e60();
    iVar4 = *(int *)(iVar4 + 4);
    iVar5 = (**(code **)(*param_2 + 8))();
    if ((iVar5 == 0x13) &&
       (((*(char *)(param_1 + 0x48) == '\x01' && (cVar1 = FUN_00581e70(), cVar1 != '\0')) &&
        (*(char *)(param_1 + 0x57) == '\0')))) {
      iVar5 = iVar4 - *(int *)(param_1 + 0x52);
      iVar7 = iVar2 - *(int *)(param_1 + 0x4e);
      *(int *)(param_1 + 0x20) = iVar7;
      *(int *)(param_1 + 0x24) = iVar5;
      if (iVar7 < 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      if (iVar5 < 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      iVar7 = FUN_005841a0();
      if ((iVar7 - *(int *)(param_1 + 0x18)) + -1 < *(int *)(param_1 + 0x20)) {
        iVar7 = FUN_005841a0();
        *(int *)(param_1 + 0x20) = (iVar7 - *(int *)(param_1 + 0x18)) + -1;
      }
      iVar7 = FUN_005841b0();
      if ((iVar7 - *(int *)(param_1 + 0x1c)) + -1 < *(int *)(param_1 + 0x24)) {
        iVar7 = FUN_005841b0();
        *(int *)(param_1 + 0x24) = (iVar7 - *(int *)(param_1 + 0x1c)) + -1;
      }
      iVar7 = 3;
    }
    if (((*(int *)(param_1 + 0x20) <= iVar2) && (*(int *)(param_1 + 0x24) <= iVar4)) &&
       ((iVar2 <= *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) &&
        (iVar4 <= *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24))))) {
      uVar6 = (**(code **)(*param_2 + 8))();
      switch(uVar6) {
      case 0xd:
      case 0x14:
        iVar7 = 3;
        break;
      case 0xe:
        iVar7 = 3;
        *(undefined1 *)(param_1 + 0x48) = 0;
        break;
      case 0x11:
        cVar1 = FUN_00581e70();
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x48) = 1;
          *(int *)(param_1 + 0x4e) = iVar2 - *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x52) = iVar4 - *(int *)(param_1 + 0x24);
        }
        iVar7 = 2;
      }
    }
  }
  cVar1 = FUN_00581e70();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return iVar7;
}


