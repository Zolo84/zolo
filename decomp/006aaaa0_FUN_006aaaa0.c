// FUN_006aaaa0 @ 6aaaa0 size=255

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006aaaa0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5b6b;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 0xc) == *(int *)(param_3 + 0x12)) {
    uVar2 = 1;
  }
  else {
    ExceptionList = &local_c;
    cVar1 = FUN_0051a4c0();
    if (cVar1 == '\0') {
      uVar2 = 3;
    }
    else {
      pvVar3 = operator_new(0xc2);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0xe0))();
        piVar4 = (int *)FUN_006a6e40(uVar2);
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0xb4))(param_1);
      (**(code **)(*piVar4 + 0x210))(param_2,param_3);
      if (_DAT_007e68dc <= (float)piVar4[0x11]) {
        (**(code **)(*param_1 + 0x108))(piVar4);
        (**(code **)(**(int **)(param_2 + 500) + 0x1ac))(param_2);
        (**(code **)(*piVar4 + 0x214))(param_2);
        uVar2 = 0;
      }
      else {
        if (piVar4 != (int *)0x0) {
          (**(code **)*piVar4)(1);
        }
        uVar2 = 2;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


