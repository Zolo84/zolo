// FUN_006a52e0 @ 6a52e0 size=129

void __thiscall FUN_006a52e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_006a6230();
  iVar1 = param_1[0x23];
  piVar2 = (int *)(**(code **)(*param_1 + 0xe0))();
  (**(code **)(*piVar2 + 0x200))(param_1,param_2,iVar1);
  iVar1 = *(int *)((int)param_1 + 10);
  param_1[0x29] = 0;
  uVar3 = (**(code **)(*(int *)param_1[0x23] + 0xc))(0);
  uVar3 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar3);
  FUN_00458570(s__s_starts_a_garrison_in__s_with___00869054,uVar3);
  uVar4 = 0;
  uVar3 = FUN_006ac310(10,0x1e);
  FUN_006adfb0(uVar3,uVar4);
  return;
}


