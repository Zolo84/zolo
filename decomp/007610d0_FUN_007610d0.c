// FUN_007610d0 @ 7610d0 size=310

void FUN_007610d0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_110;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e07be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00426120(s_db_ideology_matrix_csv_0083b358);
  }
  local_4 = 0xffffffff;
  iVar3 = FUN_00426720();
  local_110 = 0;
  if (0 < iVar3) {
    puVar6 = &DAT_00d570cc;
    do {
      FUN_004265c0(local_10c);
      iVar4 = FUN_007a8730(&DAT_00875a58,local_10c);
      if (iVar4 == 0) {
        FUN_00426330(1);
      }
      else {
        iVar4 = FUN_007a8730(&DAT_00875a54,local_10c);
        if (iVar4 == 0) break;
        uVar5 = FUN_007639b0(local_10c);
        puVar6[1] = uVar5;
        iVar4 = 9;
        puVar7 = puVar6;
        do {
          FUN_004265c0(local_10c);
          uVar5 = FUN_007639b0(local_10c);
          *puVar7 = uVar5;
          puVar7 = puVar7 + -1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_00426330(1);
        puVar6 = puVar6 + -10;
      }
      local_110 = local_110 + 1;
    } while (local_110 < iVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return;
}


