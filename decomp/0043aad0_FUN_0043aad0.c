// FUN_0043aad0 @ 43aad0 size=139

int FUN_0043aad0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bab7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x7e);
  iVar4 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar4 = FUN_00414c80(param_1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00415be0();
  if (iVar2 < 0x15) {
    pcVar5 = s_tb_bmp_0083bcb0;
  }
  else {
    pcVar5 = s_tb2_bmp_0083bcb8;
  }
  uVar3 = FUN_00413d60(pcVar5);
  FUN_00415f20(uVar3);
  *(undefined1 *)(*(int *)(iVar4 + 0x62) + 0x252) = 1;
  ExceptionList = local_c;
  return iVar4;
}


