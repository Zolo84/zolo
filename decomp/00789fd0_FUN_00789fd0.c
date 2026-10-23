// FUN_00789fd0 @ 789fd0 size=372

void __fastcall FUN_00789fd0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e144e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(8);
  iVar5 = 0;
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00426120(s_db_resource_values_csv_0083b370);
  }
  local_4 = 0xffffffff;
  iVar3 = FUN_00426720();
  FUN_00426330(1);
  if (0 < iVar3) {
    do {
      FUN_004265c0(local_10c);
      iVar4 = FUN_007a8730(&DAT_00875a58,local_10c);
      if (iVar4 != 0) {
        iVar4 = FUN_007a8730(&DAT_00875a54,local_10c);
        if (iVar4 == 0) break;
        iVar6 = 6;
        iVar4 = FUN_00534368(local_10c);
        if (iVar4 < 0x235) {
          if (iVar4 == 0x234) {
            iVar6 = 2;
          }
          else if (iVar4 == 0xf6) {
            iVar6 = 4;
          }
          else if (iVar4 == 0x232) {
            iVar6 = 3;
          }
          else if (iVar4 == 0x233) {
            iVar6 = 1;
          }
        }
        else if (iVar4 == 0x235) {
          iVar6 = 0;
        }
        else if (iVar4 == 0x382) {
          iVar6 = 5;
        }
        FUN_004265c0(local_10c);
        if (iVar6 != 6) {
          fVar7 = (float10)FUN_00429d80(local_10c);
          *(float *)(param_1 + 0x16808 + iVar6 * 4) = (float)fVar7;
        }
      }
      FUN_00426330(1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return;
}


