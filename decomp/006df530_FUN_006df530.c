// FUN_006df530 @ 6df530 size=934

void FUN_006df530(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_1e0;
  undefined2 local_1dc;
  char *local_1d8;
  undefined2 local_1d4;
  char *local_1cc;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [200];
  
  FUN_007a630a(local_1c8,s__s_HEADER_0086d454,param_1);
  pcVar2 = (char *)FUN_0042b6c9(local_1c8);
  FUN_007a630a(local_1c8,&DAT_0086d44c,param_1);
  pcVar3 = (char *)FUN_0042b6c9(local_1c8);
  FUN_007a630a(local_1c8,&DAT_0086d444,param_1);
  pcVar4 = (char *)FUN_0042b6c9(local_1c8);
  FUN_007a630a(local_1c8,&DAT_0086d43c,param_1);
  local_1cc = (char *)FUN_0042b6c9(local_1c8);
  FUN_007a630a(local_1c8,&DAT_0086d434,param_1);
  local_1d8 = (char *)FUN_0042b6c9(local_1c8);
  FUN_007a630a(local_1c8,&DAT_0086d48c,param_1);
  local_1e0 = (char *)FUN_0042b6c9(local_1c8);
  uVar5 = 0xffffffff;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = (char *)&DAT_00d2543c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_0086d430;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar2 = (char *)&DAT_00d2543c;
  do {
    pcVar8 = pcVar2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar2 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar3 = (char *)&DAT_00d2543c;
  do {
    pcVar9 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar2 + -uVar5;
  pcVar2 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  iVar7 = -1;
  pcVar3 = pcVar4;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar7 != -2) {
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0086d430;
    do {
      pcVar2 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar3 = (char *)&DAT_00d2543c;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar3 = pcVar2 + -uVar5;
    pcVar2 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar3 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar3;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar4 = (char *)&DAT_00d2543c;
    do {
      pcVar2 = pcVar4;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar2 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar2;
    } while (cVar1 != '\0');
    pcVar4 = pcVar3 + -uVar5;
    pcVar3 = pcVar2 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar7 = -1;
    pcVar4 = local_1cc;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      uVar5 = 0xffffffff;
      pcVar4 = &DAT_0086d430;
      do {
        pcVar3 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      pcVar4 = (char *)&DAT_00d2543c;
      do {
        pcVar2 = pcVar4;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar2;
      } while (cVar1 != '\0');
      pcVar4 = pcVar3 + -uVar5;
      pcVar3 = pcVar2 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar4 = local_1cc;
      do {
        pcVar3 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      pcVar4 = (char *)&DAT_00d2543c;
      do {
        pcVar2 = pcVar4;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar2;
      } while (cVar1 != '\0');
      pcVar4 = pcVar3 + -uVar5;
      pcVar3 = pcVar2 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      iVar7 = -1;
      pcVar4 = local_1d8;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar7 != -2) {
        uVar5 = 0xffffffff;
        pcVar4 = &DAT_0086d430;
        do {
          pcVar3 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar3 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar3;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_00d2543c;
        do {
          pcVar2 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar2 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar2;
        } while (cVar1 != '\0');
        pcVar4 = pcVar3 + -uVar5;
        pcVar3 = pcVar2 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar4 = local_1d8;
        do {
          pcVar3 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar3 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar3;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_00d2543c;
        do {
          pcVar2 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar2 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar2;
        } while (cVar1 != '\0');
        pcVar4 = pcVar3 + -uVar5;
        pcVar3 = pcVar2 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        iVar7 = -1;
        pcVar4 = local_1e0;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (iVar7 != -2) {
          uVar5 = 0xffffffff;
          pcVar4 = &DAT_0086d430;
          do {
            pcVar3 = pcVar4;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar3 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar3;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar7 = -1;
          pcVar4 = (char *)&DAT_00d2543c;
          do {
            pcVar2 = pcVar4;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar2 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar2;
          } while (cVar1 != '\0');
          pcVar4 = pcVar3 + -uVar5;
          pcVar3 = pcVar2 + -1;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar3 = pcVar3 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar3 + 1;
          }
          uVar5 = 0xffffffff;
          pcVar4 = local_1e0;
          do {
            pcVar3 = pcVar4;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar3 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar3;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar7 = -1;
          pcVar4 = (char *)&DAT_00d2543c;
          do {
            pcVar2 = pcVar4;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar2 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar2;
          } while (cVar1 != '\0');
          pcVar4 = pcVar3 + -uVar5;
          pcVar3 = pcVar2 + -1;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar3 = pcVar3 + 4;
          }
          local_1d8 = DAT_00d6138e;
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar3 + 1;
          }
          local_1d4 = DAT_00d61392;
          local_1dc = 0;
          uVar5 = (uint)local_1e0 >> 0x18;
          local_1e0 = (char *)CONCAT13((char)uVar5,0x100);
          FUN_0042dee0(&local_1e0);
          FUN_0079168d(local_c8,&local_1d8);
          FUN_007a630a(&DAT_00d2dca8,&DAT_00d2543c,local_c8);
          uVar5 = 0xffffffff;
          pcVar4 = &DAT_00d2dca8;
          do {
            pcVar3 = pcVar4;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar3 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar3;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar4 = pcVar3 + -uVar5;
          pcVar3 = (char *)&DAT_00d2543c;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar3 = pcVar3 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar3 = pcVar3 + 1;
          }
        }
      }
    }
  }
  FUN_006df410(&DAT_00d2543c);
  return;
}


