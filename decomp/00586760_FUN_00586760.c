// FUN_00586760 @ 586760 size=46

void __fastcall FUN_00586760(char *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  param_1[0x3b38] = '\0';
  piVar1 = &DAT_0089cad8;
  pcVar2 = param_1;
  do {
    pcVar2 = pcVar2 + 0x2c;
    if ((*piVar1 != 0) && (*pcVar2 != '\0')) {
      param_1[0x3b38] = '\x01';
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x89d038);
  return;
}


