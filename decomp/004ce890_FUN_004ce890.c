// FUN_004ce890 @ 4ce890 size=116

/* WARNING: Removing unreachable block (ram,0x004ce8ac) */

void * FUN_004ce890(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  void *local_18;
  
  puVar1 = operator_new(0xc);
  local_18 = puVar1;
  if (param_1 != (void *)0x0) {
    local_18 = param_1;
  }
  *puVar1 = local_18;
  local_1c = puVar1;
  if (param_2 != (undefined4 *)0x0) {
    local_1c = param_2;
  }
  puVar1[1] = local_1c;
  return puVar1;
}


