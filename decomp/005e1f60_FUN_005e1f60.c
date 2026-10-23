// FUN_005e1f60 @ 5e1f60 size=635

void __thiscall FUN_005e1f60(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce051;
  local_c = ExceptionList;
  iVar5 = param_1 + 0xfc;
  ExceptionList = &local_c;
  iVar2 = FUN_00428ee0(iVar5);
  if ((iVar2 != 0) && (iVar2 != 0x14)) {
    piVar3 = (int *)FUN_00581e60();
    iVar2 = piVar3[1];
    *(int *)(param_1 + 0xec) = *piVar3 + -100;
    *(int *)(param_1 + 0xf0) = iVar2;
    iVar2 = FUN_00428ee0(iVar5);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(iVar2 + -0x14);
    }
    cVar1 = (**(code **)(*piVar3 + 0x30))();
    if (cVar1 != '\0') {
      if (*(undefined4 **)(param_1 + 0x11a) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x11a))(1);
      }
      pvVar4 = operator_new(0x1c0);
      uStack_4 = 0;
      if (pvVar4 != (void *)0x0) {
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 != 0) {
          uVar6 = FUN_005c5230(iVar5 + -0x14,1,param_2);
          *(undefined4 *)(param_1 + 0x11a) = uVar6;
          ExceptionList = local_c;
          return;
        }
        uVar6 = FUN_005c5230(0,1,param_2);
        *(undefined4 *)(param_1 + 0x11a) = uVar6;
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x11a) = 0;
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_00428ee0(iVar5);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(iVar2 + -0x14);
    }
    cVar1 = (**(code **)(*piVar3 + 0x2c))();
    if (cVar1 != '\0') {
      if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x11e))(1);
      }
      pvVar4 = operator_new(0x1c0);
      uStack_4 = 1;
      if (pvVar4 != (void *)0x0) {
        iVar5 = FUN_00428ee0(iVar5);
        if (iVar5 != 0) {
          uVar6 = FUN_005d9cb0(iVar5 + -0x14,1,param_2);
          *(undefined4 *)(param_1 + 0x11e) = uVar6;
          ExceptionList = local_c;
          return;
        }
        uVar6 = FUN_005d9cb0(0,1,param_2);
        *(undefined4 *)(param_1 + 0x11e) = uVar6;
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x11e) = 0;
      ExceptionList = local_c;
      return;
    }
    if (*(undefined4 **)(param_1 + 0x122) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x122))(1);
    }
    pvVar4 = operator_new(0x1c0);
    uStack_4 = 2;
    if (pvVar4 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      iVar5 = FUN_00428ee0(iVar5);
      if (iVar5 == 0) {
        uVar6 = FUN_005c7140(0,1,param_2);
      }
      else {
        uVar6 = FUN_005c7140(iVar5 + -0x14,1,param_2);
      }
    }
    *(undefined4 *)(param_1 + 0x122) = uVar6;
  }
  ExceptionList = local_c;
  return;
}


