// FUN_00585e50 @ 585e50 size=216

undefined4 __thiscall FUN_00585e50(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    return 0;
  }
  cVar2 = FUN_0044a690(*(undefined4 *)(param_4 + 6));
  if ((cVar2 != '\0') && (((param_2 == 0x15 || (param_2 == 0x12)) || (param_2 == 0x16)))) {
    return 0;
  }
  iVar1 = param_2;
  if (param_2 < DAT_00bd1bd4) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
  }
  FUN_0044cae0(param_2,*(undefined4 *)(param_4 + 6));
  if ((((&DAT_00dc0fd4)[*(int *)(*(int *)(param_1 + 0x3b2c) + 6)] == 0) && (param_2 != 0x15)) &&
     ((param_2 != 0x11 && ((param_2 != 0x12 && (param_2 != 0x16)))))) {
    uVar3 = __ftol();
    return uVar3;
  }
  uVar3 = __ftol();
  return uVar3;
}


