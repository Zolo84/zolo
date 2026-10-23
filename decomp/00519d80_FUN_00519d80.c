// FUN_00519d80 @ 519d80 size=942

void __fastcall FUN_00519d80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c1ebe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e8a0c;
  param_1[2] = &PTR_LAB_007e8a08;
  param_1[5] = &PTR_LAB_007e89f4;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e89ec;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e89bc;
  local_4 = 7;
  if ((param_1[0x92] != 0) && ((&DAT_0089cad8)[param_1[0x93]] != 0)) {
    (**(code **)(*(int *)(param_1[0x92] + 0x4504) + 0x18))(param_1);
  }
  if (*(undefined4 **)((int)param_1 + 0x152) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x152))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x172) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x172))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x162) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x162))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x16a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x166) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x166))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x16e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15e))(1);
  }
  DAT_00adf13c = DAT_00adf13c + -1;
  puVar7 = (undefined4 *)param_1[0x7f];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar7[2];
    piVar5 = (int *)*puVar7;
    (**(code **)(*piVar5 + 0x198))(param_1);
    (**(code **)(param_1[0x7e] + 0x18))(piVar5);
    puVar7 = puVar2;
  }
  FUN_0040d210();
  FUN_0040d170();
  if ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7c])(1);
  }
  FUN_0050a020(0);
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  FUN_00405ad0(s_Unit___d_is_deleted_0084aed4,*(undefined4 *)((int)param_1 + 0x1a));
  piVar5 = *(int **)((int)param_1 + 0x26);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    *(undefined4 *)(*piVar5 + 0x6c) = 0;
    piVar5 = piVar3;
  }
  iStack_14 = 0;
  if (0 < DAT_00877690) {
    iStack_18 = 0;
    do {
      iVar1 = DAT_00ab27b4 + iStack_18;
      (**(code **)(**(int **)(DAT_00ab27b4 + 0x1c2 + iStack_18) + 0x18))(param_1);
      iVar1 = *(int *)(iVar1 + 0x1aa);
      if (iVar1 != 0) {
        piVar5 = *(int **)(iVar1 + 4);
        while (piVar5 != (int *)0x0) {
          piVar3 = (int *)piVar5[2];
          iVar1 = *piVar5;
          piVar5 = (int *)(**(code **)(**(int **)(iVar1 + 0x80) + 0xc))();
          (**(code **)(*piVar5 + 0x18))(param_1);
          piVar5 = (int *)(**(code **)(**(int **)(iVar1 + 0x84) + 0xc))();
          (**(code **)(*piVar5 + 0x18))(param_1);
          piVar5 = piVar3;
        }
      }
      iStack_14 = iStack_14 + 1;
      iStack_18 = iStack_18 + 0x4b2;
    } while (iStack_14 < DAT_00877690);
  }
  if (*(undefined4 **)((int)param_1 + 0x156) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x156))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x15a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15a))(1);
  }
  param_1[3] = 0;
  uVar6 = -(uint)(param_1 != (undefined4 *)0x0) & (int)param_1 + 0x22U;
  piVar5 = *(int **)(uVar6 + 4);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar3;
  }
  *(undefined4 *)(uVar6 + 4) = 0;
  *(undefined4 *)(uVar6 + 8) = 0;
  *(undefined4 *)(uVar6 + 0xc) = 0;
  *(undefined ***)((int)param_1 + 0x22e) = &PTR_LAB_007e378c;
  iVar1 = *(int *)((int)param_1 + 0x232);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x232) = 0;
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  *(undefined4 *)((int)param_1 + 0x23a) = 0;
  param_1[0x7e] = &PTR_LAB_007e8ad4;
  iVar1 = param_1[0x7f];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00509e30();
  param_1[0x47] = &PTR_LAB_007e8b04;
  iVar1 = param_1[0x48];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  param_1[0x48] = 0;
  puVar7 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (int)param_1 + 0x22U);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *puVar7 = &PTR_LAB_007e4b94;
  iVar1 = puVar7[1];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_00428ca0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00432dc0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


