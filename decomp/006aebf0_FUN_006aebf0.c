// FUN_006aebf0 @ 6aebf0 size=335

void FUN_006aebf0(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5e2e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)((int)param_2 + 6) != 0) {
      FUN_006aebf0(param_1,*(int *)((int)param_2 + 6));
    }
    if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) {
      puVar2 = operator_new(0x14);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0x10);
        puVar6 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          sVar1 = *(short *)(*param_2 + 0x100);
          puVar3[2] = 0;
          puVar3[1] = 4;
          puVar3[3] = (int)sVar1;
          *puVar3 = &PTR_FUN_007e3978;
          puVar6 = puVar3;
        }
        iVar5 = *param_2;
        puVar2[1] = 0xd;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 1;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,2);
        if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e770(iVar5), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar2[3] = iVar5;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
        }
        puVar2[4] = puVar6;
        *puVar2 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar2);
    }
    if (*(int *)((int)param_2 + 0xe) != 0) {
      FUN_006aebf0(param_1,*(int *)((int)param_2 + 0xe));
    }
    param_2 = *(int **)((int)param_2 + 10);
  } while (param_2 != (int *)0x0);
  ExceptionList = pvStack_c;
  return;
}


