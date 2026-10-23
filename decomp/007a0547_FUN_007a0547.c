// FUN_007a0547 @ 7a0547 size=71

char * __fastcall FUN_007a0547(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_007aaf8e();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_00674d80(pcVar1,sVar2);
    FUN_007a77fa(pcVar1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar1 = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x14);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)&DAT_007f0c98;
    }
  }
  return pcVar1;
}


