// FUN_007464b0 @ 7464b0 size=169

uint FUN_007464b0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_20 [32];
  
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = FUN_007a630a(local_20,&DAT_008390a0,uVar3);
  if (iVar2 < 1) {
    FUN_0074bc80(s_sprintf_error_008746c8,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008746d8,0x1e7);
    return 0xffffffff;
  }
  uVar4 = 0xffffffff;
  pcVar6 = local_20;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_00741dd0(local_20,~uVar4);
  uVar5 = 0xffffffff;
  pcVar6 = local_20;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (((uVar4 == ~uVar5) && (uVar4 = FUN_00741dd0(param_1,uVar3), uVar4 == uVar3)) &&
     (uVar4 != 0xffffffff)) {
    return uVar4;
  }
  return 0xffffffff;
}


