// FUN_004ca69a @ 4ca69a size=297

int FUN_004ca69a(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  float local_c;
  int *local_8;
  
  if ((*(int *)(param_2 + 0x482) == 0) || (iVar3 = FUN_004c9f81(), iVar3 != param_1)) {
    local_10 = 0;
    local_c = 0.0;
    local_8 = *(int **)(param_1 + 0xe86e);
    while (local_8 != (int *)0x0) {
      piVar1 = local_8 + 2;
      iVar3 = *local_8;
      iVar5 = **(int **)(iVar3 + 0x2c);
      iVar4 = *(int *)(iVar5 + 0x3fa) - *(int *)(param_2 + 0x3fa);
      iVar5 = *(int *)(iVar5 + 0x3fe) - *(int *)(param_2 + 0x3fe);
      fVar2 = (float)iVar4 * (float)iVar4 + (float)iVar5 * (float)iVar5;
      local_8 = (int *)*piVar1;
      if ((local_10 == 0) || (fVar2 < local_c)) {
        local_10 = iVar3;
        local_c = fVar2;
      }
    }
  }
  else {
    local_10 = (**(code **)**(undefined4 **)(param_2 + 0x482))();
  }
  return local_10;
}


