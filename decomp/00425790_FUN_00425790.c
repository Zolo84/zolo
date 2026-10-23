// FUN_00425790 @ 425790 size=21

undefined4 __thiscall FUN_00425790(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}


