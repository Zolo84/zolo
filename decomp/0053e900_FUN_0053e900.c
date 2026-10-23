// FUN_0053e900 @ 53e900 size=186

void __fastcall FUN_0053e900(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007c306f;
  ExceptionList = &pvStack_c;
  piVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_007e3a28;
  *piVar1 = (int)&PTR_LAB_007e39f8;
  local_4 = 1;
  piVar5 = (int *)param_1[4];
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    puVar6 = (undefined4 *)*piVar5;
    piVar5 = piVar2;
    if ((puVar6 != (undefined4 *)0x0) && (iVar3 = puVar6[2], puVar6[2] = iVar3 + -1, iVar3 + -1 < 1)
       ) {
      (**(code **)*puVar6)(1);
    }
  }
  (**(code **)(*piVar1 + 0x10))();
  puVar6 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)piVar1);
  *puVar6 = &PTR_LAB_007e3ac0;
  iVar3 = puVar6[1];
  while (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar4;
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *param_1 = &PTR_LAB_007e38f8;
  ExceptionList = pvStack_c;
  return;
}


