// FUN_00732570 @ 732570 size=392

undefined4 __thiscall FUN_00732570(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  local_4 = 0;
  do {
    while( true ) {
      while (iVar1 = FUN_00535490(), iVar1 != 1) {
        if (iVar1 == 2) {
          return 0;
        }
        piVar2 = (int *)FUN_00534391();
        if (*piVar2 == 4) {
          FUN_005343dc();
          if (DAT_00dc4b5e != '\0') {
            iVar1 = *(int *)(param_1 + 0x1a);
            if ((iVar1 == 0) && (*(int *)(param_1 + 0x1e) == 0)) {
              FUN_00429a00(s_ERROR___Invalid_or_missing_count_00872a90,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
            }
            else {
              if (iVar1 != *(int *)(param_1 + 0x1e)) {
                return 0;
              }
              uVar3 = FUN_004af700(iVar1,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
              FUN_00429a00(s_ERROR___Same_country_TAG___s__us_00872a40,uVar3);
            }
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          return 0;
        }
      }
      if (param_2[1] == 0xec) break;
      FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    piVar2 = param_2 + 0x104;
    if (local_4 == 0) {
      iVar1 = FUN_004af6b0(piVar2);
      *(int *)(param_1 + 0x12) = iVar1;
      *(int *)(param_1 + 0x1a) = iVar1;
      if ((DAT_00dc4b5e != '\0') && (iVar1 == 0)) {
        iVar1 = param_2[0x103];
        goto joined_r0x00732633;
      }
    }
    else {
      iVar1 = FUN_004af6b0(piVar2);
      *(int *)(param_1 + 0x16) = iVar1;
      *(int *)(param_1 + 0x1e) = iVar1;
      if ((DAT_00dc4b5e != '\0') && (iVar1 == 0)) {
        iVar1 = param_2[0x103];
joined_r0x00732633:
        if (iVar1 != 0x524) {
          FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00872ad8,piVar2,param_2 + 2,
                       *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}


