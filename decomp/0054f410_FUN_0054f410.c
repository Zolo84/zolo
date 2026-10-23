// FUN_0054f410 @ 54f410 size=986

int * __fastcall FUN_0054f410(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  undefined4 uVar8;
  int *unaff_ESI;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c4711;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(char *)(local_1c + 7) = '\0';
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x14);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      sVar2 = *(short *)(param_1 + 4);
      puVar4[1] = 4;
      puVar4[2] = 0;
      puVar4[3] = (int)sVar2;
      *puVar4 = &PTR_FUN_007e3978;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0xf9), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar3);
  uVar8 = 0xfe;
  switch(*(char *)((int)local_1c + 2)) {
  case '\0':
    uVar8 = 0xfe;
    break;
  case '\x01':
    uVar8 = 0xff;
    break;
  case '\x02':
    uVar8 = 0x100;
    break;
  case '\x03':
    uVar8 = 0x101;
    break;
  case '\x04':
    uVar8 = 0x102;
    break;
  case '\x05':
    uVar8 = 0x103;
    break;
  case '\x06':
    uVar8 = 0x104;
    break;
  case '\a':
    uVar8 = 0x105;
    break;
  case '\b':
    uVar8 = 0x106;
    break;
  case '\t':
    uVar8 = 0x107;
    break;
  case '\n':
    uVar8 = 0x108;
    break;
  case '\v':
    uVar8 = 0x109;
  }
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    puStack_8._0_1_ = 5;
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(uVar8);
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((pvVar5 == (void *)0x0) || (iVar7 = FUN_0053e740(0xfa), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar3[3] = iVar7;
    local_1c = unaff_EBX;
    if (iVar6 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      puVar3[4] = iVar6;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  local_c = (void *)0x8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    local_c._0_1_ = 9;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      cVar1 = *(char *)((int)unaff_EBX + 1);
      FUN_004252e0(4);
      puVar4[3] = (int)cVar1;
      *puVar4 = &PTR_FUN_007e3978;
      local_1c = unaff_EBP;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 10;
    pvVar5 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xb);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0xfb), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar3);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar6 = *unaff_EBP;
      FUN_00444030(4);
      puVar3[3] = (int)(char)iVar6;
      *puVar3 = &PTR_FUN_007e3978;
      local_1c = unaff_ESI;
    }
    uVar8 = FUN_004441b0(0xfc,puVar3);
  }
  (**(code **)(*local_1c + 0x84))(uVar8);
  ExceptionList = pvVar5;
  return local_1c;
}


