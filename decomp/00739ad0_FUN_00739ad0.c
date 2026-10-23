// FUN_00739ad0 @ 739ad0 size=557

/* WARNING: Removing unreachable block (ram,0x00739c5c) */
/* WARNING: Removing unreachable block (ram,0x00739bc8) */
/* WARNING: Removing unreachable block (ram,0x00739b3f) */
/* WARNING: Removing unreachable block (ram,0x00739b87) */
/* WARNING: Removing unreachable block (ram,0x00739c12) */
/* WARNING: Removing unreachable block (ram,0x00739ca6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_00739ad0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007df029;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xe);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 2;
    puVar4[1] = puVar3;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  puVar3[2] = puVar4;
  puVar3 = operator_new(0xe);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 3;
    puVar3[1] = puVar4;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  puVar4[2] = puVar3;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 1;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00473a90(6,puVar3,0);
  }
  local_4._0_1_ = 0;
  puVar3[2] = iVar6;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 2;
  if (pvVar5 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00473a90(7,iVar6,0);
  }
  local_4._0_1_ = 0;
  *(int *)(iVar6 + 8) = iVar7;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 3;
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00473a90(0xb,iVar7,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)(iVar7 + 8) = uVar8;
  FUN_00459f50(0x31);
  cVar2 = FUN_00430a90(*(undefined4 *)(param_2 + 6));
  cVar1 = *(char *)(param_1 + 0x12);
  local_4 = 0xffffffff;
  FUN_004309c0();
  ExceptionList = local_c;
  return cVar1 == cVar2;
}


