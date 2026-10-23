// FUN_00591990 @ 591990 size=583

void __thiscall FUN_00591990(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int *local_1c;
  int *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c9eb3;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  piVar10 = *(int **)(*(int *)(param_1 + 0x15a) + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
joined_r0x005919da:
  do {
    piVar6 = local_18;
    piVar5 = local_1c;
    if (piVar10 == (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x15a) + 0x14))();
      while (piVar5 != (int *)0x0) {
        piVar10 = (int *)piVar5[2];
        iVar11 = *piVar5;
        piVar5 = piVar10;
        if (*(char *)(param_1 + 0x166) == '\0') {
          iVar2 = *(int *)(param_1 + 0x15a);
          iVar4 = *(int *)(iVar2 + 4);
          piVar10 = operator_new(0xe);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            *piVar10 = iVar11;
            piVar10[1] = 0;
            piVar10[2] = iVar4;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          iVar11 = *(int *)(iVar2 + 0xc);
          *(int **)(iVar2 + 4) = piVar10;
          *(int *)(iVar2 + 0xc) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(iVar2 + 8) = piVar10;
          }
          else {
            *(int **)(iVar4 + 4) = piVar10;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x15a);
          iVar4 = *(int *)(iVar2 + 8);
          piVar10 = operator_new(0xe);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            *piVar10 = iVar11;
            piVar10[1] = iVar4;
            piVar10[2] = 0;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          iVar11 = *(int *)(iVar2 + 0xc);
          *(int **)(iVar2 + 8) = piVar10;
          *(int *)(iVar2 + 0xc) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(iVar2 + 4) = piVar10;
          }
          else {
            *(int **)(iVar4 + 8) = piVar10;
          }
        }
      }
      FUN_004353e0();
      local_4 = 0xffffffff;
      FUN_00436ea0();
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = (int *)piVar10[2];
    iVar11 = *piVar10;
    for (piVar3 = piVar5; piVar10 = piVar1, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      iVar2 = *piVar3;
      if ((param_2 < 0) || (*(int *)(iVar2 + 0x36) <= param_2)) {
        FUN_00405ad0();
      }
      if ((param_2 < 0) || (*(int *)(iVar11 + 0x36) <= param_2)) {
        FUN_00405ad0();
        puVar8 = *(undefined4 **)(iVar11 + 0x2e);
      }
      else {
        puVar8 = (undefined4 *)(*(int *)(iVar11 + 0x2e) + param_2 * 4);
      }
      cVar7 = (**(code **)(*(int *)*puVar8 + 4))();
      if (cVar7 != '\0') {
        (*(code *)PTR_LAB_007e42ac)(&stack0xffffffc0,iVar2);
        FUN_00592460(iVar11);
        local_1c = piVar5;
        local_18 = piVar6;
        if (piVar3 != (int *)0x0) goto joined_r0x005919da;
        break;
      }
    }
    pvVar9 = operator_new(0xe);
    local_4._0_1_ = 1;
    if (pvVar9 == (void *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = (int *)FUN_005926a0(iVar11,piVar6);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    iVar11 = local_14 + 1;
    bVar12 = local_14 != 0;
    local_1c = local_18;
    local_14 = iVar11;
    if (bVar12) {
      piVar6[2] = (int)local_18;
      local_1c = piVar5;
    }
  } while( true );
}


