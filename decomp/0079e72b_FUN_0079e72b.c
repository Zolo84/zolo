// FUN_0079e72b @ 79e72b size=49

undefined4 __thiscall FUN_0079e72b(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = *(uint *)param_1[8];
  if ((uVar1 == 0) || (uVar1 + *(int *)param_1[0xc] * 2 <= uVar1)) {
    param_2 = (**(code **)(*param_1 + 4))(param_2);
  }
  else {
    puVar2 = (undefined2 *)FUN_007989bb();
    *puVar2 = (short)param_2;
  }
  return param_2;
}


