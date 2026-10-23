// FUN_006a12c0 @ 6a12c0 size=388

int __thiscall FUN_006a12c0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_8 [4];
  
  if ((*(char *)(*(int *)(*(int *)((int)param_1 + 10) + 0x12da) + 0x3b38) != '\0') &&
     (param_3 = param_3 + -2, param_3 < 1)) {
    return 0;
  }
  FUN_00428eb0(&local_10);
  FUN_00446d10(&DAT_0088f28c);
  FUN_00449290(&local_10);
  FUN_00667670();
  FUN_00462100();
  FUN_00428ee0(&local_10);
  piVar2 = *(int **)(param_2 + 0x26);
  local_8[0] = local_10;
  iVar5 = 0;
  local_10 = 0;
  uStack_e = 0;
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      piVar1 = piVar4 + 2;
      if (*(int *)(*piVar4 + 0x134) != 0x1e) {
        iVar5 = iVar5 + 1;
      }
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    local_10 = (undefined2)iVar5;
    uStack_e = (undefined2)((uint)iVar5 >> 0x10);
  }
  iVar5 = __ftol();
  while ((piVar2 != (int *)0x0 && ((0 < iVar5 || (0 < param_3))))) {
    piVar4 = (int *)piVar2[2];
    iVar3 = *piVar2;
    piVar2 = piVar4;
    if ((iVar5 < 1) || (*(int *)(iVar3 + 0x134) == 0x1e)) {
      if ((0 < param_3) && (*(int *)(iVar3 + 0x134) == 0x1e)) {
        FUN_00449290(local_8);
        FUN_00667670();
        FUN_0045e6f0();
        param_3 = param_3 + -1;
      }
    }
    else {
      FUN_00449290(local_8);
      FUN_00667670();
      FUN_0045e6f0();
      iVar5 = iVar5 + -1;
    }
  }
  iVar5 = FUN_00428ee0(local_8);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -0x14;
  }
  (**(code **)(*param_1 + 0x1c8))(iVar5);
  return iVar5;
}


