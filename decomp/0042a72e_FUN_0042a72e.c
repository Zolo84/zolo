// FUN_0042a72e @ 42a72e size=3995

void FUN_0042a72e(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  int *extraout_ECX;
  int iStackY_14334;
  int iStackY_14330;
  int iStackY_1432c;
  int iStackY_14328;
  int iStackY_14324;
  int iStackY_14320;
  char acStackY_14310 [12];
  int iStackY_14304;
  char *pcStackY_14300;
  void *pvStackY_142fc;
  char *pcStackY_142f8;
  int iStackY_141f4;
  char acStackY_141f0 [256];
  int iStackY_140f0;
  uint uStackY_140e4;
  int aiStackY_140e0 [10];
  int aiStackY_140b8 [10];
  int aiStackY_14090 [10];
  int aiStackY_14068 [10];
  int aiStackY_14040 [10];
  char acStackY_14018 [81920];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ba03c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a69e0();
  uStackY_140e4 = CONCAT31(uStackY_140e4._1_3_,1);
  iVar2 = _strcmp(param_1,s_config_mods_csv_0083aae0);
  if (iVar2 == 0) {
    uStackY_140e4 = uStackY_140e4 & 0xffffff00;
  }
  iStackY_141f4 = FUN_007a6615();
  if (iStackY_141f4 == 0) {
    if (DAT_00dc3a00 != '\0') {
      FUN_007a630a();
      iStackY_141f4 = FUN_007a6615();
    }
    if (iStackY_141f4 == 0) {
      ExceptionList = local_10;
      return;
    }
  }
  FUN_007a6429();
  FUN_00426120();
  local_8 = 0;
  while( true ) {
    FUN_004265c0();
    iVar2 = FUN_007a8730();
    if (iVar2 == 0) break;
    if (((acStackY_141f0[0] != '#') && (acStackY_141f0[0] != '\0')) && (acStackY_141f0[1] != '\0'))
    {
      pcVar3 = (char *)_strlen(acStackY_141f0);
      for (iStackY_140f0 = 0; iStackY_140f0 < (int)pcVar3; iStackY_140f0 = iStackY_140f0 + 1) {
        if (acStackY_141f0[iStackY_140f0] == ' ') {
          if (DAT_00dc4b5f != '\0') {
            FUN_00429a50();
          }
          pcVar3 = acStackY_141f0;
          FUN_00429a00();
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      for (iStackY_140f0 = 0; iStackY_140f0 < 10; iStackY_140f0 = iStackY_140f0 + 1) {
        FUN_004265c0();
      }
      if (DAT_00dc4b5e != '\0') {
        for (iStackY_140f0 = 0; iStackY_140f0 < 10; iStackY_140f0 = iStackY_140f0 + 1) {
          aiStackY_140b8[iStackY_140f0] = 0;
          aiStackY_14068[iStackY_140f0] = 0;
          aiStackY_14090[iStackY_140f0] = 0;
          aiStackY_140e0[iStackY_140f0] = 0;
          aiStackY_14040[iStackY_140f0] = 0;
        }
        for (iStackY_140f0 = 0; iStackY_140f0 < 10; iStackY_140f0 = iStackY_140f0 + 1) {
          pcStackY_14300 = acStackY_14018 + iStackY_140f0 * 0x2000;
          pcVar3 = (char *)_strlen(pcStackY_14300);
          for (iStackY_14304 = 0; iStackY_14304 < (int)pcVar3; iStackY_14304 = iStackY_14304 + 1) {
            if (pcStackY_14300[iStackY_14304] == '%') {
              aiStackY_140b8[iStackY_140f0] = aiStackY_140b8[iStackY_140f0] + 1;
              if (pcStackY_14300[iStackY_14304 + 1] == 's') {
                aiStackY_14068[iStackY_140f0] = aiStackY_14068[iStackY_140f0] + 1;
              }
              else if (pcStackY_14300[iStackY_14304 + 1] == 'd') {
                aiStackY_14090[iStackY_140f0] = aiStackY_14090[iStackY_140f0] + 1;
              }
              else if (pcStackY_14300[iStackY_14304 + 1] == 'f') {
                aiStackY_140e0[iStackY_140f0] = aiStackY_140e0[iStackY_140f0] + 1;
              }
              else if (pcStackY_14300[iStackY_14304 + 1] == 'c') {
                aiStackY_14040[iStackY_140f0] = aiStackY_14040[iStackY_140f0] + 1;
              }
              else if (pcStackY_14300[iStackY_14304 + 1] == '.') {
                if (pcStackY_14300[iStackY_14304 + 2] == 'f') {
                  aiStackY_140e0[iStackY_140f0] = aiStackY_140e0[iStackY_140f0] + 1;
                }
                else if (pcStackY_14300[iStackY_14304 + 3] == 'f') {
                  aiStackY_140e0[iStackY_140f0] = aiStackY_140e0[iStackY_140f0] + 1;
                }
                else {
                  DAT_0089352c = DAT_0089352c + 1;
                  if (DAT_00dc4b5f != '\0') {
                    FUN_00429a50();
                  }
                  pcVar3 = param_1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
              else if ((pcStackY_14300[iStackY_14304 + 1] == '+') &&
                      (((pcStackY_14300[iStackY_14304 + 2] == 'f' ||
                        (pcStackY_14300[iStackY_14304 + 3] == 'f')) ||
                       (pcStackY_14300[iStackY_14304 + 4] == 'f')))) {
                aiStackY_140e0[iStackY_140f0] = aiStackY_140e0[iStackY_140f0] + 1;
              }
              else if (pcStackY_14300[iStackY_14304 + 1] != 't') {
                if (pcStackY_14300[iStackY_14304 + 1] == '%') {
                  iStackY_14304 = iStackY_14304 + 1;
                }
                else if ((iStackY_14304 < 1) || (pcStackY_14300[iStackY_14304 + -1] != '\\')) {
                  DAT_0089352c = DAT_0089352c + 1;
                  if (DAT_00dc4b5f != '\0') {
                    FUN_00429a50();
                  }
                  pcVar3 = param_1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                else {
                  iStackY_14304 = iStackY_14304 + 1;
                }
              }
            }
          }
        }
        if (DAT_00dc4b5f != '\0') {
          acStackY_14310[0] = '\0';
          acStackY_14310[1] = 1;
          acStackY_14310[2] = 1;
          acStackY_14310[3] = 1;
          acStackY_14310[4] = 1;
          acStackY_14310[5] = 1;
          acStackY_14310[6] = 0;
          acStackY_14310[7] = 1;
          acStackY_14310[8] = 0;
          acStackY_14310[9] = 0;
          for (iStackY_140f0 = 0; iStackY_140f0 < 10; iStackY_140f0 = iStackY_140f0 + 1) {
            if (acStackY_14310[iStackY_140f0] != '\0') {
              sVar4 = _strlen(acStackY_14018);
              if ((sVar4 < 2) ||
                 (sVar4 = _strlen(acStackY_14018 + iStackY_140f0 * 0x2000), sVar4 != 0)) {
                if (aiStackY_14068[iStackY_140f0] != aiStackY_14068[0]) {
                  DAT_0089352c = DAT_0089352c + 1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if (aiStackY_14090[iStackY_140f0] != aiStackY_14090[0]) {
                  DAT_0089352c = DAT_0089352c + 1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if (aiStackY_140e0[iStackY_140f0] != aiStackY_140e0[0]) {
                  DAT_0089352c = DAT_0089352c + 1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if (aiStackY_14040[iStackY_140f0] != aiStackY_14040[0]) {
                  DAT_0089352c = DAT_0089352c + 1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if (aiStackY_140b8[iStackY_140f0] != aiStackY_140b8[0]) {
                  DAT_0089352c = DAT_0089352c + 1;
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
              else {
                DAT_0089352c = DAT_0089352c + 1;
                FUN_00429a00();
              }
            }
          }
        }
      }
      pcStackY_142f8 = acStackY_14018 + param_2 * 0x2000;
      sVar4 = _strlen(pcStackY_142f8);
      uVar5 = sVar4 + 1;
      pvStackY_142fc = operator_new(uVar5);
      for (iStackY_140f0 = 0; iStackY_140f0 < (int)uVar5; iStackY_140f0 = iStackY_140f0 + 1) {
        if (((pcStackY_142f8[iStackY_140f0] == '\\') && (iStackY_140f0 < (int)(uVar5 - 1))) &&
           (pcStackY_142f8[iStackY_140f0 + 1] == 'n')) {
          *(undefined1 *)((int)pvStackY_142fc + iStackY_140f0) = 0xd;
          *(undefined1 *)((int)pvStackY_142fc + iStackY_140f0 + 1) = 10;
          iStackY_140f0 = iStackY_140f0 + 1;
        }
        else {
          *(char *)((int)pvStackY_142fc + iStackY_140f0) = pcStackY_142f8[iStackY_140f0];
        }
      }
      if (DAT_0083a6e4 == '\0') {
        (**(code **)(*extraout_ECX + 0x18))();
      }
      else {
        if (((DAT_00dc4b5f != '\0') && (iVar2 = FUN_0042b6c9(), iVar2 != 0)) &&
           (iVar2 = FUN_007a8730(), iVar2 != 0)) {
          iStackY_14334 = 0;
          iStackY_14328 = 0;
          iStackY_14320 = 0;
          iStackY_14330 = 0;
          iStackY_14324 = 0;
          FUN_007a74f0();
          sVar4 = _strlen(&DAT_00891508);
          for (iStackY_1432c = 0; iStackY_1432c < (int)sVar4; iStackY_1432c = iStackY_1432c + 1) {
            if ((&DAT_00891508)[iStackY_1432c] == '%') {
              iStackY_14334 = iStackY_14334 + 1;
              if ((&DAT_00891509)[iStackY_1432c] == 's') {
                iStackY_14328 = iStackY_14328 + 1;
              }
              else if ((&DAT_00891509)[iStackY_1432c] == 'd') {
                iStackY_14320 = iStackY_14320 + 1;
              }
              else if ((&DAT_00891509)[iStackY_1432c] == 'f') {
                iStackY_14330 = iStackY_14330 + 1;
              }
              else if ((&DAT_00891509)[iStackY_1432c] == 'c') {
                iStackY_14324 = iStackY_14324 + 1;
              }
              else if ((&DAT_00891509)[iStackY_1432c] == '.') {
                if ((&DAT_0089150a)[iStackY_1432c] == 'f') {
                  iStackY_14330 = iStackY_14330 + 1;
                }
                else if ((&DAT_0089150b)[iStackY_1432c] == 'f') {
                  iStackY_14330 = iStackY_14330 + 1;
                }
              }
              else if (((&DAT_00891509)[iStackY_1432c] == '+') &&
                      ((((&DAT_0089150a)[iStackY_1432c] == 'f' ||
                        ((&DAT_0089150b)[iStackY_1432c] == 'f')) ||
                       ((&DAT_0089150c)[iStackY_1432c] == 'f')))) {
                iStackY_14330 = iStackY_14330 + 1;
              }
              else if ((&DAT_00891509)[iStackY_1432c] != 't') {
                if ((&DAT_00891509)[iStackY_1432c] == '%') {
                  iStackY_1432c = iStackY_1432c + 1;
                }
                else if ((0 < iStackY_1432c) && (*(char *)(iStackY_1432c + 0x891507) == '\\')) {
                  iStackY_1432c = iStackY_1432c + 1;
                }
              }
            }
          }
          if (iStackY_14328 != aiStackY_14068[0]) {
            DAT_0089352c = DAT_0089352c + 1;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          if (iStackY_14320 != aiStackY_14090[0]) {
            DAT_0089352c = DAT_0089352c + 1;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          if (iStackY_14330 != aiStackY_140e0[0]) {
            DAT_0089352c = DAT_0089352c + 1;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          if (iStackY_14324 != aiStackY_14040[0]) {
            DAT_0089352c = DAT_0089352c + 1;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          if (iStackY_14334 != aiStackY_140b8[0]) {
            DAT_0089352c = DAT_0089352c + 1;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
        cVar1 = FUN_0042c140();
        if ((cVar1 == '\0') && (DAT_00dc4b5e != '\0')) {
          if ((uStackY_140e4 & 0xff) == 0) {
            FUN_00429a00();
          }
          else {
            if (DAT_00dc4b5f != '\0') {
              FUN_00429a50();
            }
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
    }
    FUN_00426330();
  }
  local_8 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_10;
  return;
}


