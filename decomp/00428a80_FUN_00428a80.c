// FUN_00428a80 @ 428a80 size=24

undefined4 __thiscall FUN_00428a80(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  uVar1 = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 8) = uVar1;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),uVar1) >> 8),1);
}


