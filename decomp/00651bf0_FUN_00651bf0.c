// FUN_00651bf0 @ 651bf0 size=147

void __fastcall FUN_00651bf0(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2d6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_004442a0();
  if (cVar1 != '\0') {
    pvVar2 = operator_new(0xc2);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      iVar3 = FUN_00498d60();
      FUN_00449290(iVar3 + 0x12);
      FUN_006458a0(param_1);
    }
    local_4 = 0xffffffff;
  }
  FUN_0047e350();
  ExceptionList = local_c;
  return;
}


