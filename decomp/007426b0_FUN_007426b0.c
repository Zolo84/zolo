// FUN_007426b0 @ 7426b0 size=81

int * __fastcall FUN_007426b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00798ed3(uVar2,0);
  }
  return param_1;
}


