// FUN_0045d220 @ 45d220 size=806

void __thiscall FUN_0045d220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbf81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_2) {
  case 0:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xc);
    local_4 = 0;
    if (pvVar4 != (void *)0x0) {
      FUN_0045f730();
      FUN_0045f730();
      FUN_0045f730(&DAT_0088f28c);
      FUN_00464b70(0xcf,&DAT_0088f2a4);
    }
    local_4 = 0xffffffff;
    FUN_00565bf0();
    break;
  case 1:
    ExceptionList = &local_c;
    iVar2 = FUN_00586940();
    if (iVar2 == 0) {
      FUN_00460480();
      ExceptionList = local_c;
      return;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    FUN_00465c40();
    FUN_00447250();
    FUN_00449290();
    FUN_004607d0();
    ExceptionList = local_c;
    return;
  case 3:
    ExceptionList = &local_c;
    FUN_00465c30();
    FUN_00465c40();
    FUN_00447250();
    FUN_00460680();
    ExceptionList = local_c;
    return;
  case 4:
    ExceptionList = &local_c;
    FUN_00465c40();
    FUN_00447250();
    FUN_00449290();
    FUN_004608f0();
    ExceptionList = local_c;
    return;
  case 5:
    ExceptionList = &local_c;
    FUN_00465c40();
    FUN_00447250();
    FUN_00449290();
    FUN_00460a10();
    ExceptionList = local_c;
    return;
  case 8:
    ExceptionList = &local_c;
    puVar3 = operator_new(0xc);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      local_4 = 0xffffffff;
      FUN_00565bf0();
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 6);
      FUN_00465510();
      *puVar3 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar3[1] + 0xe) = param_4;
      local_4 = 0xffffffff;
      *(undefined4 *)(puVar3[1] + 0x12) = uVar1;
      *(undefined1 *)(puVar3[1] + 0x16) = 1;
      *(undefined1 *)(puVar3[1] + 0x17) = 0;
      *(undefined1 *)(puVar3[1] + 0x18) = 0;
      FUN_00565bf0();
    }
    break;
  case 0x13:
    ExceptionList = &local_c;
    FUN_00428eb0();
  default:
    pvVar4 = operator_new(0xc);
    local_4 = 2;
    if (pvVar4 != (void *)0x0) {
      FUN_00458280();
      FUN_00464820();
    }
    local_4 = 0xffffffff;
    FUN_00565cc0();
  }
  ExceptionList = local_c;
  return;
}


