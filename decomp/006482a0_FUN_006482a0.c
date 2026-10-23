// FUN_006482a0 @ 6482a0 size=40

undefined4 FUN_006482a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 == 0xe) {
    return 0;
  }
  uVar2 = FUN_00442310(param_1);
  return uVar2;
}


