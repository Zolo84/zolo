// FUN_007458e0 @ 7458e0 size=149

int FUN_007458e0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_20 [32];
  
  iVar2 = FUN_007a630a(local_20,&DAT_008390a0,param_2);
  if (iVar2 < 1) {
    FUN_0074bc80(s_sprintf_error_008746c8,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008746d8,0x1e7);
    return -1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00741dd0(local_20,~uVar3);
  uVar4 = 0xffffffff;
  pcVar5 = local_20;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if ((uVar3 == ~uVar4) && (iVar2 = FUN_00741dd0(param_1,param_2), iVar2 == param_2)) {
    return iVar2;
  }
  return -1;
}


