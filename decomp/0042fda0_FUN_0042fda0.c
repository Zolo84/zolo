// FUN_0042fda0 @ 42fda0 size=60

undefined4 __thiscall FUN_0042fda0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x4e) {
    *(undefined1 *)(param_1 + 0x110) = 1;
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x4d) {
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  return 0;
}


