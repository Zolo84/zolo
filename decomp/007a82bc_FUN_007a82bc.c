// FUN_007a82bc @ 7a82bc size=59

uint FUN_007a82bc(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_007a6720(param_2);
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_007ad393(param_1,param_2);
  }
  else {
    uVar2 = param_1 & 0xff;
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
  }
  FUN_007a6772(param_2);
  return uVar2;
}


