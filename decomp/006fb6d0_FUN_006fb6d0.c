// FUN_006fb6d0 @ 6fb6d0 size=465

undefined4 * __thiscall
FUN_006fb6d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db27e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ed240(param_2,param_3,&DAT_0083bf1c,param_7);
  *param_1 = &PTR_FUN_007f83ac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f8360;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f835c;
  iVar1 = *(int *)(DAT_00bd1bac + 4);
  iVar5 = *(int *)(DAT_00bd1bac + 8);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  param_1[0x1d] = param_6;
  puVar2 = operator_new(0x18);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = DAT_00bd1bac;
    *puVar2 = &PTR_LAB_007e474c;
    puVar3 = operator_new(0x1e);
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[1] = 0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      *puVar3 = &PTR_LAB_007e36b4;
      local_4._0_1_ = 3;
      FUN_00425a80(&DAT_0082eeb0);
      local_4._0_1_ = 4;
      FUN_00583720();
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_FUN_007e3858;
      *(undefined ***)((int)puVar3 + 0x1a) = &PTR_LAB_007e386c;
      *puVar3 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar3 + 0x1a) = &PTR_LAB_007e36e4;
      puVar2[1] = puVar3;
    }
  }
  param_1[0x1b] = puVar2;
  iVar6 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0 < param_5) {
    piVar7 = param_1 + 0x1e;
    iVar5 = (iVar5 + -0x300 >> 1) + 0xd8;
    do {
      iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,iVar6,0);
      *piVar7 = iVar4;
      *(int *)(iVar4 + 0xaa) = (iVar1 + -0x400 >> 1) + 0x2b6;
      *(int *)(iVar4 + 0xae) = iVar5;
      iVar4 = *piVar7;
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 + 0x11;
      *(undefined1 *)(iVar4 + 0x68) = 1;
    } while (iVar6 < param_5);
  }
  FUN_0043fcc0(param_4);
  param_1[0x1c] = param_5;
  ExceptionList = local_c;
  return param_1;
}


