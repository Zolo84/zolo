// FUN_005d4d30 @ 5d4d30 size=141

undefined4 * __thiscall FUN_005d4d30(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd643;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ecc08;
  param_1[2] = &PTR_LAB_007ecc04;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecc00;
  pvVar1 = operator_new(0x72);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0x1e0,0,0);
  }
  param_1[0x2f] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


