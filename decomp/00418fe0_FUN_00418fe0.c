// FUN_00418fe0 @ 418fe0 size=153

void FUN_00418fe0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9e3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0x3ff;
    pvVar2 = operator_new(0xffc);
    puVar1[2] = pvVar2;
    uVar3 = 0;
    if (puVar1[1] != 0) {
      do {
        uVar3 = uVar3 + 1;
        *(undefined4 *)(puVar1[2] + -4 + uVar3 * 4) = 0;
      } while (uVar3 < (uint)puVar1[1]);
    }
  }
  local_4 = 0xffffffff;
  DAT_0088ec00 = puVar1;
  FUN_00418780();
  ExceptionList = local_c;
  return;
}


