// FUN_005cc460 @ 5cc460 size=413

undefined4 * __fastcall FUN_005cc460(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd319;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_bg_brigade_bmp_0085ac20);
  local_4 = 0;
  FUN_00434930(0xe0,400,0,0);
  *param_1 = &PTR_FUN_007eca88;
  param_1[2] = &PTR_LAB_007eca84;
  local_4._0_1_ = 1;
  piVar3 = *(int **)(DAT_00d0ca90 + 0x451c);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (((*(char *)(iVar2 + 0x154) == '\0') && (*(char *)(iVar2 + 0x162) == '\x01')) &&
       (iVar5 = FUN_0064ec20(), iVar5 != 0)) {
      iVar5 = iVar2;
      uVar6 = FUN_0064ec20(iVar2);
      cVar4 = FUN_004a4150(uVar6,iVar5);
      if (cVar4 != '\0') {
        pvVar7 = operator_new(0x6c);
        local_4._0_1_ = 2;
        if (pvVar7 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_005d2b40(iVar2,0);
        }
        iVar2 = *(int *)((int)param_1 + 0x86);
        local_4._0_1_ = 1;
        puVar8 = operator_new(0xe);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = uVar6;
          puVar8[1] = iVar2;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
        }
        iVar5 = *(int *)((int)param_1 + 0x8a);
        *(undefined4 **)((int)param_1 + 0x86) = puVar8;
        *(int *)((int)param_1 + 0x8a) = iVar5 + 1;
        if (iVar5 == 0) {
          *(undefined4 **)((int)param_1 + 0x82) = puVar8;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar8;
        }
      }
    }
  }
  pvVar7 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar7 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar10 = 0x78;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar9 = FUN_0042b6c9(s_CLOSE_0085ac18);
    uVar6 = FUN_0043acc0(uVar9,uVar6,uVar10);
  }
  param_1[0x3c] = uVar6;
  ExceptionList = local_c;
  return param_1;
}


