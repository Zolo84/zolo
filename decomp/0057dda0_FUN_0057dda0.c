// FUN_0057dda0 @ 57dda0 size=63

void __thiscall FUN_0057dda0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 < 0xb) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x34c + param_2 * 4), puVar1 != (undefined4 *)0x0)) {
    (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,puVar1[1]);
    FUN_00796cd8(puVar1);
    *(undefined4 *)(param_1 + 0x34c + param_2 * 4) = 0;
  }
  return;
}


