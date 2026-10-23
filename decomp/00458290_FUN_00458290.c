// FUN_00458290 @ 458290 size=37

void __thiscall FUN_00458290(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x24e + param_2 * 6);
  *puVar1 = param_3;
  *(undefined2 *)(puVar1 + 1) = param_4;
  FUN_004513d0();
  return;
}


