// FUN_00586790 @ 586790 size=401

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00586790(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  int *local_1c;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_004252e0(2);
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(undefined1 *)(local_1c + 7) = 0;
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  local_18 = &DAT_0089cad8;
  pcVar5 = (char *)(param_1 + 0x2d);
  do {
    if ((*local_18 != 0) &&
       ((((pcVar5[2] != '\0' || (*pcVar5 != '\0')) || (pcVar5[-6] != '\0')) ||
        ((*(float *)(pcVar5 + -0xd) != _DAT_007e3380 ||
         (*(float *)(pcVar5 + -0x11) != _DAT_007e3380)))))) {
      puVar1 = operator_new(0x14);
      local_4 = 1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = (*(code *)**(undefined4 **)(pcVar5 + -0x29))();
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 2;
        pvVar3 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (pvVar3 == (void *)0x0) {
LAB_005868ad:
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0053e740(0x135);
          if (iVar4 == 0) goto LAB_005868ad;
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar1[3] = iVar4;
        if (iVar2 == 0) {
          *puVar1 = &PTR_FUN_007e3878;
          puVar1[4] = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
          puVar1[4] = iVar2;
          *puVar1 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar1);
    }
    local_18 = local_18 + 1;
    pcVar5 = pcVar5 + 0x2c;
    if (0x89d037 < (int)local_18) {
      ExceptionList = local_c;
      return local_1c;
    }
  } while( true );
}


