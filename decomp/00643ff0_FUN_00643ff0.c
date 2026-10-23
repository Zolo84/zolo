// FUN_00643ff0 @ 643ff0 size=167

undefined4 FUN_00643ff0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  do {
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 4) {
      FUN_005343dc();
      return 0;
    }
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 0x527) {
      FUN_005343dc();
      iVar1 = *param_1;
      pcVar6 = s_BUTTON_LOCATE_ARMIES_00861f2c;
      iVar5 = 0;
      do {
        iVar3 = FUN_007a8730(iVar1 + 0x10,pcVar6);
        if (iVar3 == 0) {
          uVar4 = (&DAT_00861f28)[iVar5 * 0x41];
          goto LAB_00644051;
        }
        pcVar6 = pcVar6 + 0x104;
        iVar5 = iVar5 + 1;
      } while ((int)pcVar6 < 0x866234);
      uVar4 = 0xffffffff;
LAB_00644051:
      FUN_0049a100(uVar4);
    }
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 8) {
      FUN_005343dc();
    }
  } while( true );
}


