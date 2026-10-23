// FUN_00404aa0 @ 404aa0 size=127

void __thiscall FUN_00404aa0(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int unaff_ESI;
  int iVar4;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 4))(param_2,param_3);
  if (*pcVar1 == '\x01') {
    cVar3 = (char)param_2;
    *pcVar1 = cVar3;
    if (0 < param_3) {
      FUN_00404aa0(param_2,param_3 + -1,param_2);
    }
    pcVar2 = pcVar1;
    iVar4 = param_2;
    if (param_3 < *(int *)(unaff_ESI + 8) + -1) {
      FUN_00404aa0(param_2,param_3 + 1,param_2);
    }
    do {
      *pcVar2 = cVar3;
      iVar4 = iVar4 + -1;
      if (pcVar2[-1] != '\x01') break;
      pcVar2 = pcVar2 + -1;
    } while (0 < iVar4);
    do {
      *pcVar1 = cVar3;
      pcVar2 = pcVar1 + 1;
      pcVar1 = pcVar1 + 1;
      if (*pcVar2 != '\x01') {
        return;
      }
    } while (param_2 < *(int *)(unaff_ESI + 4) + -1);
  }
  return;
}


