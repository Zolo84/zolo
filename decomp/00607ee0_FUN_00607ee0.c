// FUN_00607ee0 @ 607ee0 size=38

undefined4 __thiscall FUN_00607ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    return *(undefined4 *)(param_1 + 0x4c);
  }
  return 0;
}


