// FUN_0053f5d0 @ 53f5d0 size=147

void __fastcall FUN_0053f5d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c30e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e92b4;
  iVar1 = param_1[3];
  local_4 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    puVar2 = (undefined4 *)param_1[3];
    if ((int)puVar2[2] < 1) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      param_1[3] = 0;
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    puVar2 = (undefined4 *)param_1[4];
    if ((int)puVar2[2] < 1) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      param_1[4] = 0;
    }
  }
  *param_1 = &PTR_LAB_007e38f8;
  ExceptionList = pvStack_c;
  return;
}


