// FUN_005e7da0 @ 5e7da0 size=799

void __fastcall FUN_005e7da0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce58b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = DAT_0088f28c;
  uStack_1a = (undefined2)DAT_0088f28e;
  uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  *(int *)(param_1 + 200) = CONCAT22(uStack_1a,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0xcc) = uStack_18;
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4))();
  if (iVar2 == 0) {
    uStack_14 = *(undefined2 *)(DAT_00d0ca90 + 0x13d00);
    uStack_12 = (undefined2)*(undefined4 *)(DAT_00d0ca90 + 0x13d02);
    uStack_10 = (undefined2)((uint)*(undefined4 *)(DAT_00d0ca90 + 0x13d02) >> 0x10);
    iVar2 = FUN_00428ee0(&uStack_14);
    if (iVar2 == 0) goto LAB_005e809f;
    piVar6 = (int *)(iVar2 + -8);
LAB_005e7e78:
    if (piVar6 == (int *)0x0) {
LAB_005e809f:
      FUN_0064c090(0xb);
      ExceptionList = pvStack_c;
      return;
    }
  }
  else {
    iVar2 = **(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4);
    iVar3 = (**(code **)(*(int *)(iVar2 + 0x11c) + 4))();
    if ((iVar3 == 0) || (piVar6 = (int *)**(int **)(iVar2 + 0x120), piVar6 == (int *)0x0)) {
      piVar6 = *(int **)(iVar2 + 0x176);
      goto LAB_005e7e78;
    }
  }
  iVar3 = FUN_004bf290();
  iVar2 = **(int **)(param_1 + 0x170);
  uVar4 = FUN_0044b160(*(undefined4 *)(iVar3 + 6));
  (**(code **)(iVar2 + 0x2c))(uVar4);
  uVar4 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar4);
  (**(code **)(**(int **)(param_1 + 0x170) + 0x34))(4);
  *(undefined4 *)(*(int *)(param_1 + 0x170) + 0xe) = 0;
  if (piVar6[0x1d] == 6) {
LAB_005e7f0b:
    if (*(int *)(piVar6[0x1e] + 0x3d8) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(piVar6[0x1e] + 0x3d8) + 6);
      iVar2 = **(int **)(param_1 + 0x174);
      goto LAB_005e7f25;
    }
  }
  else {
    iVar2 = FUN_004bf290();
    if (iVar2 == 0) goto LAB_005e7f0b;
    iVar2 = FUN_004bf290();
    uVar4 = *(undefined4 *)(iVar2 + 6);
    iVar2 = **(int **)(param_1 + 0x174);
LAB_005e7f25:
    uVar4 = FUN_0044b160(uVar4);
    (**(code **)(iVar2 + 0x2c))(uVar4);
  }
  uVar4 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar4);
  (**(code **)(**(int **)(param_1 + 0x174) + 0x34))(4);
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xe) = 0;
  FUN_0061e4e0(param_1 + 0x248,*(undefined4 *)(piVar6[0x20] + 0x46));
  FUN_0061e4e0(param_1 + 0x24c,*(undefined4 *)(piVar6[0x21] + 0x46));
  (**(code **)(*piVar6 + 0x40))();
  *(int *)(param_1 + 200) = piVar6[3];
  *(short *)(param_1 + 0xcc) = (short)piVar6[4];
  iVar2 = piVar6[0x1d];
  if (iVar2 == 1) {
    (**(code **)(**(int **)(param_1 + 0x14c) + 0x2c))(s_gfx_interface_ill_battle_land_bm_0085c908);
  }
  else {
    if (iVar2 == 2) {
      pcVar8 = s_gfx_interface_ill_battle_naval_b_0085c8e4;
      iVar2 = **(int **)(param_1 + 0x14c);
    }
    else {
      if (iVar2 == 3) {
        (**(code **)(**(int **)(param_1 + 0x14c) + 0x2c))
                  (s_gfx_interface_ill_battle_air_bmp_0085c8c0);
        goto LAB_005e7ffe;
      }
      iVar2 = **(int **)(param_1 + 0x14c);
      pcVar8 = s_gfx_interface_ill_battle_bombing_0085c898;
    }
    (**(code **)(iVar2 + 0x2c))(pcVar8);
  }
LAB_005e7ffe:
  uVar7 = 1;
  uVar4 = (**(code **)(*(int *)piVar6[0x20] + 0xc))(1);
  FUN_005e8810(*(undefined4 *)(param_1 + 0x178),uVar4,uVar7);
  uVar7 = 0;
  uVar4 = (**(code **)(*(int *)piVar6[0x21] + 0xc))(0);
  FUN_005e8810(*(undefined4 *)(param_1 + 0x17c),uVar4,uVar7);
  if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc4))(1);
  }
  pvVar5 = operator_new(0x54);
  uStack_14 = 0;
  uStack_12 = 0;
  if (pvVar5 != (void *)0x0) {
    uVar4 = FUN_005efbe0(*(undefined4 *)(piVar6[0x1e] + 0x12),1);
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    ExceptionList = (void *)CONCAT22(uStack_1a,uVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  ExceptionList = (void *)CONCAT22(uStack_1a,uVar1);
  return;
}


