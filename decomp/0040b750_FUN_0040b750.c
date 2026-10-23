// FUN_0040b750 @ 40b750 size=270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0040b750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00416730();
  *(undefined1 *)(param_1 + 0x3d) = param_6;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *param_1 = &PTR_FUN_007e338c;
  param_1[2] = &PTR_LAB_007e3388;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3384;
  FUN_0040b940(param_2,param_3,param_4,param_5,param_7);
  iVar3 = DAT_0088eb18;
  if (DAT_0088eb1c == '\0') {
    iVar2 = 0;
    do {
      (&DAT_0088eb1c)[iVar2] = *(undefined1 *)(iVar3 + 0x1107);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  param_1[0x3c] = 4;
  FUN_00415a20(0,0);
  iVar3 = __ftol();
  if (0x18 < iVar3) {
    iVar3 = 0x18;
  }
  *(int *)((int)param_1 + 0x4e) = iVar3;
  uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0x62) + 4);
  *(undefined4 *)((int)param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x56) = uVar1;
  ExceptionList = local_c;
  return param_1;
}


