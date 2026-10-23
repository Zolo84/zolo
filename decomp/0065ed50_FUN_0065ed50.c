// FUN_0065ed50 @ 65ed50 size=218

void FUN_0065ed50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x1e);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_LAB_007f0b5c;
    puVar1 = (undefined4 *)((int)puVar2 + 0x12);
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_00425a80(&DAT_0082eeb0);
    local_4._0_1_ = 2;
    FUN_00583720();
    *puVar1 = &PTR_FUN_007e3858;
    *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007e386c;
    *puVar2 = &PTR_FUN_007f0b2c;
    *puVar1 = &PTR_LAB_007f0b18;
    *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007f0b14;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0040fd60(puVar1,3000,0);
    DAT_00d10f18 = puVar2;
    ExceptionList = local_c;
    return;
  }
  DAT_00d10f18 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


