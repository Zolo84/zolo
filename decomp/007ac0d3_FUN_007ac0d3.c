// FUN_007ac0d3 @ 7ac0d3 size=90

void FUN_007ac0d3(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_007a76c0((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_0087cfdc < 2) {
        uVar4 = (byte)PTR_DAT_0087cdd0[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_007a81f0((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_0087cfe0;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


