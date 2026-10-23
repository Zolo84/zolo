// FUN_0042a0fe @ 42a0fe size=389

void __thiscall FUN_0042a0fe(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  int local_30;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007b9ffb;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    sVar1 = _strlen(param_2);
    pvVar2 = operator_new(sVar1 + 1);
    *(void **)(param_1 + 4) = pvVar2;
    FUN_007a74f0(*(undefined4 *)(param_1 + 4),param_2);
    sVar1 = _strlen(param_3);
    pvVar2 = operator_new(sVar1 + 1);
    *(void **)(param_1 + 8) = pvVar2;
    FUN_007a74f0(*(undefined4 *)(param_1 + 8),param_3);
  }
  else {
    local_14 = (int *)(param_1 + 0xc);
    ExceptionList = &local_10;
    iVar3 = FUN_007a8730(param_2,*(undefined4 *)(param_1 + 4));
    if (iVar3 == 0) {
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(s_Duplicate_string_in_text_databas_0083a7d8,param_2);
      }
      FUN_00429a00(s_ERROR___Duplicate_string_in_text_0083a800,param_2);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    if (0 < iVar3) {
      local_14 = (int *)(param_1 + 0x10);
    }
    if (*local_14 == 0) {
      pvVar2 = operator_new(0x18);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_00429ddf();
      }
      local_8 = 0xffffffff;
      *local_14 = local_30;
    }
    FUN_0042a0fe(param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return;
}


