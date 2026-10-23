// FUN_00740c70 @ 740c70 size=252

void FUN_00740c70(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4,int param_5)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df08b;
  local_c = ExceptionList;
  if (param_5 == 0) {
    *param_4 = 1;
  }
  else {
    if (param_5 == 1) {
      ExceptionList = &local_c;
      iVar3 = FUN_007a6615(param_2,&DAT_0082eeb4);
      if (iVar3 != 0) {
        iVar4 = FUN_007a81b4(iVar3);
        *param_4 = (uint)(iVar4 == param_3);
        FUN_007a6429(iVar3);
        ExceptionList = local_c;
        return;
      }
      *param_4 = 0;
      ExceptionList = local_c;
      return;
    }
    if (param_5 == 2) {
      ExceptionList = &local_c;
      pvVar2 = operator_new(0x13e);
      local_4 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_00426f50(param_2);
      }
      local_4 = 0xffffffff;
      cVar1 = FUN_00427570();
      *param_4 = (uint)(cVar1 == '\0');
      ExceptionList = local_c;
      return;
    }
  }
  return;
}


