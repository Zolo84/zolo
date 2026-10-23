// FUN_0061ba00 @ 61ba00 size=1014

void __thiscall FUN_0061ba00(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0d36;
  local_c = ExceptionList;
  switch(param_2) {
  case 0:
    ExceptionList = &local_c;
    cVar2 = (**(code **)(*(int *)param_1[0x24] + 0x450))();
    if (cVar2 != '\0') {
      FUN_00460b30();
    }
    break;
  case 1:
    ExceptionList = &local_c;
    FUN_00460480();
    break;
  case 2:
    ExceptionList = &local_c;
    cVar2 = FUN_004a1de0();
    if (cVar2 != '\0') {
      FUN_00465c40();
      FUN_00447250();
      FUN_00449290();
      FUN_004607d0();
      break;
    }
    pvVar4 = operator_new(0x68);
    local_4 = 0;
    goto joined_r0x0061bcc4;
  case 3:
    ExceptionList = &local_c;
    cVar2 = FUN_004a1fe0();
    if (cVar2 != '\0') {
      FUN_0061b9e0();
      FUN_00465c40();
      FUN_00447250();
      FUN_00460680();
      break;
    }
    pvVar4 = operator_new(0x68);
    local_4 = 1;
joined_r0x0061bcc4:
    if (pvVar4 != (void *)0x0) {
      FUN_0042b6c9();
      FUN_0043da60();
    }
    local_4 = 0xffffffff;
    break;
  default:
    ExceptionList = &local_c;
    goto LAB_0061bdc0;
  case 8:
    ExceptionList = &local_c;
    FUN_0045f970();
    break;
  case 9:
    ExceptionList = &local_c;
    FUN_0045fdb0();
    break;
  case 10:
    ExceptionList = &local_c;
    FUN_0045fca0();
    break;
  case 0xd:
    ExceptionList = &local_c;
    (**(code **)(*(int *)param_1[0x44] + 0x5c))();
    FUN_0045c890();
    break;
  case 0xe:
    ExceptionList = &local_c;
    FUN_0045f750();
    break;
  case 0xf:
    ExceptionList = &local_c;
    FUN_0045d220();
    DAT_008477ac = *(undefined4 *)(param_1[0x24] + 0x117de);
    (**(code **)(*param_1 + 0x74))();
    break;
  case 0x11:
    ExceptionList = &local_c;
    goto LAB_0061bdc0;
  case 0x12:
  case 0x15:
    ExceptionList = &local_c;
    uVar3 = (**(code **)(*(int *)param_1[0x44] + 0x60))();
    FUN_00471500(uVar3);
    uVar3 = FUN_0061b9e0();
    FUN_0045cad0(uVar3);
    break;
  case 0x16:
    ExceptionList = &local_c;
    (**(code **)(*(int *)param_1[0x44] + 0x68))();
    FUN_00447250();
LAB_0061bdc0:
    FUN_0045d220();
    break;
  case 0x18:
    ExceptionList = &local_c;
    (**(code **)(*(int *)param_1[0x44] + 100))();
    FUN_00461390();
    break;
  case 0x1a:
    ExceptionList = &local_c;
    FUN_00461270();
    break;
  case 0x1b:
    pcVar1 = (char *)(param_1[0x32] + 0x11862 + param_1[0x24]);
    ExceptionList = &local_c;
    *pcVar1 = *pcVar1 == '\0';
  }
  if ((&DAT_0089cad8)[param_1[0x32]] == 0) {
    (**(code **)(*param_1 + 0x48))();
  }
  ExceptionList = local_c;
  return;
}


