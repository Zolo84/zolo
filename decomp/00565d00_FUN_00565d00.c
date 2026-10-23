// FUN_00565d00 @ 565d00 size=952

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00565d00(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puStack_18;
  ushort local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c6d03;
  local_c = ExceptionList;
  iVar4 = 0;
  local_14 = *(ushort *)(param_1[1] + 8);
  iVar2 = *(int *)(param_1[1] + 10);
  local_12 = (undefined2)iVar2;
  uStack_10 = (undefined2)((uint)iVar2 >> 0x10);
  if ((iVar2 == DAT_0088f28e) && (local_14 == DAT_0088f28c)) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 == 0x1b) && (DAT_00d13360 != (int *)0x0)) {
    *(undefined1 *)(DAT_00d13360 + 3) = 1;
  }
  if ((char)param_1[2] != '\0') {
    puStack_18 = operator_new(0xe);
    if (puStack_18 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puStack_18[1] = 0;
      *(undefined1 *)(puStack_18 + 2) = 0;
      *(undefined1 *)((int)puStack_18 + 9) = 1;
      uStack_4 = 1;
      *puStack_18 = &PTR_FUN_007e943c;
      FUN_005661a0(param_1);
      puVar3 = puStack_18;
    }
    uStack_4 = 0xffffffff;
    FUN_00577fa0(puVar3);
  }
  if (*(char *)((int)param_1 + 9) == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  if ((CONCAT22(uStack_10,local_12) == ram0x0088f29e) && (local_14 == (ushort)DAT_0088f29c)) {
    if ((DAT_00d12a38 != (int *)0x0) &&
       (iVar2 = (**(code **)(*DAT_00d12a38 + 4))(param_1), iVar2 != 0)) {
      ExceptionList = local_c;
      return iVar2;
    }
    iVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 == 0x4f) {
      iVar2 = (**(code **)(*DAT_00d0ca90 + 0xc))(param_1);
      ExceptionList = (void *)CONCAT22(uStack_e,uStack_10);
      return iVar2;
    }
    cVar1 = FUN_0042e8e0();
    if (cVar1 == '\0') {
      if (DAT_00d12a38 != (int *)0x0) {
        iVar4 = (**(code **)(*DAT_00d12a38 + 4))(param_1);
      }
      if (iVar4 == 0) {
        iVar4 = FUN_006ff7d0(param_1);
      }
    }
    else {
      (**(code **)*DAT_00893530)(param_1);
      (**(code **)(*DAT_00893750 + 0xc))(param_1);
      (**(code **)(*DAT_00be19d0 + 4))(param_1);
      iVar2 = FUN_0057c030(param_1);
      if (iVar2 == 3) {
        ExceptionList = puStack_18;
        return 3;
      }
      if (*(char *)((int)DAT_00893750 + 0x111) != '\0') {
        (**(code **)(*DAT_00a983fc + 4))(param_1);
        FUN_00782090(param_1);
        iVar4 = (**(code **)(*DAT_00d13360 + 4))(param_1);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*DAT_0088ee04 + 0x30))(param_1);
        }
      }
      iVar2 = (**(code **)(*param_1 + 8))();
      if ((iVar2 == 0x12a) && (*(int *)((int)DAT_00893530 + 0x1a) != 0)) {
        *(undefined1 *)((int)DAT_00893750 + 0x11d) = 0;
        FUN_0042cc70();
        ExceptionList = local_c;
        return 3;
      }
    }
    goto LAB_00566085;
  }
  if (local_14 < 0x1268) {
    puVar3 = DAT_00bdc100;
    if ((local_14 != 8) &&
       ((CONCAT22(uStack_10,local_12) != _DAT_0088f22a || (local_14 != DAT_0088f228)))) {
      if (local_14 != 4) {
        if (local_14 == 7) {
          iVar2 = FUN_00428460(param_1[1] + 8);
          if ((iVar2 != 0) && ((int *)(iVar2 + -8) != (int *)0x0)) {
            iVar4 = (**(code **)(*(int *)(iVar2 + -8) + 4))(param_1);
          }
        }
        else {
          iVar2 = FUN_00428ad0(&local_14);
          if (iVar2 != 0) {
            iVar4 = (**(code **)(*param_1 + 0x14))(iVar2);
          }
        }
        goto LAB_00566085;
      }
      puVar3 = (undefined4 *)FUN_00428460(&local_14);
    }
    if (puVar3 == (undefined4 *)0x0) goto LAB_00566085;
    iVar2 = *param_1;
  }
  else {
    puVar3 = (undefined4 *)FUN_00428ee0(&local_14);
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 == 0xad) {
        (**(code **)*puVar3)(1);
        ExceptionList = (void *)CONCAT22(uStack_e,uStack_10);
        return 3;
      }
      iVar4 = (**(code **)(*param_1 + 0x10))(puVar3);
      goto LAB_00566085;
    }
    puVar3 = (undefined4 *)FUN_00428460(&local_14);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00566085;
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 == 0xad) {
      (**(code **)*puVar3)(1);
      ExceptionList = (void *)CONCAT22(uStack_e,uStack_10);
      return 3;
    }
    iVar2 = *param_1;
  }
  iVar4 = (**(code **)(iVar2 + 0x18))(puVar3);
LAB_00566085:
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0x4d) {
    FUN_005886c0();
    cVar1 = FUN_0042e980();
    if (cVar1 != '\0') {
      FUN_006a8320();
    }
  }
  ExceptionList = local_c;
  return iVar4;
}


