// FUN_0079168d @ 79168d size=557

void FUN_0079168d(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  int local_110;
  int local_10c;
  char local_108 [256];
  char *local_8;
  
  local_110 = 0;
  sVar1 = _strlen(&DAT_00dc2aa0);
  for (local_10c = 0; local_10c < (int)sVar1; local_10c = local_10c + 1) {
    switch((&DAT_00dc2aa0)[local_10c]) {
    case 0x44:
      iVar2 = FUN_0042db70();
      FUN_007a630a(local_108,&DAT_0087b6dc,iVar2 + 1);
      FUN_007a74f0(param_1 + local_110,local_108);
      sVar3 = _strlen(local_108);
      local_110 = local_110 + sVar3;
      break;
    default:
      *(undefined *)(param_1 + local_110) = (&DAT_00dc2aa0)[local_10c];
      local_110 = local_110 + 1;
      break;
    case 0x48:
      FUN_007a630a(local_108,&DAT_0087b6d8,(int)*param_2);
      FUN_007a74f0(param_1 + local_110,local_108);
      sVar3 = _strlen(local_108);
      local_110 = local_110 + sVar3;
      break;
    case 0x4d:
      local_8 = (char *)FUN_0042b6c9((&PTR_s_JANUARY_00866390)[(int)param_2[2] % 0xc]);
      FUN_007a74f0(param_1 + local_110,local_8);
      sVar3 = _strlen(local_8);
      local_110 = local_110 + sVar3;
      break;
    case 0x59:
      FUN_007a630a(local_108,&DAT_0087b6e0,(int)*(short *)(param_2 + 4));
      FUN_007a74f0(param_1 + local_110,local_108);
      sVar3 = _strlen(local_108);
      local_110 = local_110 + sVar3;
    }
  }
  *(undefined1 *)(param_1 + local_110) = 0;
  return;
}


