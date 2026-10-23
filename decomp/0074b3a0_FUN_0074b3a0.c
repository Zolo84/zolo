// FUN_0074b3a0 @ 74b3a0 size=149

undefined1 * __fastcall FUN_0074b3a0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  DAT_00d4be08 = 0;
  pcVar8 = *(char **)(param_1 + 0x18);
  iVar7 = 0;
  bVar1 = false;
  bVar2 = false;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)&DAT_007f0c98;
  }
  uVar4 = 0xffffffff;
  iVar3 = 0;
  pcVar9 = pcVar8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar6 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar6 != '\0');
  iVar5 = ~uVar4 - 1;
  if ((2 < iVar5) && (0 < iVar5)) {
    iVar10 = 1;
    do {
      if (bVar1) {
        if (!bVar2) {
          if (((iVar5 <= iVar10) || (pcVar8[iVar3] != 'P')) || (pcVar8[iVar3 + 1] != ':')) {
            cVar6 = pcVar8[iVar3];
            goto LAB_0074b416;
          }
          bVar2 = true;
        }
      }
      else {
        cVar6 = pcVar8[iVar3];
        bVar1 = true;
        if ((cVar6 == 'N') && (pcVar8[iVar3 + 1] == ':')) {
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + 1;
        }
        else {
LAB_0074b416:
          (&DAT_00d4be08)[iVar7] = cVar6;
          iVar7 = iVar7 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar3 < iVar5);
  }
  (&DAT_00d4be08)[iVar7] = 0;
  return &DAT_00d4be08;
}


