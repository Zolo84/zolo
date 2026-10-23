// FUN_0064c2c0 @ 64c2c0 size=65

undefined4 __thiscall FUN_0064c2c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    iVar1 = (**(code **)(*param_2 + 8))();
    if (iVar1 == 0xe) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
      return 0;
    }
  }
  uVar2 = (**(code **)(*(int *)(param_1 + -0x13c84) + 0xc))(param_2);
  return uVar2;
}


