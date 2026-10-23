// FUN_00657a60 @ 657a60 size=230

void __thiscall FUN_00657a60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2f2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x13dc6) = 0;
  *(undefined1 *)(param_1 + 0x1adc6) = 0;
  switch(param_2) {
  case 0:
    pcVar5 = s_CONFIRMDISBAND_00866c48;
    break;
  case 1:
    pcVar5 = s_CONFIRMLOADPARA_00866c38;
    break;
  case 2:
    pcVar5 = s_TO_CONVOY_CONFIRM_00866c24;
    break;
  case 3:
    iVar1 = FUN_00428ee0(param_1 + 0x21e9c);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    if ((int *)(iVar1 + -8) == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    uVar4 = (**(code **)(*(int *)(iVar1 + -8) + 0xc))();
    uVar2 = FUN_0042b6c9(s_CONFIRM_CANCEL_PROD_00866c10);
    FUN_007a630a(&DAT_00d10b14,uVar2,uVar4);
  default:
    goto switchD_00657a90_default;
  }
  uVar4 = FUN_0042b6c9(pcVar5);
  FUN_007a630a(&DAT_00d10b14,uVar4);
switchD_00657a90_default:
  pvVar3 = operator_new(0x20);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00642820(&DAT_00d10b14,param_2,param_1);
  }
  *(undefined4 *)(param_1 + 0x13d6a) = uVar4;
  ExceptionList = local_c;
  return;
}


