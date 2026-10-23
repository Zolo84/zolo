// FUN_006cd800 @ 6cd800 size=140

void __fastcall FUN_006cd800(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006e92b0();
  pvVar1 = operator_new(0x13e);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00426d70(s_config_eu_0086b7e4,&DAT_0082ef98);
  }
  local_4 = 0xffffffff;
  FUN_004272b0(*param_1,0x424);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return;
}


