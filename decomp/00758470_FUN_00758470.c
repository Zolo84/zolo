// FUN_00758470 @ 758470 size=53

void FUN_00758470(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_007fa2f4;
    puVar1[1] = param_2;
    (&DAT_00d4c350)[param_1] = puVar1;
    return;
  }
  (&DAT_00d4c350)[param_1] = 0;
  return;
}


