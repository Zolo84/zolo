// FUN_006483f0 @ 6483f0 size=301

void __fastcall FUN_006483f0(int param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d271b;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_14 = 0;
  puVar4 = *(undefined4 **)(param_1 + 4);
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar4[2];
      piVar5 = (int *)*puVar4;
      iVar3 = (**(code **)(*piVar5 + 0x18))();
      iVar6 = iVar6 + iVar3;
      iVar3 = (**(code **)(*piVar5 + 0x1c))();
      if (local_14 < iVar3) {
        local_14 = (**(code **)(*piVar5 + 0x1c))();
      }
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    ppvVar2 = ExceptionList;
    if (0x23a < iVar6) {
      iVar6 = 0x23a;
    }
  }
  ExceptionList = ppvVar2;
  *(int *)(param_1 + 0x2a) = iVar6;
  *(int *)(param_1 + 0x2e) = local_14;
  puVar4 = operator_new(0x58);
  uStack_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00441ab0();
    *puVar4 = &PTR_FUN_007f0480;
    puVar4[2] = &PTR_LAB_007f047c;
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x72) = puVar4;
  FUN_00441c10(0,local_14 + 0x14,iVar6 + 0x18,8,0xff,0);
  iVar6 = FUN_00581e60();
  iVar6 = *(int *)(iVar6 + 4);
  piVar5 = (int *)FUN_00581e60();
  iVar3 = *(int *)(param_1 + 0x72);
  *(int *)(iVar3 + 0x20) = *piVar5 + -0xe;
  *(int *)(iVar3 + 0x24) = iVar6 + -0x10;
  FUN_006d4270(*(undefined4 *)(param_1 + 0x72));
  FUN_00434f70(*(undefined4 *)(*(int *)(param_1 + 0x72) + 0x10));
  FUN_004422a0();
  ExceptionList = pvStack_c;
  return;
}


