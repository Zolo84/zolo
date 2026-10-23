// FUN_00412d10 @ 412d10 size=1266

int __thiscall FUN_00412d10(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_220;
  int local_21c;
  char local_218 [256];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  char local_104 [256];
  
  local_118 = 0;
  _memset(local_104,0,0x100);
  _memset(local_218,0,0x100);
  local_110 = 0;
  local_114 = 0;
  local_10c = 0;
  local_108 = CONCAT31(local_108._1_3_,*param_2);
  pcVar2 = param_2;
  do {
    param_2 = pcVar2 + 1;
    if ((char)local_108 == '\0') {
      if (local_218[0] != '\0') {
        FUN_007a7500(local_104,local_218);
        FUN_007a7500(local_104,&DAT_0082f090);
      }
      if (local_104[0] != '\0') {
        local_118 = local_118 + 1;
      }
      return local_118;
    }
    iVar3 = local_114;
    switch((char)local_108) {
    case '\n':
    case '\r':
      FUN_007a7500(local_104,local_218);
      _memset(local_218,0,0x100);
      local_114 = 0;
      local_218[0] = '\0';
      local_10c = FUN_004129c4(local_218);
      _memset(local_104,0,0x100);
      local_110 = 0;
      local_118 = local_118 + 1;
      iVar3 = local_114;
      break;
    case ' ':
      _memset(local_218,0,0x100);
      local_114 = 0;
      if (*(int *)(*(int *)(param_1 + 8) + 0x80) == 0) {
        local_21c = *(int *)(param_1 + 4);
      }
      else {
        local_21c = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 6);
      }
      local_10c = local_10c + local_21c;
      local_110 = local_110 + 1;
      iVar3 = local_114;
      break;
    case '%':
switchD_00412dd0_caseD_25:
      param_2 = pcVar2 + 4;
      break;
    case '\\':
      cVar1 = *param_2;
      local_108 = CONCAT31(local_108._1_3_,cVar1);
      param_2 = pcVar2 + 2;
      if (cVar1 != 'n') goto switchD_00412dd0_caseD_a8;
      FUN_007a7500(local_104,local_218);
      _memset(local_218,0,0x100);
      local_114 = 0;
      local_218[0] = '\0';
      local_10c = FUN_004129c4(local_218);
      _memset(local_104,0,0x100);
      local_110 = 0;
      local_118 = local_118 + 1;
      iVar3 = local_114;
      break;
    case -0x59:
      if (((((*param_2 != 'Y') && (*param_2 != 'W')) && (*param_2 != 'Z')) &&
          ((*param_2 != 'G' && (*param_2 != 'R')))) &&
         ((*param_2 != 'N' && ((*param_2 != 'M' && (*param_2 != -0x59))))))
      goto switchD_00412dd0_caseD_25;
      param_2 = pcVar2 + 2;
      break;
    default:
switchD_00412dd0_caseD_a8:
      if (*(int *)(*(int *)(param_1 + 8) + (local_108 & 0xff) * 4) == 0) {
        local_220 = *(int *)(param_1 + 4);
      }
      else {
        local_220 = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + (local_108 & 0xff) * 4) + 6);
      }
      local_10c = local_10c + local_220;
      local_218[local_114] = (char)local_108;
      iVar3 = local_114 + 1;
      if (param_3 < local_10c) {
        if (local_110 == 0) {
          pcVar2 = local_218 + local_114;
          local_114 = iVar3;
          *pcVar2 = '\0';
          FUN_007a7500(local_104,local_218);
          _memset(local_218,0,0x100);
          local_218[0] = (char)local_108;
          local_114 = 1;
          local_10c = FUN_004129c4(local_218);
          _memset(local_104,0,0x100);
        }
        else {
          local_114 = iVar3;
          local_10c = FUN_004129c4(local_218);
          _memset(local_104,0,0x100);
        }
        local_118 = local_118 + 1;
        local_110 = 0;
        iVar3 = local_114;
      }
    }
    local_114 = iVar3;
    local_108 = CONCAT31(local_108._1_3_,*param_2);
    pcVar2 = param_2;
  } while( true );
}


