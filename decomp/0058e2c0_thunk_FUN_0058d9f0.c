// thunk_FUN_0058d9f0 @ 58e2c0 size=5

void __fastcall thunk_FUN_0058d9f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007c9ab6;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eb024;
  param_1[2] = &PTR_LAB_007eb020;
  uStack_4 = 1;
  piVar4 = (int *)param_1[0x47];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    puVar2 = (undefined4 *)*piVar4;
    piVar4 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  (**(code **)(param_1[0x46] + 0x14))();
  if (*(undefined4 **)((int)param_1 + 0x12a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x12a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x12e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x12e))(1);
  }
  param_1[0x46] = &PTR_LAB_007eb078;
  iVar5 = param_1[0x47];
  while (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 8);
    FUN_00796cd8(iVar5);
    iVar5 = iVar3;
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  uStack_4 = 0xffffffff;
  FUN_0058ede0();
  ExceptionList = pvStack_c;
  return;
}


