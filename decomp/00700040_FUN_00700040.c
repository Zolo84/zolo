// FUN_00700040 @ 700040 size=467

void __fastcall FUN_00700040(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007db791;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8534;
  local_4 = 5;
  piVar5 = (int *)param_1[2];
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    puVar2 = (undefined4 *)*piVar5;
    piVar5 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x1d4d6);
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar3;
  }
  *(undefined4 *)((int)param_1 + 0x1d4d6) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4da) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4de) = 0;
  *(undefined ***)((int)param_1 + 0x1d51a) = &PTR_LAB_007ef1f8;
  iVar6 = *(int *)((int)param_1 + 0x1d51e);
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x1d51e) = 0;
  *(undefined4 *)((int)param_1 + 0x1d522) = 0;
  *(undefined4 *)((int)param_1 + 0x1d526) = 0;
  param_1[0x7542] = &PTR_LAB_007f7164;
  iVar6 = param_1[0x7543];
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  param_1[0x7543] = 0;
  param_1[0x7544] = 0;
  param_1[0x7545] = 0;
  *(undefined ***)((int)param_1 + 0x1d4f6) = &PTR_LAB_007e4a74;
  iVar6 = *(int *)((int)param_1 + 0x1d4fa);
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 10);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x1d4fa) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4fe) = 0;
  *(undefined4 *)((int)param_1 + 0x1d502) = 0;
  param_1[0x7539] = &PTR_LAB_007e4a74;
  iVar6 = param_1[0x753a];
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 10);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  param_1[0x753a] = 0;
  param_1[0x753b] = 0;
  param_1[0x753c] = 0;
  *(undefined ***)((int)param_1 + 0x1d4d2) = &PTR_LAB_007e3b70;
  iVar6 = *(int *)((int)param_1 + 0x1d4d6);
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x1d4d6) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4da) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4de) = 0;
  param_1[1] = &PTR_LAB_007ef1f8;
  iVar6 = param_1[2];
  while (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar4;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}


