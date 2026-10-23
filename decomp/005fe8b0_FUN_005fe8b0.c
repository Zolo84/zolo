// FUN_005fe8b0 @ 5fe8b0 size=1486

undefined4 * __thiscall
FUN_005fe8b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf73c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f83d0(param_2,param_3,param_4);
  *(undefined2 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ee494;
  param_1[2] = &PTR_LAB_007ee490;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433660();
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x86) = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433660();
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x273f] = iVar4;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x2740] = iVar4;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x2741] = iVar4;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_0042b6c9(s_PCIW_OFFER_TRIBUTE_0085e20c);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar8);
  }
  local_4._0_1_ = 0;
  param_1[0x2742] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_0042b6c9(s_PCIW_NO_TRIBUTE_0085e1fc);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar8);
  }
  local_4._0_1_ = 0;
  param_1[0x2743] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_0042b6c9(s_PCIW_DEMAND_TRIBUTE_0085e1e8);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar8);
  }
  local_4._0_1_ = 0;
  param_1[0x2744] = uVar3;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(200,0x44,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x273b] = uVar3;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(200,0x44,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x273c] = uVar3;
  puVar6 = operator_new(0x138d4);
  local_4._0_1_ = 0xb;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00425b20();
    local_4._0_1_ = 0xc;
    FUN_00428b00();
    *(undefined ***)((int)puVar6 + 0x12) = &PTR_LAB_007e4068;
    *(undefined4 *)((int)puVar6 + 0x16) = 0;
    *(undefined2 *)((int)puVar6 + 0x1a) = 0;
    puVar6[7] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *(undefined1 *)(puVar6 + 0x4e2d) = 0;
    *(undefined1 *)((int)puVar6 + 0x138b5) = 0;
    *(undefined4 *)((int)puVar6 + 0x138b6) = 0;
    *(undefined4 *)((int)puVar6 + 0x138ba) = 0;
    *(undefined4 *)((int)puVar6 + 0x138be) = 0;
    *(undefined1 *)((int)puVar6 + 0x138c2) = 0;
    *(undefined1 *)((int)puVar6 + 0x138c3) = 0;
    puVar6[0x4e31] = 0;
    puVar6[0x4e32] = 0;
    *(undefined1 *)(puVar6 + 0x4e34) = 0;
    *(undefined1 *)((int)puVar6 + 0x138d1) = 0;
    *(undefined1 *)((int)puVar6 + 0x138d2) = 0;
    *puVar6 = &PTR_FUN_007e6c28;
    puVar6[2] = &PTR_LAB_007e6c14;
    *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e6c0c;
  }
  param_1[0x29] = puVar6;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(puVar6[2] + 8))();
  *(undefined1 *)(param_1 + 0x273e) = 1;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  iVar4 = FUN_005f8440();
  uVar3 = *(undefined4 *)(iVar4 + 6);
  *(undefined4 *)((int)param_1 + 0x8e) = uVar3;
  puVar6 = (undefined4 *)FUN_00586250(local_14,uVar3);
  *(undefined4 *)((int)param_1 + 0x96) = *puVar6;
  *(undefined2 *)((int)param_1 + 0x9a) = *(undefined2 *)(puVar6 + 1);
  iVar4 = FUN_00428ee0((undefined4 *)((int)param_1 + 0x96));
  if (iVar4 != 0) {
    if (iVar4 != 8) {
      param_1[0x27] = *(undefined4 *)(iVar4 + 0x1a);
      param_1[0x28] = *(undefined4 *)(iVar4 + 0x1e);
      cVar1 = FUN_00584e20(*(undefined4 *)(DAT_00d0ca90 + 6));
      if (cVar1 == '\x01') {
        param_1[0x28] = *(undefined4 *)(iVar4 + 0x1a);
        param_1[0x27] = *(undefined4 *)(iVar4 + 0x1e);
      }
      if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x29])(1);
      }
      puVar6 = operator_new(0x138d4);
      local_4._0_1_ = 0xd;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00425b20();
        local_4._0_1_ = 0xe;
        FUN_00428b00();
        *(undefined ***)((int)puVar6 + 0x12) = &PTR_LAB_007e4068;
        *(undefined4 *)((int)puVar6 + 0x16) = 0;
        *(undefined2 *)((int)puVar6 + 0x1a) = 0;
        puVar6[7] = 0;
        puVar6[2] = &PTR_LAB_007e6c14;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        *(undefined1 *)(puVar6 + 0x4e2d) = 0;
        *(undefined1 *)((int)puVar6 + 0x138b5) = 0;
        *(undefined4 *)((int)puVar6 + 0x138b6) = 0;
        *(undefined4 *)((int)puVar6 + 0x138ba) = 0;
        *(undefined4 *)((int)puVar6 + 0x138be) = 0;
        *(undefined1 *)((int)puVar6 + 0x138c2) = 0;
        *(undefined1 *)((int)puVar6 + 0x138c3) = 0;
        puVar6[0x4e31] = 0;
        puVar6[0x4e32] = 0;
        *(undefined1 *)(puVar6 + 0x4e34) = 0;
        *(undefined1 *)((int)puVar6 + 0x138d1) = 0;
        *(undefined1 *)((int)puVar6 + 0x138d2) = 0;
        *puVar6 = &PTR_FUN_007e6c28;
        *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e6c0c;
      }
      param_1[0x29] = puVar6;
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(puVar6[2] + 8))();
      iVar7 = param_1[0x29];
      *(undefined4 *)(iVar7 + 0x1a) = *(undefined4 *)(iVar4 + 4);
      *(undefined2 *)(iVar7 + 0x1e) = *(undefined2 *)(iVar4 + 8);
      cVar1 = FUN_00433910();
      if (cVar1 == '\0') {
        iVar4 = *(int *)(DAT_00d0ca90 + 6);
      }
      else {
        iVar4 = 0;
      }
      iVar7 = FUN_00584c90();
      *(bool *)((int)param_1 + 0x9cf9) = iVar7 != iVar4;
      cVar1 = FUN_00433910();
      if (cVar1 == '\0') {
        iVar4 = *(int *)((int)param_1 + 0x8e);
      }
      else {
        iVar4 = 0;
      }
      iVar7 = FUN_00584c90();
      *(bool *)((int)param_1 + 0x9cfa) = iVar7 != iVar4;
      FUN_006002a0();
    }
  }
  param_1[0x273d] = 0;
  uVar3 = FUN_0042b6c9(s_DIPPEACE_0085e1dc);
  uVar5 = FUN_0042b6c9(s_DIPPEACE_0085e1dc);
  FUN_006520c0(uVar5,uVar3);
  ExceptionList = local_c;
  return param_1;
}


