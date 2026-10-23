// FUN_007428a0 @ 7428a0 size=116

bool __fastcall FUN_007428a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) &&
     (piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c), piVar1 != (int *)0x0)) {
    uVar3 = 0;
    if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) {
      iVar2 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
      if (iVar2 == -1) {
        uVar3 = 4;
      }
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar3;
      if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      FUN_00798ed3(uVar3,0);
    }
  }
  return *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0;
}


