// FUN_00700e60 @ 700e60 size=318

void __thiscall FUN_00700e60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db86b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_2 + 0x1235) != '\0') {
    ExceptionList = &local_c;
    FUN_0044df10();
    FUN_00700a50();
    FUN_004739f0();
  }
  FUN_0044df10();
  FUN_00498640();
  FUN_004739f0();
  if (*(char *)(param_2 + 0x1280) != '\0') {
    pvVar3 = operator_new(8);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_0076c790();
    }
    *puVar4 = *(undefined4 *)(param_2 + 0xe);
    puVar4[1] = -DAT_00dc153c;
    iVar1 = *(int *)(param_1 + 0x1d510);
    local_4 = 0xffffffff;
    puVar5 = operator_new(0xe);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = puVar4;
      puVar5[1] = iVar1;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x1d514);
    *(undefined4 **)(param_1 + 0x1d510) = puVar5;
    *(int *)(param_1 + 0x1d514) = iVar2 + 1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar5;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 **)(param_1 + 0x1d50c) = puVar5;
  }
  ExceptionList = local_c;
  return;
}


