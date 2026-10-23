// FUN_00799260 @ 799260 size=54

void __thiscall FUN_00799260(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = *(undefined4 *)(param_1 + 0x1c);
    puVar1[1] = param_3;
    puVar1[2] = param_2;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0079c351();
  }
  return;
}


