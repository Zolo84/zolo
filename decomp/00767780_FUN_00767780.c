// FUN_00767780 @ 767780 size=198

void __fastcall FUN_00767780(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007e0abb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007fa4e8;
  local_4 = 0;
  FUN_007a77fa(param_1[5]);
  FUN_007a77fa(param_1[4]);
  FUN_007a77fa(param_1[3]);
  FUN_007a77fa(param_1[6]);
  piVar4 = (int *)param_1[8];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  (**(code **)(param_1[7] + 0x14))();
  param_1[7] = &PTR_LAB_007fa4f0;
  iVar3 = param_1[8];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  ExceptionList = pvStack_c;
  return;
}


