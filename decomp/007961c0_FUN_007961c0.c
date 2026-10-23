// FUN_007961c0 @ 7961c0 size=203

undefined4 __thiscall FUN_007961c0(int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  piVar1 = (int *)(param_1 + 4);
  if (*piVar1 == 0) {
    local_10 = 0;
  }
  else {
    iVar2 = FUN_007a76c0((int)*param_2);
    iVar3 = FUN_007a76c0((int)*(char *)(*piVar1 + 4));
    if (iVar2 == iVar3) {
      if (param_2[1] == '\0') {
        local_10 = *(undefined4 *)*piVar1;
      }
      else {
        local_10 = FUN_007969f0(*piVar1 + 0xe,param_2 + 1);
      }
    }
    else if (iVar2 - iVar3 < 1) {
      local_10 = FUN_007969f0(*piVar1 + 6,param_2);
    }
    else {
      local_10 = FUN_007969f0(*piVar1 + 10,param_2);
    }
  }
  return local_10;
}


