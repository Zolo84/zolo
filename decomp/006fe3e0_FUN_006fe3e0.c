// FUN_006fe3e0 @ 6fe3e0 size=319

undefined4 * __fastcall FUN_006fe3e0(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db53b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007f84e8;
  param_1[2] = &PTR_LAB_007f84e4;
  local_4 = 1;
  iVar8 = *(int *)(DAT_00bd1bac + 4);
  puVar2 = operator_new(iVar8 * 0xca);
  param_1[3] = puVar2;
  for (uVar6 = (iVar8 * 0x65 & 0x7fffffffU) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar7 = param_1 + 0x44;
  for (uVar6 = iVar8 * 0xca & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar9 = 0;
  do {
    uVar1 = FUN_00584270(iVar9,0,0);
    *(undefined2 *)(puVar7 + -0x40) = uVar1;
    uVar1 = FUN_00584270(0xff,iVar9,0);
    *(undefined2 *)puVar7 = uVar1;
    iVar9 = iVar9 + 2;
    puVar7 = (undefined4 *)((int)puVar7 + 2);
  } while (iVar9 < 0x100);
  if (0 < iVar8) {
    iVar9 = iVar8 * 0xc6;
    do {
      iVar3 = _rand();
      iVar9 = iVar9 + 2;
      iVar8 = iVar8 + -1;
      *(short *)(param_1[3] + -2 + iVar9) = (short)(iVar3 % 0xff);
    } while (iVar8 != 0);
  }
  pvVar4 = operator_new(0x25e);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00401060(s_gfx_interface_frontend_stripe16__0086ff7c,1,0);
  }
  param_1[0x84] = uVar5;
  ExceptionList = local_c;
  return param_1;
}


