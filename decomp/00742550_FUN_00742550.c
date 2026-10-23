// FUN_00742550 @ 742550 size=139

int * __thiscall FUN_00742550(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007df0e8;
  pvStack_10 = ExceptionList;
  uVar4 = 0;
  ExceptionList = &pvStack_10;
  if ((*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) &&
     (ExceptionList = &pvStack_10, *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c) != 0)) {
    ExceptionList = &pvStack_10;
    FUN_007426b0();
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4) == 0) {
    local_8 = 1;
    iVar3 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x1c))
                      (param_2,param_3);
    if (iVar3 != param_3) {
      piVar2 = (int *)FUN_00742608();
      return piVar2;
    }
  }
  else {
    uVar4 = 4;
  }
  local_8 = 0;
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar4;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar4 = uVar4 | 4;
    }
    FUN_00798ed3(uVar4,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_007994bd();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*param_1 + 4), (*(byte *)(iVar3 + 0xc + (int)param_1) & 2) != 0)) {
    uVar4 = 0;
    if (((*(byte *)((int)param_1 + iVar3 + 4) & 6) == 0) &&
       (iVar3 = (**(code **)(**(int **)((int)param_1 + iVar3 + 0x28) + 0x2c))(), iVar3 == -1)) {
      uVar4 = 4;
    }
    if (uVar4 != 0) {
      uVar4 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar4;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar4 = uVar4 | 4;
      }
      FUN_00798ed3(uVar4,0);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


