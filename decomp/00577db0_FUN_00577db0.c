// FUN_00577db0 @ 577db0 size=69

undefined4 __thiscall
FUN_00577db0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00bd00f0;
  DAT_00bd0098 = param_2;
  DAT_00bd00ec = 0;
  *DAT_00bd00f0 = *param_3;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_3 + 1);
  DAT_00bd00e8 = param_4;
  (**(code **)(*param_1 + 0x18))(&LAB_00577e00);
  return DAT_00bd00ec;
}


