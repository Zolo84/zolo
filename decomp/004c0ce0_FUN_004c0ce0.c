// FUN_004c0ce0 @ 4c0ce0 size=21

undefined4 __thiscall FUN_004c0ce0(int param_1,int *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))();
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  return 1;
}


