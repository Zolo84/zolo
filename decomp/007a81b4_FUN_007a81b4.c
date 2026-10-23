// FUN_007a81b4 @ 7a81b4 size=49

uint FUN_007a81b4(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_007a6720(param_1);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_007ae4e8(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  FUN_007a6772(param_1);
  return uVar2;
}


