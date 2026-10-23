// FUN_00712fe0 @ 712fe0 size=634

void FUN_00712fe0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dbe6c;
  local_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x13d) != '\0') {
    iVar8 = 0;
    if (DAT_0087769c < 1) {
      return;
    }
    param_2 = &DAT_00dbd1a2;
    ExceptionList = &local_c;
    do {
      iVar1 = *param_2;
      if (iVar1 < 0xc) {
        if (*(int *)(iVar3 + 0xc) != 0) {
          if (0xb < iVar1) goto LAB_00713040;
          goto LAB_00713052;
        }
LAB_00713064:
        puVar5 = operator_new(0xc);
        local_4 = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar3 + 8);
          FUN_0072aaa0(0x188,param_1 + 4);
          *puVar5 = &PTR_FUN_007e97fc;
          *(undefined4 *)(puVar5[1] + 0x16) = param_3;
          *(int *)(puVar5[1] + 0x12) = iVar8;
          *(undefined4 *)(puVar5[1] + 0xe) = uVar2;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0(puVar5);
      }
      else {
LAB_00713040:
        if (((iVar1 < 0x15) || (iVar1 == 0x8c)) && (*(int *)(iVar3 + 0xc) == 2)) goto LAB_00713064;
LAB_00713052:
        if (((0x14 < iVar1) && (iVar1 != 0x8c)) && (*(int *)(iVar3 + 0xc) == 1)) goto LAB_00713064;
      }
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 1;
      if (DAT_0087769c <= iVar8) {
        ExceptionList = local_c;
        return;
      }
    } while( true );
  }
  if (*(char *)((int)param_2 + 0x13c) == '\0') {
    ExceptionList = &local_c;
    puVar5 = operator_new(0xc);
    local_4 = 2;
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)((int)param_2 + 8);
      uVar4 = *(undefined4 *)((int)param_2 + 0xc);
      puVar6 = operator_new(0x1a);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      puVar5[1] = puVar6;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007e981c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar6 = 0x188;
      iVar3 = puVar5[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
      puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = puVar5[1];
      *(undefined4 *)(iVar3 + 2) = *puVar7;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
      *puVar5 = &PTR_FUN_007e97fc;
      *(undefined4 *)(puVar5[1] + 0x16) = param_3;
      *(undefined4 *)(puVar5[1] + 0x12) = uVar4;
      *(undefined4 *)(puVar5[1] + 0xe) = uVar2;
      goto LAB_00713235;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar5 = operator_new(0xc);
    local_4 = 1;
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)((int)param_2 + 8);
      iVar3 = *(int *)((int)param_2 + 0xc);
      FUN_0072aaa0(0x188,param_1 + 4);
      *puVar5 = &PTR_FUN_007e97fc;
      *(undefined4 *)(puVar5[1] + 0x16) = param_3;
      *(int *)(puVar5[1] + 0x12) = iVar3 + 0x8c;
      *(undefined4 *)(puVar5[1] + 0xe) = uVar2;
      goto LAB_00713235;
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_00713235:
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar5);
  ExceptionList = local_c;
  return;
}


