// FUN_004418c0 @ 4418c0 size=171

void __fastcall FUN_004418c0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb19b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0089c099 & 1) == 0) {
    DAT_0089c099 = DAT_0089c099 | 1;
    ExceptionList = &local_c;
    DAT_0089c0ac = FUN_005841b0(param_1);
  }
  iVar1 = DAT_0089c0ac;
  piVar2 = operator_new(DAT_0089c0ac * 8 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    DAT_0089c0b0 = (int *)0x0;
    ExceptionList = local_c;
    return;
  }
  *piVar2 = iVar1;
  FUN_007a8800(piVar2 + 1,8,iVar1,&LAB_00442950,&LAB_00442960);
  DAT_0089c0b0 = piVar2 + 1;
  ExceptionList = local_c;
  return;
}


