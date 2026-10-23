// FUN_005b6f60 @ 5b6f60 size=248

undefined4 FUN_005b6f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_00bd1500 == 0) || (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) ||
     (*(char *)(DAT_00bd1500 + 0x37a) != '\0')) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 10);
    if (iVar1 == -1) {
      FUN_005b7080(param_1);
      (**(code **)(*DAT_00d615a6 + 4))(param_1);
      (**(code **)(*DAT_00d615aa + 0xc))(param_1);
      (**(code **)(*DAT_00d615ae + 0x14))(param_1);
      FUN_005b4d80(param_1);
      FUN_005b0fd0(param_1);
      FUN_005b7e00(param_1);
    }
    else {
      switch(iVar1) {
      case 1:
        uVar2 = FUN_005b7080(param_1);
        return uVar2;
      case 2:
        uVar2 = (**(code **)(*DAT_00d615a6 + 4))(param_1);
        return uVar2;
      case 3:
        uVar2 = (**(code **)(*DAT_00d615aa + 0xc))(param_1);
        return uVar2;
      case 5:
        uVar2 = (**(code **)(*DAT_00d615ae + 0x14))(param_1);
        return uVar2;
      case 6:
        uVar2 = FUN_005b4d80(param_1);
        return uVar2;
      case 9:
        uVar2 = FUN_005b0fd0(param_1);
        return uVar2;
      case 10:
        uVar2 = FUN_005b7e00(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}


