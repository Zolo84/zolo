// FUN_006ec610 @ 6ec610 size=328

void FUN_006ec610(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t _Count;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 1;
  _Count = 0;
  if (0 < iVar3) {
    do {
      DAT_00d407d4._0_1_ = 0;
      if ((param_1[_Count] == '%') && (param_1[_Count + 1] == 't')) {
        _strncpy((char *)&DAT_00d407d4,param_1,_Count);
        *(undefined1 *)((int)&DAT_00d407d4 + _Count) = 0;
        iVar3 = __ftol();
        if (iVar3 < 1) {
          pcVar7 = s_MESS_MASTERCALL1_0086f2d4;
        }
        else if (iVar3 < 2) {
          pcVar7 = s_MESS_MASTERCALL2_0086f2c0;
        }
        else if (iVar3 < 3) {
          pcVar7 = s_MESS_MASTERCALL3_0086f2ac;
        }
        else if (iVar3 < 4) {
          pcVar7 = s_MESS_MASTERCALL4_0086f298;
        }
        else if (iVar3 < 5) {
          pcVar7 = s_MESS_MASTERCALL5_0086f284;
        }
        else {
          pcVar7 = s_MESS_MASTERCALL6_0086f270;
        }
        pcVar7 = (char *)FUN_0042b6c9(pcVar7);
        uVar2 = 0xffffffff;
        do {
          pcVar6 = pcVar7;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar7 = (char *)&DAT_00d407d4;
        do {
          pcVar5 = pcVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar5 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar5;
        } while (cVar1 != '\0');
        pcVar7 = pcVar6 + -uVar2;
        pcVar6 = pcVar5 + -1;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
        uVar2 = 0xffffffff;
        pcVar7 = param_1 + _Count + 2;
        do {
          pcVar6 = pcVar7;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar7 = (char *)&DAT_00d407d4;
        do {
          pcVar5 = pcVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar5 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar5;
        } while (cVar1 != '\0');
        pcVar7 = pcVar6 + -uVar2;
        pcVar6 = pcVar5 + -1;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
        uVar2 = 0xffffffff;
        pcVar7 = (char *)&DAT_00d407d4;
        do {
          pcVar6 = pcVar7;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        pcVar7 = pcVar6 + -uVar2;
        pcVar6 = param_1;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
        uVar2 = 0xffffffff;
        pcVar7 = param_1;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar3 = ~uVar2 - 1;
        _Count = 0;
      }
      _Count = _Count + 1;
    } while ((int)_Count < iVar3);
  }
  DAT_00d407d4._0_1_ = 0;
  return;
}


