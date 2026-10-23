// FUN_0069b880 @ 69b880 size=130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0069b880(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_0069b910(param_3);
  if (iVar2 == 0) {
    (**(code **)(*(int *)param_1[param_2 + 0x13] + 0x20c))(param_3,param_1[0x12]);
    if (_DAT_007e3380 <= *(float *)(param_1[param_2 + 0x13] + 0x44)) {
      cVar1 = FUN_0069b360(param_1[param_2 + 0x13]);
      if (cVar1 != '\0') {
        iVar2 = *(int *)param_1[param_2 + 0x13];
        uVar3 = (**(code **)(*param_1 + 0xe0))();
        piVar4 = (int *)(**(code **)(iVar2 + 0x208))(uVar3);
        param_1[param_2 + 0x13] = (int)piVar4;
        (**(code **)(*piVar4 + 0xb4))(param_1);
        return 1;
      }
    }
  }
  return 0;
}


