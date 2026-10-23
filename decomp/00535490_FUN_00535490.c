// FUN_00535490 @ 535490 size=362

undefined4 __fastcall FUN_00535490(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_204 [129];
  
  piVar1 = (int *)FUN_00534391();
  piVar4 = local_204;
  for (iVar2 = 0x81; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  if (local_204[0] == 4) {
    return 0;
  }
  if (local_204[0] == 0x531) {
    return 0xffffffff;
  }
  iVar2 = FUN_005343dc();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  piVar4 = (int *)(*param_1 + 0xc);
  piVar1 = param_1;
  for (iVar2 = 0x81; piVar1 = piVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *piVar4;
    piVar4 = piVar4 + 1;
  }
  iVar2 = FUN_005343dc();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0xc) != 1) {
    FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                 s_Missing___in_statement__00850c90,param_1 + 2,param_1 + 0x83,param_1 + 0x104,
                 *(int *)(iVar2 + 0x212) + 1,iVar2 + 0x216);
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a50(&DAT_00bce1e8);
    }
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
    FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
    if (DAT_00dc4b5e == '\0') {
      FUN_007a64d3(0);
    }
    return 0xfffffffe;
  }
  piVar1 = (int *)(iVar2 + 0xc);
  piVar4 = param_1 + 0x82;
  for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = FUN_005343dc();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  piVar1 = (int *)(*param_1 + 0xc);
  piVar4 = param_1 + 0x103;
  for (iVar2 = 0x81; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  return 1;
}


