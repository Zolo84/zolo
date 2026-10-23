// FUN_006eab80 @ 6eab80 size=424

void FUN_006eab80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da27b;
  local_c = ExceptionList;
  iVar3 = param_1 * 0x1a;
  if (*(int *)(&DAT_00d36354 + iVar3) == 3) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x96);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_006db130(param_3);
    }
  }
  else {
    ExceptionList = &local_c;
    cVar1 = FUN_006ec210();
    if (cVar1 != '\0') {
      if ((&DAT_00d3635a)[iVar3] == '\0') {
        FUN_007a630a(&DAT_00d3c7d4);
      }
      else {
        (&DAT_00d3635a)[iVar3] = 0;
        FUN_006ec210();
        FUN_007a630a(&DAT_00d3c7d4);
        FUN_00446d10(&DAT_0088f28c);
        FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_6);
        (&DAT_00d3635a)[iVar3] = 1;
        FUN_006ec210();
        FUN_007a630a(&DAT_00d3c7d4,&DAT_00d3bfd4);
      }
      FUN_00446d10(&DAT_0088f28c);
      FUN_006ebb00(param_1,param_2,&DAT_00d3c7d4,param_6);
    }
  }
  ExceptionList = local_c;
  return;
}


