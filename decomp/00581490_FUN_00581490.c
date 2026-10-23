// FUN_00581490 @ 581490 size=1200

void FUN_00581490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_1c;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8d9a;
  local_c = ExceptionList;
  switch(param_1) {
  case 9:
    if (DAT_00bd13ee != '\0') {
      ExceptionList = &local_c;
      puVar2 = operator_new(0xc);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0xe);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar3 == (undefined2 *)0x0) {
          puVar3 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar3[4] = 0;
          *(undefined4 *)(puVar3 + 5) = 0;
        }
        puVar2[1] = puVar3;
        *(undefined1 *)(puVar2 + 2) = 0;
        *(undefined1 *)((int)puVar2 + 9) = 1;
        *puVar2 = &PTR_FUN_007e3e5c;
        *(undefined1 *)((int)puVar2 + 10) = 0;
        *puVar3 = 0x50;
        iVar5 = puVar2[1];
        local_1c = (uint)local_1c._3_1_ << 0x18;
        *(undefined4 *)(iVar5 + 8) = DAT_0088f29c;
        *(undefined2 *)(iVar5 + 0xc) = DAT_0088f2a0;
        iVar5 = puVar2[1];
        *(int *)(iVar5 + 2) = local_1c;
        *(undefined2 *)(iVar5 + 6) = 0;
        *puVar2 = &PTR_FUN_007e3e3c;
      }
      local_4 = 0xffffffff;
      if (DAT_00d13348 != (int *)0x0) {
        (**(code **)(*DAT_00d13348 + 4))(puVar2);
      }
      if (puVar2 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)*puVar2)(1);
      ExceptionList = pvStack_10;
      return;
    }
    goto LAB_00581777;
  default:
    return;
  case 0x10:
    DAT_00bd13ee = 1;
    return;
  case 0x11:
    DAT_00bd13ef = 1;
    return;
  case 0x13:
    iVar5 = 0x13;
    break;
  case 0x1b:
    iVar5 = 0xe;
    break;
  case 0x21:
    iVar5 = 0x104;
    break;
  case 0x22:
    iVar5 = 0x105;
    break;
  case 0x23:
    iVar5 = 0x11;
    break;
  case 0x24:
    iVar5 = 0x10;
    break;
  case 0x25:
    iVar5 = 3;
    break;
  case 0x26:
    iVar5 = 1;
    break;
  case 0x27:
    iVar5 = 4;
    break;
  case 0x28:
    iVar5 = 2;
    break;
  case 0x2e:
    iVar5 = 7;
    break;
  case 0x70:
    iVar5 = (DAT_00bd13ee != '\0') + 0xff;
    break;
  case 0x71:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffff9f) + 0x162;
    break;
  case 0x72:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffa1) + 0x161;
    break;
  case 0x73:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffa3) + 0x160;
    break;
  case 0x74:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffa5) + 0x15f;
    break;
  case 0x75:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffa7) + 0x15e;
    break;
  case 0x76:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffa9) + 0x15d;
    break;
  case 0x77:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffab) + 0x15c;
    break;
  case 0x78:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffad) + 0x15b;
    break;
  case 0x79:
    iVar5 = (-(uint)(DAT_00bd13ee != '\0') & 0xffffffaf) + 0x15a;
    break;
  case 0x7a:
    iVar5 = 0x10a;
    break;
  case 0x7b:
    if (DAT_00bd13ee == '\0') {
      ExceptionList = &local_c;
      puVar2 = operator_new(0xc);
      local_4 = 2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0xe);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (puVar3 == (undefined2 *)0x0) {
          puVar3 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar3[4] = 0;
          *(undefined4 *)(puVar3 + 5) = 0;
        }
        puVar2[1] = puVar3;
        *(undefined1 *)(puVar2 + 2) = 0;
        *(undefined1 *)((int)puVar2 + 9) = 1;
        *puVar2 = &PTR_FUN_007e3e5c;
        *(undefined1 *)((int)puVar2 + 10) = 0;
        *puVar3 = 0x50;
        iVar5 = puVar2[1];
        local_1c = (uint)local_1c._3_1_ << 0x18;
        *(undefined4 *)(iVar5 + 8) = DAT_0088f29c;
        *(undefined2 *)(iVar5 + 0xc) = DAT_0088f2a0;
        iVar5 = puVar2[1];
        *(int *)(iVar5 + 2) = local_1c;
        *(undefined2 *)(iVar5 + 6) = 0;
        *puVar2 = &PTR_FUN_007e3e3c;
      }
      local_4 = 0xffffffff;
      if (DAT_00d13348 != (int *)0x0) {
        (**(code **)(*DAT_00d13348 + 4))(puVar2);
      }
      if (puVar2 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)*puVar2)(1);
      ExceptionList = local_c;
      return;
    }
LAB_00581777:
    iVar5 = 0x10b;
    break;
  case 0xdc:
    iVar5 = -0x59;
  }
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x1e);
    local_4._0_1_ = 5;
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007eae68;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x16;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
    local_4 = CONCAT31(local_4._1_3_,6);
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
    puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 2) = *puVar4;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
    *puVar2 = &PTR_FUN_007eae48;
    *(int *)(puVar2[1] + 0xe) = iVar5;
    *(undefined4 *)(puVar2[1] + 0x12) = param_2;
    iVar5 = puVar2[1];
    *(undefined4 *)(iVar5 + 0x16) = 0;
    *(undefined4 *)(iVar5 + 0x1a) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00577f00(puVar2);
  ExceptionList = local_c;
  return;
}


