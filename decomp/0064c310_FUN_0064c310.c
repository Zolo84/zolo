// FUN_0064c310 @ 64c310 size=146

int __thiscall FUN_0064c310(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x13d40) != 0) {
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x13d40) + 0x12) + 4))(param_2);
    if (iVar2 == 1) {
      if (*(undefined4 **)(param_1 + 0x13d40) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x13d40))(1);
      }
      *(undefined4 *)(param_1 + 0x13d40) = 0;
      (**(code **)(**(int **)(param_1 + 0x13d30) + 0x14))();
      uVar1 = DAT_008477ac;
      *(undefined4 *)(param_1 + 0x13d26) = *(undefined4 *)(param_1 + 0x21e5a);
      *(undefined4 *)(param_1 + 0x13d22) = uVar1;
      FUN_00657c70(0);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 4))();
      if (0 < iVar2) {
        FUN_00657c70(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4));
      }
      iVar2 = 3;
    }
  }
  return iVar2;
}


