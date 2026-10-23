// FUN_00435c80 @ 435c80 size=67

undefined4 __thiscall FUN_00435c80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0xe) < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if ((param_2 < iVar1 + *(int *)((int)param_1 + 0xe)) &&
       (*(int *)((int)param_1 + 0x12) < param_3)) {
      iVar1 = (**(code **)(*param_1 + 0x18))();
      if (param_3 < iVar1 + *(int *)((int)param_1 + 0x12)) {
        return 1;
      }
    }
  }
  return 0;
}


