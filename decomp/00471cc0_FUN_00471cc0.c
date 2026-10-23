// FUN_00471cc0 @ 471cc0 size=1235

/* WARNING: Removing unreachable block (ram,0x00472066) */
/* WARNING: Removing unreachable block (ram,0x00472078) */
/* WARNING: Removing unreachable block (ram,0x0047207d) */
/* WARNING: Removing unreachable block (ram,0x00472090) */
/* WARNING: Removing unreachable block (ram,0x004720ad) */
/* WARNING: Removing unreachable block (ram,0x004720af) */
/* WARNING: Removing unreachable block (ram,0x004720c0) */
/* WARNING: Removing unreachable block (ram,0x004720cc) */
/* WARNING: Removing unreachable block (ram,0x004720d3) */
/* WARNING: Removing unreachable block (ram,0x004720d8) */
/* WARNING: Removing unreachable block (ram,0x004720eb) */
/* WARNING: Removing unreachable block (ram,0x004720ef) */
/* WARNING: Removing unreachable block (ram,0x0047211b) */
/* WARNING: Removing unreachable block (ram,0x0047212e) */
/* WARNING: Removing unreachable block (ram,0x00472130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00471cc0(int param_1)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *local_124;
  int *local_10c;
  int *local_108;
  int local_104;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcca2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004734e0();
  local_4 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
  if (iVar8 == 0) {
    iVar8 = 0;
    local_124 = &DAT_0089cad8;
    do {
      piVar4 = local_10c;
      piVar6 = local_108;
      if (((*(int *)(param_1 + 6) != iVar8) && (iVar7 = *local_124, iVar7 != 0)) &&
         ((((cVar2 = FUN_0044b300(), cVar2 != '\0' &&
            (*(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30) == 0)) ||
           ((iVar5 = *(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30), iVar5 != 0 &&
            (iVar5 == *(int *)(param_1 + 6))))) ||
          ((iVar5 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30), iVar5 != 0 &&
           (iVar5 == *(int *)(iVar7 + 6))))))) {
        pvVar3 = operator_new(0xe);
        local_4._0_1_ = 2;
        if (pvVar3 == (void *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_00473a90();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar7 = local_104 + 1;
        bVar9 = local_104 != 0;
        piVar4 = piVar6;
        local_104 = iVar7;
        if (bVar9) {
          local_108[2] = (int)piVar6;
          piVar4 = local_10c;
        }
      }
      local_108 = piVar6;
      local_10c = piVar4;
      iVar8 = iVar8 + 1;
      local_124 = local_124 + 1;
    } while ((int)local_124 < 0x89d038);
  }
  else if ((&DAT_0089cad8)[iVar8] != 0) {
    pvVar3 = operator_new(0xe);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00473a90();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_104 == 0) goto LAB_00471d74;
    local_108[2] = (int)piVar4;
    local_104 = local_104 + 1;
  }
  piVar4 = local_10c;
  if (local_104 < 1) {
    local_4 = 0xffffffff;
    FUN_004309c0();
    ExceptionList = local_c;
    return;
  }
LAB_00471d74:
  local_10c = piVar4;
  iVar8 = *(int *)(param_1 + 0x120);
  FUN_00442b90();
  piVar4 = local_10c;
  while (piVar4 != (int *)0x0) {
    piVar6 = (int *)piVar4[2];
    iVar7 = (&DAT_0089cad8)[*piVar4];
    cVar2 = (**(code **)(*(int *)(iVar8 + 0x204) + 0x24))();
    piVar4 = piVar6;
    if ((((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x120) + 0x204) + 0x24))(), cVar2 == '\0'))
        && (cVar2 = FUN_004a09c0(), cVar2 != '\0')) &&
       (fVar1 = *(float *)(param_1 + 0x39c8), iVar5 = FUN_00585e50(),
       (float)iVar5 <= fVar1 - _DAT_007e681c)) {
      if ((0 < *(int *)(iVar7 + 0x117e4)) || (bVar9 = false, 0 < *(int *)(iVar7 + 0x117e8))) {
        bVar9 = true;
      }
      iVar7 = *(int *)(param_1 + 0x360c);
      local_4._0_1_ = 3;
      while (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 10);
        iVar5 = FUN_00428460();
        if ((((iVar5 != 0) && (iVar5 != 8)) &&
            ((bVar9 || ((*(int *)(iVar5 + 0x76) != 7 && (*(int *)(iVar5 + 0x76) != 2)))))) &&
           (cVar2 = (**(code **)(*(int *)(iVar8 + 0x216) + 0x24))(), cVar2 == '\0')) {
          piVar6 = (int *)FUN_004582d0();
          cVar2 = (**(code **)(*piVar6 + 0x24))();
          if ((cVar2 == '\0') && ((iVar5 = FUN_0075a2b0(), iVar5 == 0 || (iVar5 == 6)))) {
            FUN_004739f0();
          }
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
    }
  }
  while (local_10c != (int *)0x0) {
    local_10c = (int *)local_10c[2];
    FUN_00796cd8();
  }
  ExceptionList = local_c;
  return;
}


