// FUN_006fbf40 @ 6fbf40 size=498

undefined4 * __thiscall FUN_006fbf40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db32c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f8430;
  param_1[3] = param_2;
  param_1[4] = param_4;
  pvVar3 = operator_new(0x7e);
  uVar9 = 0;
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_frontend_plate_bmp_0086fea0);
  }
  local_4 = 0xffffffff;
  param_1[6] = uVar4;
  pvVar3 = operator_new(0x72);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar10 = 0;
    uVar4 = 0;
    iVar5 = FUN_00415be0(0,0);
    iVar5 = iVar5 + -0x20;
    iVar6 = FUN_00415bd0(iVar5);
    uVar4 = FUN_00434930(iVar6 + -0x18,iVar5,uVar4,uVar10);
  }
  local_4 = 0xffffffff;
  param_1[5] = uVar4;
  pvVar3 = operator_new(0x3a);
  local_4 = 2;
  if (pvVar3 != (void *)0x0) {
    uVar9 = FUN_006fbc90(param_2);
  }
  iVar5 = param_1[5];
  local_4 = 0xffffffff;
  iVar6 = *(int *)(iVar5 + 8);
  puVar7 = operator_new(0xe);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = uVar9;
    puVar7[1] = iVar6;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar1 = *(int *)(iVar5 + 0xc);
  *(undefined4 **)(iVar5 + 8) = puVar7;
  *(int *)(iVar5 + 0xc) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(iVar5 + 4) = puVar7;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar7;
  }
  piVar2 = *(int **)(param_3 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    iVar5 = 0;
    if (0 < *(int *)(param_4 + 0xa0)) {
      piVar8 = (int *)(param_4 + 0x10);
      do {
        if (*(int *)(*piVar8 + 0xac) == *piVar2) goto LAB_006fc10c;
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar5 < *(int *)(param_4 + 0xa0));
    }
    pvVar3 = operator_new(0x3a);
    local_4 = 3;
    if (pvVar3 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_006fbc90(*piVar2);
    }
    iVar5 = param_1[5];
    local_4 = 0xffffffff;
    iVar6 = *(int *)(iVar5 + 8);
    puVar7 = operator_new(0xe);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = uVar9;
      puVar7[1] = iVar6;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar1 = *(int *)(iVar5 + 0xc);
    *(undefined4 **)(iVar5 + 8) = puVar7;
    *(int *)(iVar5 + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(iVar5 + 4) = puVar7;
    }
    else {
      *(undefined4 **)(iVar6 + 8) = puVar7;
    }
LAB_006fc10c:
    piVar2 = (int *)piVar2[2];
  } while( true );
}


