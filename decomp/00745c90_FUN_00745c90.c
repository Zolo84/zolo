// FUN_00745c90 @ 745c90 size=549

undefined4 __thiscall
FUN_00745c90(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  size_t *psVar4;
  size_t *psVar5;
  uint uVar6;
  char *pcVar7;
  int in_stack_00000020;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df468;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  uVar3 = FUN_0074a620(local_1c,&DAT_00874708,param_1 + 0x22e);
  local_4._0_1_ = 2;
  uVar3 = FUN_0074a770(local_2c,uVar3,&DAT_00874704);
  local_4._0_1_ = 3;
  uVar3 = FUN_0074a8a0(local_3c,uVar3,param_2);
  local_4._0_1_ = 4;
  FUN_00674710(uVar3,0,DAT_007f33d8);
  local_4._0_1_ = 3;
  FUN_00674910(1);
  local_4._0_1_ = 2;
  FUN_00674910(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_00796cd8((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  puVar1 = (undefined4 *)((int)param_2 + 4);
  param_2 = (char *)&DAT_007f0c98;
  if ((char *)*puVar1 != (char *)0x0) {
    param_2 = (char *)*puVar1;
  }
  psVar5 = (size_t *)(param_1 + 0x12);
  cVar2 = FUN_00745ec0(&DAT_00d4c210);
  if (cVar2 == '\0') {
    cVar2 = FUN_00745ec0(&DAT_00d4c210);
    if (cVar2 == '\0') {
      uVar6 = 0xffffffff;
      pcVar7 = param_2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      psVar4 = _malloc(~uVar6 + 0x1c);
      *psVar4 = ~uVar6 + 0x1c;
      if (param_1 == -0xe) {
        psVar5 = &DAT_00d4c210;
      }
      psVar4[1] = *psVar5;
      psVar4[2] = psVar5[1];
      psVar4[3] = *(size_t *)(param_1 + 0x12);
      uVar6 = 0xffffffff;
      psVar4[4] = *(size_t *)(param_1 + 0x16);
      psVar4[5] = 0x16;
      pcVar7 = param_2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_00745a60(~uVar6);
      uVar6 = ~uVar6;
      while (uVar6 != 0) {
        *(char *)((int)psVar4 + uVar6 + 0x1b) = param_2[uVar6 - 1];
        uVar6 = uVar6 - 1;
      }
      FUN_00745a30();
      FUN_007579c0(psVar4);
      FUN_007a77fa(psVar4);
    }
  }
  if (param_5 != 0) {
    cVar2 = *(char *)(param_5 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_00796cd8(param_5 + -1);
    }
    else {
      *(char *)(param_5 + -1) = cVar2 + -1;
    }
  }
  if (in_stack_00000020 != 0) {
    cVar2 = *(char *)(in_stack_00000020 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(in_stack_00000020 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return 0;
    }
    FUN_00796cd8(in_stack_00000020 + -1);
  }
  ExceptionList = local_c;
  return 0;
}


