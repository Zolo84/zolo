// FUN_0043df50 @ 43df50 size=236

void __thiscall FUN_0043df50(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007badb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1aa);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar3,uVar2,uVar5);
    *puVar1 = &PTR_FUN_007e452c;
    puVar1[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e4524;
    puVar1[0x22] = 0xd;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x60) = puVar1;
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  pvVar4 = operator_new(0x28);
  local_4 = 1;
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065f000(param_2,0);
  }
  *(undefined4 *)(param_1 + 100) = uVar2;
  local_4 = 0xffffffff;
  FUN_006d4280(param_1);
  ExceptionList = local_c;
  return;
}


