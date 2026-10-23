// FUN_00761210 @ 761210 size=355

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761210(void)

{
  bool bVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int local_24;
  double local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007e07db;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pvVar2 = operator_new(8);
  puVar5 = (undefined4 *)0x0;
  local_c = 0;
  if (pvVar2 != (void *)0x0) {
    puVar5 = (undefined4 *)FUN_00426120(s_db_policy_effects_csv_0083b190);
  }
  local_c = 0xffffffff;
  puVar3 = &DAT_00d56f2d;
  pfVar6 = (float *)&DAT_00d546cc;
  do {
    FUN_00426330(2);
    local_24 = 0x24;
    do {
      FUN_004262f0(1);
      iVar4 = 10;
      do {
        FUN_00426470(&local_20);
        *pfVar6 = (float)local_20;
        pfVar6 = pfVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00426330(1);
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    FUN_004262f0(1);
    FUN_00426470(&local_20);
    if (local_20 == _DAT_007fa4e0) {
      puVar3[-1] = 1;
      *puVar3 = 1;
      puVar3[1] = 0;
    }
    else if (local_20 == _DAT_007e3348) {
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    else {
      bVar1 = local_20 == _DAT_007e7828;
      puVar3[-1] = 1;
      if (bVar1) {
        *puVar3 = 0;
      }
      else {
        *puVar3 = 1;
      }
      puVar3[1] = 1;
    }
    FUN_00426330(1);
    puVar3 = puVar3 + 3;
  } while ((int)pfVar6 < 0xd56e2c);
  FUN_00426330(1);
  FUN_004264e0(&DAT_00d590d4);
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  ExceptionList = local_14;
  return;
}


