// FUN_005c99a0 @ 5c99a0 size=1078

int __thiscall FUN_005c99a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd201;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_00d0ca90 + 0x21e62) == 0x16) {
    ExceptionList = &local_c;
    (**(code **)(**(int **)(param_1 + 0x44) + 4))(param_2);
    ExceptionList = (void *)0x0;
    return 0;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_00428ee0(param_1 + 0x3e);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  piVar1 = (int *)(iVar4 + -0x14);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar5 = FUN_0051c480();
  if (iVar5 != *(int *)(param_1 + 0x36)) {
    uVar6 = FUN_0051c480();
    FUN_0061e4e0((int *)(param_1 + 0x48),uVar6);
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0xe) = 1;
    uVar6 = FUN_0051c480();
    *(undefined4 *)(param_1 + 0x36) = uVar6;
  }
  if (*(int *)(param_1 + 0x32) != 0) {
    if (*(int *)(param_1 + 0x3a) != 0) {
      *(int *)(*(int *)(param_1 + 0x3a) + 0x26) = param_1;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x32) + 4))(param_2);
    if (iVar4 != 1) {
      ExceptionList = local_c;
      return iVar4;
    }
    if (*(undefined4 **)(param_1 + 0x32) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x32))(1);
    }
    *(undefined4 *)(param_1 + 0x32) = 0;
    if (*(int *)(param_1 + 0x3a) == 0) {
      ExceptionList = local_c;
      return 3;
    }
    FUN_00435fb0();
    ExceptionList = local_c;
    return 3;
  }
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x50))();
  cVar3 = (**(code **)(*piVar1 + 0x9c))();
  if (cVar3 == '\0') {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  cVar3 = FUN_00525720();
  if (cVar3 != '\0') {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  if (*(int *)((int)DAT_00d0ca90 + 0x21e62) == 7) {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  if (*(int *)(iVar4 + -8) == 0) {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  iVar5 = (**(code **)(*(int *)(iVar4 + 0x108) + 4))();
  if (iVar5 != 0) {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  if (*(int *)(iVar4 + 0x162) != 0) {
    piVar2 = *(int **)(param_1 + 0x2e);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  local_10 = (**(code **)(**(int **)(param_1 + 0x2e) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x2e) + 0x96) != '\0') {
    if (*(undefined4 **)(param_1 + 0x32) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x32))(1);
    }
    if (*(int *)(param_1 + 0x3a) != 0) {
      FUN_00435fb0();
    }
    cVar3 = (**(code **)(*piVar1 + 0x28))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (cVar3 == '\0') {
        pvVar8 = operator_new(0x1c0);
        uStack_4 = 2;
        if (pvVar8 == (void *)0x0) goto LAB_005c9cb9;
        uVar6 = FUN_005c5230(piVar1,1,0);
      }
      else {
        pvVar8 = operator_new(0x1c0);
        uStack_4 = 1;
        if (pvVar8 == (void *)0x0) {
LAB_005c9cb9:
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_005d9cb0(piVar1,1,0);
        }
      }
      *(undefined4 *)(param_1 + 0x32) = uVar6;
    }
    else {
      puVar7 = operator_new(0x1c0);
      uStack_4 = 0;
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x32) = 0;
      }
      else {
        FUN_005c4430(piVar1,1,0);
        *puVar7 = &PTR_FUN_007ec954;
        puVar7[2] = &PTR_LAB_007ec950;
        *(undefined4 **)(param_1 + 0x32) = puVar7;
      }
    }
    uStack_4 = 0xffffffff;
    if (*(int *)(param_1 + 0x3a) != 0) {
      *(int *)(*(int *)(param_1 + 0x3a) + 0x26) = param_1;
    }
  }
  if (local_10 == 0) {
    local_10 = (**(code **)(**(int **)(param_1 + 0x44) + 4))(param_2);
  }
  if (*(char *)(*(int *)(param_1 + 0x44) + 0x96) == '\0') {
    ExceptionList = local_c;
    return local_10;
  }
  if ((DAT_00bd13ee != '\0') && (*(int *)((int)DAT_00d0ca90 + 0x21e62) == 6)) {
    (**(code **)(*DAT_00d0ca90 + 0x48c))(piVar1);
    goto LAB_005c9db2;
  }
  FUN_0052ac00();
  (**(code **)(*DAT_00d0ca90 + 0x49c))(piVar1);
  iVar4 = FUN_0051b230();
  uVar6 = *(undefined4 *)(iVar4 + 0x3f2);
  uVar9 = *(undefined4 *)(iVar4 + 0x3f6);
  cVar3 = (**(code **)(*piVar1 + 0x28))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*piVar1 + 0x10))();
    if (*(int *)(iVar4 + 0x2ae) == 0) {
      iVar4 = (**(code **)(*piVar1 + 0x10))();
      if (*(int *)(iVar4 + 0x2b2) == 0) goto LAB_005c9da3;
      (**(code **)(*piVar1 + 0x10))();
    }
    else {
      (**(code **)(*piVar1 + 0x10))();
    }
    iVar4 = FUN_0051b230();
    uVar6 = *(undefined4 *)(iVar4 + 0x3f2);
    uVar9 = *(undefined4 *)(iVar4 + 0x3f6);
  }
LAB_005c9da3:
  FUN_004d8cf0(uVar6,uVar9);
  FUN_004d87c0();
LAB_005c9db2:
  FUN_00652f50();
  ExceptionList = local_c;
  return local_10;
}


