// FUN_0075d190 @ 75d190 size=326

undefined4 FUN_0075d190(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e030b;
  local_c = ExceptionList;
  puVar2 = DAT_00d546bc;
  ExceptionList = &local_c;
  while( true ) {
    while (DAT_00d546bc = puVar2, iVar3 = FUN_00535490(), iVar3 == 1) {
      if (*(int *)(param_1 + 4) == 0x1b0) {
        DAT_00d546b1 = *(int *)(param_1 + 0x40c) == 0x111;
        puVar2 = DAT_00d546bc;
      }
      else {
        if (*(int *)(param_1 + 4) != 0x3bc) {
          FUN_005349b0(s_unknown_lhs_in_scenario_file__we_0087553c);
          ExceptionList = local_c;
          return 0xfffffffe;
        }
        pvVar4 = operator_new(0x3c);
        local_4 = 0;
        if (pvVar4 == (void *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)FUN_0075f210();
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar5 + 8))(param_1);
        puVar1 = DAT_00d546c0;
        DAT_00d546c0 = operator_new(0xe);
        if (DAT_00d546c0 == (undefined4 *)0x0) {
          DAT_00d546c0 = (undefined4 *)0x0;
        }
        else {
          *DAT_00d546c0 = piVar5;
          DAT_00d546c0[1] = puVar1;
          DAT_00d546c0[2] = 0;
          *(undefined1 *)(DAT_00d546c0 + 3) = 0;
        }
        iVar3 = DAT_00d546c4 + 1;
        bVar6 = DAT_00d546c4 != 0;
        puVar2 = DAT_00d546c0;
        DAT_00d546c4 = iVar3;
        if (bVar6) {
          puVar1[2] = DAT_00d546c0;
          puVar2 = DAT_00d546bc;
        }
      }
    }
    if (iVar3 == 2) break;
    piVar5 = (int *)FUN_00534391();
    puVar2 = DAT_00d546bc;
    if (*piVar5 == 4) {
      FUN_005343dc();
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return 0;
}


