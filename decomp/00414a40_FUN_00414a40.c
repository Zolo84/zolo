// FUN_00414a40 @ 414a40 size=57

undefined4 __thiscall FUN_00414a40(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x52) == *(int *)(param_1 + 0x4e) + -1) {
    return 1;
  }
  cVar1 = FUN_0042e900();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_00415a60(param_2);
  return uVar2;
}


