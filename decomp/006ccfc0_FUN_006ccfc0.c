// FUN_006ccfc0 @ 6ccfc0 size=305

undefined4 __thiscall FUN_006ccfc0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_100 [256];
  
LAB_006ccfd3:
  do {
    while( true ) {
      while( true ) {
        iVar2 = FUN_00535490();
        FUN_00429d50((char *)(param_2 + 0x410),local_100);
        if (iVar2 == 1) break;
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0xe9) break;
      if (iVar2 == 0x10a) {
        uVar5 = 0xffffffff;
        pcVar8 = local_100;
        do {
          pcVar7 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar8 = pcVar7 + -uVar5;
        pcVar7 = param_1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else if (iVar2 == 0x1b1) {
        param_1[0x200] = *(int *)(param_2 + 0x40c) == 0x111;
      }
    }
    pcVar8 = s_UNKNOWN_STRING_WANTED_0083c758;
    uVar3 = FUN_0042b6c9(local_100);
    iVar2 = FUN_007a8730(uVar3,pcVar8);
    if (iVar2 != 0) {
      pcVar8 = (char *)FUN_0042b6c9(local_100);
      uVar5 = 0xffffffff;
      do {
        pcVar7 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar7 + -uVar5;
      pcVar7 = param_1 + 0x100;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      goto LAB_006ccfd3;
    }
    uVar5 = 0xffffffff;
    pcVar8 = (char *)(param_2 + 0x410);
    do {
      pcVar7 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar7 + -uVar5;
    pcVar7 = param_1 + 0x100;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
  } while( true );
}


