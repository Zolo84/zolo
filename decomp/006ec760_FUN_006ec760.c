// FUN_006ec760 @ 6ec760 size=1233

undefined4 FUN_006ec760(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  void *extraout_ECX;
  uint uVar8;
  uint uVar9;
  size_t _Count;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  int in_stack_00000100;
  void *in_stack_00001358;
  byte *in_stack_00001368;
  char *in_stack_0000136c;
  char in_stack_00001370;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_007da342;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  local_c = extraout_ECX;
  if (in_stack_00001368 == (byte *)0x0) {
    uVar8 = 0xffffffff;
    pcVar4 = &DAT_0083bf28;
    do {
      pcVar12 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar12 + -uVar8;
    pcVar12 = (char *)register0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    goto LAB_006ec8ff;
  }
  if (DAT_00dc3a00 == '\0') {
LAB_006ec890:
    uVar8 = 0xffffffff;
    do {
      pbVar10 = in_stack_00001368;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar10 = in_stack_00001368 + 1;
      bVar2 = *in_stack_00001368;
      in_stack_00001368 = pbVar10;
    } while (bVar2 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar10 + -uVar8;
    pbVar13 = (byte *)register0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar13 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
    }
  }
  else {
    pcVar4 = s_scenarios_0086f2e8;
    pbVar10 = in_stack_00001368;
    do {
      bVar2 = *pcVar4;
      bVar15 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_006ec7cf:
        iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_006ec7d4;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar4[1];
      bVar15 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_006ec7cf;
      pcVar4 = pcVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_006ec7d4:
    if (iVar5 == 0) {
      FUN_007a630a();
      uVar8 = 0xffffffff;
      pcVar4 = &DAT_0083bb50;
      do {
        pcVar12 = pcVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pcVar4 = (char *)register0x00000010;
      do {
        pcVar11 = pcVar4;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar4 = pcVar12 + -uVar8;
      pcVar12 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar4 = in_stack_0000136c;
      do {
        pcVar12 = pcVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pcVar4 = (char *)register0x00000010;
      do {
        pcVar11 = pcVar4;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar4 = pcVar12 + -uVar8;
      pcVar12 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      }
      iVar5 = FUN_007a7c64();
      if (iVar5 == -1) goto LAB_006ec890;
      FUN_007a630a();
    }
    else {
      FUN_007a630a();
    }
  }
  uVar8 = 0xffffffff;
  pcVar4 = &DAT_0083bb50;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar5 = -1;
  pcVar4 = (char *)register0x00000010;
  do {
    pcVar11 = pcVar4;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar1 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
LAB_006ec8ff:
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar4 = in_stack_0000136c;
  do {
    pcVar12 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar5 = -1;
  pcVar4 = (char *)register0x00000010;
  do {
    pcVar11 = pcVar4;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar1 != '\0');
  pcVar4 = pcVar12 + -uVar8;
  pcVar12 = pcVar11 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  local_4 = FUN_007a7c64();
  if (local_4 == -1) {
    uVar7 = 0;
  }
  else {
    do {
      if (in_stack_00000100 != 0x10) {
        puVar14 = (undefined4 *)register0x00000010;
        for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar4 = in_stack_0000136c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar9 = 0xffffffff;
        pcVar4 = &stack0x00000114;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        _Count = (~uVar9 - (~uVar8 - 1)) - 2;
        if (0 < (int)_Count) {
          _strncpy(&stack0x00000000,&stack0x00000114,_Count);
        }
        iVar5 = -1;
        pcVar4 = (char *)register0x00000010;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (iVar5 != -2) {
          FUN_00429d20();
          if (in_stack_00001370 == '\0') {
            FUN_007a630a();
            FUN_00534930();
            FUN_00535cb0();
            local_8 = operator_new(0x6c);
            if (local_8 == (undefined1 *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_006ed420();
            }
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = iVar5 + 0x12;
            }
            iVar3 = *(int *)((int)local_c + 8);
            piVar6 = operator_new(0xe);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = iVar5;
              piVar6[1] = iVar3;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar5 = *(int *)((int)local_c + 0xc);
            *(int **)((int)local_c + 8) = piVar6;
            *(int *)((int)local_c + 0xc) = iVar5 + 1;
            if (iVar5 == 0) {
              *(int **)((int)local_c + 4) = piVar6;
            }
            else {
              *(int **)(iVar3 + 8) = piVar6;
            }
          }
          else {
            FUN_007a630a();
            FUN_00534930();
            FUN_00535cb0();
            local_8 = operator_new(0x6c);
            if (local_8 == (undefined1 *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_006ed420();
            }
            FUN_006ed850();
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = iVar5 + 0x12;
            }
            iVar3 = *(int *)((int)local_c + 8);
            piVar6 = operator_new(0xe);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = iVar5;
              piVar6[1] = iVar3;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar5 = *(int *)((int)local_c + 0xc);
            *(int **)((int)local_c + 8) = piVar6;
            *(int *)((int)local_c + 0xc) = iVar5 + 1;
            if (iVar5 == 0) {
              *(int **)((int)local_c + 4) = piVar6;
            }
            else {
              *(int **)(iVar3 + 8) = piVar6;
            }
          }
          FUN_005349a0();
        }
      }
      iVar5 = FUN_007a7d31();
    } while (iVar5 == 0);
    FUN_007a7df9();
    uVar7 = 1;
  }
  ExceptionList = in_stack_00001358;
  return uVar7;
}


