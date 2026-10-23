// FUN_007a0501 @ 7a0501 size=70

char * __fastcall FUN_007a0501(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_007aaeff();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_00674d80(pcVar1,sVar2);
    FUN_007a77fa(pcVar1);
  }
  if (*(int *)(param_1 + 8) == 0) {
    pcVar1 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"
    ;
  }
  else {
    pcVar1 = *(char **)(param_1 + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)&DAT_007f0c98;
    }
  }
  return pcVar1;
}


