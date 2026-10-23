// FUN_00593f80 @ 593f80 size=615

int __thiscall FUN_00593f80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_retaddr;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0x9c) {
    return 3;
  }
  if (DAT_00bda0fc != '\0') {
    if (*(int *)(param_1 + 0x28) < 0x28) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
      *(undefined1 *)((int)piVar4 + 0x86) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      piVar4 = *(int **)(param_1 + 0x34);
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
      *(undefined1 *)((int)piVar4 + 0x86) = 1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x50))();
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_2);
    iVar2 = FUN_00437bf0();
    if ((-1 < iVar2) && (iVar2 != *(int *)(param_1 + 0x28))) {
      piVar4 = (int *)FUN_00594670(*(int *)(param_1 + 0x28));
      (**(code **)(*piVar4 + 0x18))();
      DAT_00bda0fc = 0;
      *(int *)(param_1 + 0x28) = iVar2;
      piVar4 = (int *)FUN_00594670(iVar2);
      (**(code **)(*piVar4 + 0x18))();
      DAT_00bda0fc = 0;
      piVar4 = (int *)FUN_00594670(*(undefined4 *)(param_1 + 0x28));
      (**(code **)(*piVar4 + 0x14))();
      DAT_00bda0fc = '\x01';
    }
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(unaff_retaddr);
    }
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x96) != '\0') {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
      *(int *)(param_1 + 0x28) = iVar2;
      piVar4 = (int *)FUN_00594670(iVar2);
      (**(code **)(*piVar4 + 0x18))();
      DAT_00bda0fc = 0;
      *(int *)(param_1 + 0x28) = iVar2;
      piVar4 = (int *)FUN_00594670(iVar2);
      (**(code **)(*piVar4 + 0x18))();
      DAT_00bda0fc = 0;
      piVar4 = (int *)FUN_00594670(*(undefined4 *)(param_1 + 0x28));
      (**(code **)(*piVar4 + 0x14))();
      DAT_00bda0fc = '\x01';
    }
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 4))(unaff_retaddr);
    }
    if (*(char *)(*(int *)(param_1 + 0x38) + 0x96) != '\0') {
      iVar5 = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = iVar5;
      puVar1 = *(undefined4 **)(param_1 + 0x1a);
      for (iVar2 = iVar5; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar1 = (undefined4 *)puVar1[2];
      }
      (**(code **)(*(int *)*puVar1 + 0x18))();
      DAT_00bda0fc = 0;
      *(int *)(param_1 + 0x28) = iVar5;
      puVar1 = *(undefined4 **)(param_1 + 0x1a);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = (undefined4 *)puVar1[2];
      }
      (**(code **)(*(int *)*puVar1 + 0x18))();
      DAT_00bda0fc = 0;
      piVar4 = (int *)FUN_00594670(*(undefined4 *)(param_1 + 0x28));
      (**(code **)(*piVar4 + 0x14))();
      DAT_00bda0fc = '\x01';
    }
    FUN_004378e0(*(undefined4 *)(param_1 + 0x28));
    if (iVar3 == 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x1a);
      for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar1 = (undefined4 *)puVar1[2];
      }
      iVar3 = (**(code **)(*(int *)*puVar1 + 4))(unaff_retaddr);
      if (iVar3 == 0) {
        uVar6 = (**(code **)(*unaff_retaddr + 8))();
        switch(uVar6) {
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x13:
        case 0x16:
          iVar3 = 3;
        }
      }
    }
    return iVar3;
  }
  return 0;
}


