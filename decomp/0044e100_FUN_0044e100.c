// FUN_0044e100 @ 44e100 size=166

char * __thiscall FUN_0044e100(int param_1,undefined4 param_2,short param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_100 [256];
  
  FUN_007a630a(local_100,s_BRIG_MODEL__s__d__d_0083c794,param_1 + 0x71a,param_2,(int)param_3);
  pcVar2 = (char *)FUN_0042b6c9(local_100);
  iVar3 = FUN_007a8730(pcVar2,s_UNKNOWN_STRING_WANTED_0083c758);
  if (iVar3 != 0) {
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (1 < ~uVar4 - 1) {
      return pcVar2;
    }
  }
  FUN_007a630a(local_100,s_BRIG_MODEL__d__d_0083c780,param_2,(int)param_3);
  pcVar2 = (char *)FUN_0042b6c9(local_100);
  return pcVar2;
}


