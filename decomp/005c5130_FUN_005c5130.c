// FUN_005c5130 @ 5c5130 size=123

undefined4 __thiscall FUN_005c5130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (0 < iVar1) {
    if (iVar1 < 3) {
      cVar2 = FUN_004355a0(param_2,param_3);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x40))(param_2,param_3);
        return uVar3;
      }
    }
    else if (iVar1 == 3) {
      cVar2 = (**(code **)(*(int *)(param_1 + 0x9c) + 0x20))(param_2,param_3);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x9c) + 0x4c))(param_2,param_3);
        return uVar3;
      }
    }
  }
  return 0;
}


