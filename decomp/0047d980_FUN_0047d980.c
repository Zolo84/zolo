// FUN_0047d980 @ 47d980 size=1151

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047d980(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_41c;
  int *local_418;
  undefined1 auStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd2ec;
  pvStack_c = ExceptionList;
  bVar10 = false;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00428ee0();
  if (iVar4 == 0) {
    local_41c = 0;
  }
  else {
    local_41c = iVar4 + -8;
    if (local_41c != 0) {
      cVar3 = FUN_00584e20();
      bVar10 = cVar3 != '\0';
      iVar8 = *(int *)(param_1 + 6);
      iVar5 = FUN_00584c90();
      uVar6 = FUN_00447250();
      FUN_00449290(uVar6);
      FUN_00460310();
      puVar7 = (undefined4 *)(param_1 + 0x34ac);
      for (iVar9 = 0x56; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_418 = &DAT_0089cad8;
      do {
        iVar9 = *local_418;
        if (((iVar9 != 0) && (*(int *)(*(int *)(iVar9 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)))
           && (*(int *)(iVar9 + 0x3350) == local_41c)) {
          puVar7 = operator_new(0xc);
          local_4 = 0;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            uVar6 = *(undefined4 *)(iVar9 + 6);
            FUN_00498cd0();
            iVar9 = puVar7[1];
            *puVar7 = &PTR_FUN_007e6364;
            *(undefined4 *)(iVar9 + 0x12) = *(undefined4 *)(iVar4 + 4);
            *(undefined2 *)(iVar9 + 0x16) = *(undefined2 *)(iVar4 + 8);
            *(undefined4 *)(puVar7[1] + 0x18) = uVar6;
            *(undefined1 *)(puVar7[1] + 0x1c) = 0;
          }
          local_4 = 0xffffffff;
          *(undefined1 *)(puVar7[1] + 0x1c) = *(undefined1 *)(*(int *)(param_2 + 4) + 0x1c);
          FUN_00565c30();
        }
        local_418 = local_418 + 1;
      } while ((int)local_418 < 0x89d038);
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x1a) + 4))();
      if (0 < iVar4) {
        if (iVar5 == iVar8) {
          FUN_00584cb0();
        }
        FUN_00584c90();
        auStack_40c[0] = 0;
        FUN_0043ea10(auStack_40c);
        FUN_00588600();
        FUN_005885d0();
        FUN_00588600();
        uVar6 = *(undefined4 *)(param_1 + 6);
        (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
        (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
        FUN_006ea3b0(0x29,uVar6);
        FUN_00585e50();
        FUN_0049ebd0();
      }
    }
  }
  FUN_005886c0();
  FUN_00462380();
  FUN_006ad8e0(0x1e);
  cVar3 = FUN_0044beb0();
  if ((cVar3 != '\0') && (iVar4 = DAT_00d615e4, *(char *)(*(int *)(param_2 + 4) + 0x1c) != '\0')) {
    while (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + 8);
      cVar3 = FUN_00584e20();
      if ((((cVar3 != '\0') && (cVar3 = FUN_00584e20(), cVar3 != '\0')) ||
          ((cVar3 = FUN_00584e20(), cVar3 != '\0' && (cVar3 = FUN_00584e20(), cVar3 != '\0')))) &&
         (iVar8 = FUN_00584c90(), iVar8 != 0)) {
        puVar7 = operator_new(0xc);
        local_4 = 1;
        if (puVar7 != (undefined4 *)0x0) {
          FUN_004990f0();
          *puVar7 = &PTR_FUN_007e6b2c;
          *(int *)(puVar7[1] + 0xe) = iVar8;
          *(undefined1 *)(puVar7[1] + 0x12) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00565c30();
      }
    }
  }
  piVar2 = *(int **)(*(int *)(local_41c + 0x22) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar4 = *(int *)((&DAT_0089cad8)[*piVar2] + 0xe8a4);
    while (piVar2 = piVar1, iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + 8);
      FUN_004e9370();
      FUN_004ea310();
      FUN_004e8540();
    }
  }
  iVar4 = *(int *)(param_1 + 0xe8a4);
  while (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 8);
    FUN_004e9370();
    FUN_004ea310();
    FUN_004e8540();
  }
  if (DAT_00a98440 == 3) {
    FUN_004dcb20();
  }
  if (bVar10) {
    (**(code **)(*DAT_00d0ca90 + 0x490))();
  }
  FUN_005886c0();
  FUN_004cc729();
  FUN_00463240();
  ExceptionList = pvStack_c;
  return 3;
}


