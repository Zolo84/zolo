// FUN_0057d7c0 @ 57d7c0 size=286

void __thiscall FUN_0057d7c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char local_1d1;
  void *local_1d0;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ba9;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x37b) != '\0') {
    ExceptionList = &local_c;
    FUN_007a630a(local_8c,s__s_eug_008572a0,param_2);
    FUN_00426f50(local_8c);
    local_4 = 0;
    FUN_00427480(0);
    iVar1 = FUN_004274e0();
    FUN_004273c0(0);
    iVar3 = iVar1;
    iVar4 = param_3;
    if (0 < iVar1) {
      do {
        FUN_004271a0(&local_1d1,1);
        iVar4 = iVar4 + local_1d1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_1d0 = operator_new(0xc);
    local_4._0_1_ = 1;
    if (local_1d0 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00566590(param_3,param_2,iVar1,iVar4);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00565c70(uVar2);
    local_4 = 0xffffffff;
    FUN_00426f80();
  }
  ExceptionList = local_c;
  return;
}


