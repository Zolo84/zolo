// FUN_007455d0 @ 7455d0 size=779

undefined4
FUN_007455d0(char *param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_58 [4];
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df408;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00741450(0,1,10000);
  local_4._0_1_ = 1;
  iVar2 = FUN_007418a0(param_2,param_1);
  if (iVar2 == -1) {
    FUN_00741520();
    local_4 = 0xffffffff;
    FUN_00674910(1);
  }
  else {
    FUN_00745a60(3);
    local_64 = FUN_00741dd0(&param_1,4);
    pcVar6 = param_4;
    if (param_4 == (char *)0x0) {
      pcVar6 = (char *)&DAT_007f0c98;
    }
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_007458e0(pcVar6,~uVar4);
    param_2 = -1;
    if (iVar2 != -1) {
      param_2 = iVar2;
    }
    FUN_00745a60(0);
    local_58[0] = param_1._0_1_;
    FUN_00674910(0);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00745a60(0);
    local_60 = FUN_00741f50(local_6c,4);
    FUN_00745a60(0);
    iVar2 = FUN_00741f50(local_70,4);
    local_68 = iVar2;
    iVar3 = FUN_00745a30();
    if (iVar2 != -1) {
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        iVar2 = FUN_00745980(&param_1,100);
        pcVar6 = param_1;
        if (iVar2 == -1) {
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00674910(1);
          FUN_00741520();
          local_4 = 0xffffffff;
          FUN_00674910(1);
          ExceptionList = local_c;
          return 1;
        }
        uVar4 = 0xffffffff;
        pcVar7 = param_1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar1 = FUN_00674e40(uVar4,1);
        if (cVar1 != '\0') {
          pcVar7 = local_54;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_00674e20(uVar4);
        }
        FUN_00796cd8(param_1);
        FUN_00749da0(*(undefined4 *)(param_7 + 8),1,local_58);
        iVar2 = local_68;
      }
    }
    if ((((local_64 != -1) && (param_2 != -1)) && (local_60 != -1)) && (iVar2 != -1)) {
      if (local_54 != (char *)0x0) {
        cVar1 = local_54[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_00796cd8(local_54 + -1);
        }
        else {
          local_54[-1] = cVar1 + -1;
        }
      }
      local_54 = (char *)0x0;
      local_50 = 0;
      local_4c = 0;
      FUN_00741520();
      if (param_4 != (char *)0x0) {
        cVar1 = param_4[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          param_4[-1] = cVar1 + -1;
          ExceptionList = local_c;
          return 0;
        }
        FUN_00796cd8(param_4 + -1);
      }
      ExceptionList = local_c;
      return 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00674910(1);
    FUN_00741520();
    if (param_4 != (char *)0x0) {
      cVar1 = param_4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_00796cd8(param_4 + -1);
      }
      else {
        param_4[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}


