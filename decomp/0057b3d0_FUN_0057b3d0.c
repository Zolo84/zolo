// FUN_0057b3d0 @ 57b3d0 size=61

undefined4 __thiscall FUN_0057b3d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if (*(char *)(param_1 + 0x37b) != '\0') {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x24))(*(int **)(param_1 + 0xbc4),param_2);
    *(undefined4 *)(param_1 + 0x3ac) = uVar1;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x3ac) >> 8),*(int *)(param_1 + 0x3ac) == 0);
}


