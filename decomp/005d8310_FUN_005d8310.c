// FUN_005d8310 @ 5d8310 size=346

void __thiscall FUN_005d8310(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd8a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0xfc) = 1;
  pvVar4 = operator_new(0x72);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(200,0x15e,0,0);
  }
  *(undefined4 *)(param_1 + 0x102) = uVar5;
  local_4 = 0xffffffff;
  uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x102) + 0x56) = uVar5;
  uVar3 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)(param_1 + 0x102) + 0x5a) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x102) + 0x5d) = 1;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e70dc;
  local_4 = 1;
  FUN_004b3100(param_2,&local_20);
  for (puVar1 = local_1c; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    uVar5 = FUN_004b3730(param_2,*puVar1,1);
    FUN_00436780(uVar5);
    FUN_00436780(&DAT_0085b6b8);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xfe) + 0xa2) = 0;
  local_20 = &PTR_LAB_007e70dc;
  puVar1 = local_1c;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
    FUN_00796cd8(puVar1);
    puVar1 = puVar2;
  }
  ExceptionList = local_c;
  return;
}


