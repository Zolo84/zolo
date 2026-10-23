// FUN_007460d0 @ 7460d0 size=983

int FUN_007460d0(int param_1,char *param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *in_stack_00000024;
  byte local_74 [4];
  byte local_70 [4];
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007df4c7;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00741450(0,1,10000);
  local_4._0_1_ = 3;
  iVar2 = FUN_007418a0(param_3,param_2);
  if (iVar2 == -1) {
    local_58[0] = (undefined1)param_1;
    FUN_00674910(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_0088ebf8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00674d80(&DAT_0088ebf8,~uVar7 - 1);
    local_4._0_1_ = 4;
    FUN_00746560(local_58,0);
    *(undefined4 *)(param_1 + 0x14) = 1;
    local_4._0_1_ = 3;
    FUN_00674910(1);
    FUN_00741520();
    local_4._0_1_ = 1;
    FUN_00674910(1);
  }
  else {
    FUN_00745a60(1);
    param_3 = FUN_00741dd0(&param_2,4);
    puVar3 = param_5;
    if (param_5 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    local_6c = FUN_007464b0(puVar3);
    puVar3 = in_stack_00000024;
    if (in_stack_00000024 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    iVar2 = FUN_007464b0(puVar3);
    FUN_00745a60(0);
    local_68[0] = (undefined1)param_1;
    FUN_00674910(0);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00745a60(0);
    iVar4 = FUN_00741f50(local_70,4);
    iVar5 = FUN_00745980(&param_2,100);
    if (iVar5 != -1) {
      uVar7 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00674d80(param_2,~uVar7 - 1);
      FUN_00796cd8(param_2);
    }
    iVar6 = FUN_00741f50(local_74,4);
    if (((((param_3 != -1) && (local_6c != -1)) && (iVar2 != -1)) &&
        ((iVar4 != -1 && (iVar5 != -1)))) && (iVar6 != -1)) {
      iVar2 = 0;
      iVar4 = 0;
      uVar7 = 0;
      do {
        cVar1 = (char)uVar7;
        uVar7 = uVar7 + 8;
        iVar2 = iVar2 + ((uint)local_74[iVar4] << (0x18U - cVar1 & 0x1f));
        iVar4 = iVar4 + 1;
      } while (uVar7 < 0x20);
      iVar5 = 0;
      iVar4 = 0;
      uVar7 = 0;
      do {
        cVar1 = (char)uVar7;
        uVar7 = uVar7 + 8;
        iVar5 = iVar5 + ((uint)local_70[iVar4] << (0x18U - cVar1 & 0x1f));
        iVar4 = iVar4 + 1;
      } while (uVar7 < 0x20);
      FUN_00673b50(local_68);
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar5;
      local_4._0_1_ = 3;
      FUN_00674910(1);
      FUN_00741520();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00674910(1);
      if (in_stack_00000024 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return param_1;
      }
      cVar1 = *(char *)((int)in_stack_00000024 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)in_stack_00000024 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return param_1;
      }
      FUN_00796cd8((int)in_stack_00000024 + -1);
      ExceptionList = local_c;
      return param_1;
    }
    local_58[0] = (undefined1)param_1;
    FUN_00674910(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_0088ebf8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00674d80(&DAT_0088ebf8,~uVar7 - 1);
    local_4._0_1_ = 6;
    FUN_00746560(local_58,0);
    *(undefined4 *)(param_1 + 0x14) = 3;
    local_4._0_1_ = 5;
    FUN_00674910(1);
    local_4._0_1_ = 3;
    FUN_00674910(1);
    FUN_00741520();
    local_4._0_1_ = 1;
    FUN_00674910(1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00674910(1);
  ExceptionList = local_c;
  return param_1;
}


